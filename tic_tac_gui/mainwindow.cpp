#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sign_in.h"
#include "sign_up.h"
#include "player.h"
#include "tictactoe.h"
#include <QVBoxLayout>
extern QString user;
extern QString DataBase_path;

player* plyr = nullptr;
QString unClecked_style = R"(QPushButton{
                                background-color: rgba(0, 0, 0, 0);
                                border: 1px solid rgba(0, 0, 0, 0);}
                            QPushButton:hover{
                                background-color: rgba(255, 255, 255, 50);
                                border: 1px solid rgba(20, 20, 20, 200);})";
QString X_O_Clecked_style = R"(QPushButton {
                                background-color: rgba(0, 0, 0, 30);
                                border: 1px solid rgba(10, 10, 10, 255);}
                            QPushButton:hover {
                                background-color: rgba(150, 150, 150, 50);
                                border: 1px solid rgba(20, 20, 20, 200);})";
QString three_Xs_Clecked_style = R"(QPushButton {
                                    background-color: rgba(0, 0, 0, 30);
                                    border: 1px solid rgba(10, 10, 10, 255);}
                                QPushButton:hover {
                                    background-color: rgba(150, 150, 150, 50);
                                    border: 1px solid rgba(20, 20, 20, 200);})";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), tictactoeGame(new TicTacToe(this, true)) // Initialize TicTacToe
{

    ui->setupUi(this);
    setWindowTitle("Tic Tac Tooooo");
    setFixedSize(800, 611);
    ui->stackedWidget->setCurrentIndex(0); // initialize the main page to be the home page
    ui->X_O_listWidget_2->hide();
    ui->X_O_listWidget->hide();
    ui->welcome_icon->hide();
    ui->tictactoeButton->hide();
    ui->threeXsButton->hide();
    ui->tictactoeVsComputerButton->hide();
    plyr = player::getInstance();   // Initialize the player object

           // Add a layout to the main window programmatically if it doesn't exist
    QVBoxLayout *layout = new QVBoxLayout(this);
    ui->centralwidget->setLayout(layout);

           // Connect the tictactoeButton to its slot
    connect(ui->tictactoeButton, &QPushButton::clicked, this, &MainWindow::on_tictactoeButton_clicked);
    // Connect the tictactoeVsComputerButton to its slot
    connect(ui->tictactoeVsComputerButton, &QPushButton::clicked, this, &MainWindow::on_tictactoeVsComputerButton_clicked);
    connect(ui->threeXsButton, &QPushButton::clicked, this, &MainWindow::on_threeXsButton_clicked);

           // Create the TicTacToe game widget but do not show it yet
    tictactoeGame = new TicTacToe(this, false);

    layout->addWidget(tictactoeGame); // Add the game widget to the layout
    tictactoeGame->hide();

    connect(tictactoeGame, &TicTacToe::returnToMainMenu, this, &MainWindow::show);
    connect(tictactoeGame, &TicTacToe::returnToMainMenu, tictactoeGame, &TicTacToe::hide);
    connect(tictactoeGame, &TicTacToe::closeGame, this, &MainWindow::handleGameClose);
    connect(ui->historyButton, &QPushButton::clicked, this, &MainWindow::updateGameHistory);

    tictactoe = new TicTacToe(this, false);
    layout->addWidget(tictactoe); // Add the game widget to the layout
    tictactoe->hide();

    connect(tictactoe, &TicTacToe::returnToMainMenu, this, &MainWindow::show);
    connect(tictactoe, &TicTacToe::returnToMainMenu, tictactoe, &TicTacToe::hide);
    connect(tictactoe, &TicTacToe::closeGame, this, &MainWindow::handleGameClose);
    connect(ui->historyButton, &QPushButton::clicked, this, &MainWindow::updateGameHistory);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete tictactoeGame;
}

void MainWindow::update_AndGoTo_Home_After_Signed()
{
    ui->homeButton->click();
}

void MainWindow::update_AndGoTo_History_After_Signed()
{
    ui->historyButton->click();
}

void MainWindow::on_homeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    if (plyr->isSigned())
    {
        ui->HI_message->setText(QString::fromStdString(plyr->getUsername()));
        ui->HI_message->setStyleSheet("color: gray; font-size: 17px;");
        ui->HI_message->setFont(QFont(ui->HI_message->font().family(), -1, QFont::Bold));
        ui->HI_message->setAlignment(Qt::AlignLeft);

        ui->sign_pushButton->close();
        ui->welcome_icon->show();
    }
    // remove the sign in button
}

void MainWindow::on_historyButton_clicked()
{
    QElapsedTimer timer2;
    timer2.start();
    if (plyr->isSigned()){
        ui->stackedWidget->setCurrentIndex(2);
        extern QString user;
        mydb = QSqlDatabase::addDatabase("QSQLITE","myconnection");
        mydb.setDatabaseName(DataBase_path);
        if (!mydb.open()) {
            qDebug() << "Failed to open the database:" << mydb.lastError().text();
        } else {
            qDebug() << "Connected to the database";
        }
        qDebug() << "The user is:" << user;
    updateGameHistory();
    }
    else
        ui->stackedWidget->setCurrentIndex(1);
    qint64 elapsed = timer2.nsecsElapsed(); // Get elapsed time in nanoseconds
    qDebug() << "Elapsed time:" << elapsed << "ns";
}

void MainWindow::on_aboutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_sign_pushButton_clicked()
{
    sign_in SignInWindow;
    connect(&SignInWindow, &sign_in::signedIn, this, &MainWindow::update_AndGoTo_Home_After_Signed);
    SignInWindow.setModal(true);
    SignInWindow.exec();
}

void MainWindow::on_sign_in_clicked()
{
    sign_in SignInWindow;
    connect(&SignInWindow, &sign_in::signedIn, this, &MainWindow::update_AndGoTo_History_After_Signed);
    SignInWindow.setModal(true);
    SignInWindow.exec();
}

void MainWindow::on_sign_up_clicked()
{
    sign_up SignUpWindow;
    connect(&SignUpWindow, &sign_up::signedUP, this, &MainWindow::update_AndGoTo_Home_After_Signed);
    SignUpWindow.setModal(true);
    SignUpWindow.exec();
}

void MainWindow::on_exitButton_clicked()
{
    QApplication::quit();
}

void MainWindow::on_X_O_pushButton_toggled(bool checked)
{
    if (ui->X_O_pushButton->isChecked())
        ui->X_O_pushButton->setStyleSheet(X_O_Clecked_style);
    else
        ui->X_O_pushButton->setStyleSheet(unClecked_style);
}

void MainWindow::on_three_Xs_pushButton_clicked()
{
    if (ui->three_Xs_pushButton->isChecked())
        ui->three_Xs_pushButton->setStyleSheet(three_Xs_Clecked_style);
    else
        ui->three_Xs_pushButton->setStyleSheet(unClecked_style);
}

void MainWindow::on_tictactoeButton_clicked()
{


    tictactoeGame->setVsComputer(false);
    tictactoeGame->resetGame(); // Reset the game
    tictactoeGame->show(); // Show the game widget

}

void MainWindow::on_tictactoeVsComputerButton_clicked()
{
    // Select difficulty level before starting the game
    // For demonstration, setting it to Medium. You can add UI to choose difficulty.
    tictactoeGame->setVsComputer(true);
    tictactoeGame->setDifficulty(TicTacToe::Medium); // Set difficulty
    tictactoeGame->resetGame(); // Reset the game
    qDebug()<<    tictactoeGame->threeXsMode;
    tictactoeGame->show(); // Show the game widget

}

void MainWindow::handleGameClose()
{
    qDebug() << "handleGameClose slot called";
    tictactoeGame->hide(); // Hide the game widget

    this->show(); // Show the main window
}
void MainWindow::updateGameHistory()
{
    if (!ui->gameHistoryTextEdit) {
        qDebug() << "gameHistoryTextEdit widget is not valid or named differently.";
        return;
    }

           // Clear existing text
    ui->gameHistoryTextEdit->clear();
    ui->gameHistoryTextEdit->setStyleSheet("border: none; background: transparent;");



           // Fetch statistics from the database
    QSqlDatabase mydb = QSqlDatabase::database("myconnection"); // Use the named connection
    if (!mydb.isValid()) {
        qDebug() << "Database connection is not valid.";
        return;
    }

    QString queryStr = "SELECT total_matches, matches_win, matches_loss, win_rate FROM data WHERE username = '" + user + "'";
    QSqlQuery query(mydb);
    if (query.exec(queryStr)) {
        if (query.next()) {
            int totalMatches = query.value(0).toInt();
            int matchesWin = query.value(1).toInt();
            int matchesLoss = query.value(2).toInt();
            float winRate = query.value(3).toFloat();

                   // Construct the statistics text
            QString statsText = QString(
                                        "<tr><td>Total Matches:</td><td>%1</td></tr>"
                                        "<tr><td>Wins:</td><td>%2</td></tr>"
                                        "<tr><td>Losses:</td><td>%3</td></tr>"
                                        "<tr><td>Win Rate:</td><td>%4%</td></tr>"
                                        ).arg(totalMatches).arg(matchesWin).arg(matchesLoss).arg(winRate);

                   // Set the entire statistics as rich text with slightly reduced font size
            QString richText = R"(
                <html>
                <head>
                <style>
                    body {
                        font-family: 'Trebuchet MS', Arial, Helvetica, sans-serif;
                    }
                    h2 {
                        color: #4CAF50;
                        text-align: center;
                        font-family: 'Trebuchet MS', Arial, Helvetica, sans-serif;
                        margin-bottom: 20px;
                        font-size: 24px;
                    }
                    .statistics {
                        border-collapse: collapse;
                        width: 80%;
                        margin: auto;
                        font-family: 'Trebuchet MS', Arial, Helvetica, sans-serif;
                        margin-bottom: 20px;
                        border-radius: 10px;
                        overflow: hidden;
                        font-size: 16px;
                    }
                    .statistics th, .statistics td {
                        border: 1px solid #ddd;
                        padding: 10px;
                        text-align: left;
                        border-radius: 10px;
                    }
                    .statistics tr:nth-child(even) {background-color: #f2f2f2;}
                    .statistics tr:hover {background-color: #ddd;}
                    .statistics th {
                        padding-top: 12px;
                        padding-bottom: 12px;
                        text-align: left;
                        background-color: #4CAF50;
                        color: white;
                        font-size: 18px;
                    }
                    .container {
                        padding: 20px;
                        border: 2px solid #4CAF50;
                        border-radius: 10px;
                        background-color: #f9f9f9;
                        width: 80%;
                        margin: auto;
                    }
                    .username {
                        font-family: 'Trebuchet MS', Arial, Helvetica, sans-serif;
                        font-size: 20px;
                        font-weight: bold;
                        color: #4CAF50;
                        text-align: center;
                        margin-bottom: 10px;
                    }
                </style>
                </head>
                <body>
                    <div class='container'>
                        <div class='username'>User: )" + user + R"(</div>
                        <h2>Statistics</h2>
                        <table class='statistics'>
                            <tr><th>Statistic</th><th>Value</th></tr>
                            )" + statsText + R"(
                        </table>
                    </div>
                </body>
                </html>
            )";
            ui->gameHistoryTextEdit->setHtml(richText);
        } else {
            qDebug() << "No statistics found for user:" << user;
            // Display message if no statistics found
            QString richText = R"(
                <html>
                <head>
                <style>
                    body {
                        font-family: 'Trebuchet MS', Arial, Helvetica, sans-serif;
                    }
                    h2 {
                        color: #4CAF50;
                        text-align: center;
                        font-family: 'Trebuchet MS', Arial, Helvetica, sans-serif;
                        margin-bottom: 20px;
                        font-size: 24px;
                    }
                    .container {
                        padding: 20px;
                        border: 2px solid #4CAF50;
                        border-radius: 10px;
                        background-color: #f9f9f9;
                        width: 80%;
                        margin: auto;
                    }
                    .username {
                        font-family: 'Trebuchet MS', Arial, Helvetica, sans-serif;
                        font-size: 20px;
                        font-weight: bold;
                        color: #4CAF50;
                        text-align: center;
                        margin-bottom: 10px;
                    }
                    .message {
                        font-family: 'Trebuchet MS', Arial, Helvetica, sans-serif;
                        font-size: 18px;
                        color: #FF0000;
                        text-align: center;
                        margin-top: 20px;
                    }
                </style>
                </head>
                <body>
                    <div class='container'>
                        <div class='username'>User: )" + user + R"(</div>
                        <h2>Statistics</h2>
                        <div class='message'>No statistics found for user.</div>
                    </div>
                </body>
                </html>
            )";
            ui->gameHistoryTextEdit->setHtml(richText);
        }
    } else {
        qDebug() << "Failed to execute query:" << query.lastError().text();
    }
}

void MainWindow::on_threeXsButton_clicked()
{
    tictactoe->setVsComputer(true);
    tictactoe->setDifficulty(TicTacToe::Medium); // Set difficulty
    tictactoe->resetGame(); // Reset the game
    tictactoe->show(); // Show the game widget
    tictactoe->threeXsMode=true;
    void handleButtonClick();


}

