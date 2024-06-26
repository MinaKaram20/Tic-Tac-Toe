#include <QMessageBox>
#include <QFont>
#include <QGridLayout>
#include <QDateTime>
#include <cstdlib>
#include <ctime>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFrame>
#include <QPushButton>
#include <QLabel>
#include <QResizeEvent>
#include "tictactoe.h"
#include "winnerwidget.h"
#include <QtSql>
# include <QDebug>
# include <QFileInfo>
#include"sign_in.h"
#include<iostream>
extern int gameseq;
extern int countX ;
extern QString user;
extern QString DataBase_path;
#include <QElapsedTimer>

#include <QStack>




SquareWidget::SquareWidget(QWidget *parent) : QWidget(parent) {}

void SquareWidget::resizeEvent(QResizeEvent *event) {
    int size = qMin(event->size().width(), event->size().height());
    setFixedSize(size, size);
}

TicTacToe::TicTacToe(QWidget *parent, bool vsComputer, Difficulty difficulty)
    : QWidget(parent), isXturn(true), m_vsComputer(vsComputer), currentDifficulty(difficulty) {
    qDebug()<<"here"<<threeXsMode;

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    winnerWidget = new WinnerWidget(this);
    winnerWidget->hide();
    connect(winnerWidget, &WinnerWidget::resetGame, this, &TicTacToe::resetGame);
    mainLayout->addWidget(winnerWidget);

    QFrame *backgroundFrame = new QFrame(this);
    if (threeXsMode) {
        backgroundFrame->setStyleSheet("background-color: #333; border: 2px solid #888; border-radius: 10px; padding: 20px; color: #fff;");
    } else {
        backgroundFrame->setStyleSheet("background-color: #f0f0f0; border: 2px solid #888; border-radius: 10px; padding: 20px; color: #333;");
    }
    backgroundFrame->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QVBoxLayout *backgroundLayout = new QVBoxLayout(backgroundFrame);
    backgroundLayout->setSpacing(20);
    backgroundLayout->setAlignment(Qt::AlignCenter);

    QHBoxLayout *scoreLayout = new QHBoxLayout();
    xScoreLabel = new QLabel("X: 0", this);
    oScoreLabel = new QLabel("O: 0", this);
    xScoreLabel->setFont(QFont("Arial", 18, QFont::Bold));
    oScoreLabel->setFont(QFont("Arial", 18, QFont::Bold));
    xScoreLabel->setStyleSheet("color: #0056b3; font-size: 18px;");
    oScoreLabel->setStyleSheet("color: #ed7b9c; font-size: 18px;");
    xScoreLabel->setFixedSize(120, 60);
    oScoreLabel->setFixedSize(120, 60);
    scoreLayout->addWidget(xScoreLabel);
    scoreLayout->addWidget(oScoreLabel);
    scoreLayout->setSpacing(30);

    backgroundLayout->addLayout(scoreLayout);

    SquareWidget *squareWidget = new SquareWidget(this);
    QGridLayout *gridLayout = new QGridLayout(squareWidget);
    gridLayout->setSpacing(10);
    gridLayout->setContentsMargins(20, 20, 20, 20);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            buttons[i][j] = new QPushButton(this);

            if (!buttons[i][j]->property("row").isValid())
                buttons[i][j]->setProperty("row", i);
            if (!buttons[i][j]->property("col").isValid())
                buttons[i][j]->setProperty("col", j);

            buttons[i][j]->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            buttons[i][j]->setMinimumSize(80, 80);
            buttons[i][j]->setFont(QFont("Arial", 25, QFont::Bold));
            if (threeXsMode) {
                buttons[i][j]->setStyleSheet("QPushButton {"
                                             "background-color: #222;"
                                             "border: 2px solid #888;"
                                             "border-radius: 10px;"
                                             "color: #fff;"
                                             "padding: 5px;"
                                             "}"
                                             "QPushButton:pressed {"
                                             "background-color: #555;"
                                             "}");
            } else {
                buttons[i][j]->setStyleSheet("QPushButton {"
                                             "background-color: #fff;"
                                             "border: 2px solid #888;"
                                             "border-radius: 10px;"
                                             "color: #333;"
                                             "padding: 5px;"
                                             "}"
                                             "QPushButton:pressed {"
                                             "background-color: #ddd;"
                                             "}");
            }
            gridLayout->addWidget(buttons[i][j], i, j, Qt::AlignCenter);
            connect(buttons[i][j], &QPushButton::clicked, this, &TicTacToe::handleButtonClick);
        }
    }

    QVBoxLayout *boardLayout = new QVBoxLayout();
    boardLayout->addStretch();
    boardLayout->addWidget(squareWidget, 0, Qt::AlignCenter);
    boardLayout->addStretch();

    backgroundLayout->addLayout(boardLayout);

    QPushButton *resetButton = new QPushButton("Reset", this);
    resetButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    resetButton->setFont(QFont("Arial", 16, QFont::Bold));
    if (threeXsMode) {
        resetButton->setStyleSheet("QPushButton {"
                                   "background-color: #555;"
                                   "color: #fff;"
                                   "border: none;"
                                   "border-radius: 10px;"
                                   "padding: 10px;"
                                   "}"
                                   "QPushButton:pressed {"
                                   "background-color: #888;"
                                   "}");
    } else {
        resetButton->setStyleSheet("QPushButton {"
                                   "background-color: #ed7b9c;"
                                   "color: #fff;"
                                   "border: none;"
                                   "border-radius: 10px;"
                                   "padding: 10px;"
                                   "}"
                                   "QPushButton:pressed {"
                                   "background-color: #488797;"
                                   "}");
    }
    connect(resetButton, &QPushButton::clicked, this, &TicTacToe::resetGame);

    difficultyButton = new QPushButton("Difficulty: Easy", this);
    difficultyButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    difficultyButton->setFont(QFont("Arial", 14, QFont::Bold));
    if (threeXsMode) {
        difficultyButton->setStyleSheet("QPushButton {"
                                        "background-color: #555;"
                                        "color: #fff;"
                                        "border: none;"
                                        "border-radius: 10px;"
                                        "padding: 10px;"
                                        "}"
                                        "QPushButton:pressed {"
                                        "background-color: #888;"
                                        "}");
    } else {
        difficultyButton->setStyleSheet("QPushButton {"
                                        "background-color: #488797;"
                                        "color: #fff;"
                                        "border: none;"
                                        "border-radius: 10px;"
                                        "padding: 10px;"
                                        "}"
                                        "QPushButton:pressed {"
                                        "background-color: #0056b3;"
                                        "}");
    }
    connect(difficultyButton, &QPushButton::clicked, this, &TicTacToe::toggleDifficulty);

    replayButton = new QPushButton("Replay", this);
    replayButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    replayButton->setFont(QFont("Arial", 16, QFont::Bold));
    if (threeXsMode) {
        replayButton->setStyleSheet("QPushButton {"
                                    "background-color: #555;"
                                    "color: #fff;"
                                    "border: none;"
                                    "border-radius: 10px;"
                                    "padding: 10px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "background-color: #888;"
                                    "}");
    } else {
        replayButton->setStyleSheet("QPushButton {"
                                    "background-color: #488797;"
                                    "color: #fff;"
                                    "border: none;"
                                    "border-radius: 10px;"
                                    "padding: 10px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "background-color: #ed7b9c;"
                                    "}");
    }
    connect(replayButton, &QPushButton::clicked, this, &TicTacToe::replayGame);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(resetButton);
    buttonLayout->addWidget(difficultyButton);
    buttonLayout->addWidget(replayButton);

    backgroundLayout->addLayout(buttonLayout);

    mainMenuButton = new QPushButton("Main Menu", this);
    mainMenuButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    mainMenuButton->setFont(QFont("Arial", 18, QFont::Bold));
    if (threeXsMode) {
        mainMenuButton->setStyleSheet("QPushButton {"
                                      "background-color: #555;"
                                      "color: #fff;"
                                      "border: none;"
                                      "border-radius: 10px;"
                                      "padding: 10px;"
                                      "}"
                                      "QPushButton:pressed {"
                                      "background-color: #888;"
                                      "}");
    } else {
        mainMenuButton->setStyleSheet("QPushButton {"
                                      "background-color: #488797;"
                                      "color: #fff;"
                                      "border: none;"
                                      "border-radius: 10px;"
                                      "padding: 10px;"
                                      "}"
                                      "QPushButton:pressed {"
                                      "background-color: #ed7b9c;"
                                      "}");
    }
    connect(mainMenuButton, &QPushButton::clicked, this, &TicTacToe::returnToMainMenu);

    backgroundLayout->addWidget(mainMenuButton);

    mainLayout->addWidget(backgroundFrame);

    setLayout(mainLayout);
    std::srand(std::time(nullptr));
}




// The rest of your code remains unchanged


void TicTacToe::highlightWinningLine(int winType, int index)
{
    QString winningStyle;

    if (winType == 0) { // Row
        for (int j = 0; j < 3; ++j) {
            winningStyle = (buttons[index][j]->text() == "X") ? "background-color: green;" : "background-color: red;";
            winningStyle += "border: 2px solid #888; border-radius: 10px; color: #fff;";
            buttons[index][j]->setStyleSheet(winningStyle);
        }
    } else if (winType == 1) { // Column
        for (int i = 0; i < 3; ++i) {
            winningStyle = (buttons[i][index]->text() == "X") ? "background-color: green;" : "background-color: red;";
            winningStyle += "border: 2px solid #888; border-radius: 10px; color: #fff;";
            buttons[i][index]->setStyleSheet(winningStyle);
        }
    } else if (winType == 2) { // Main diagonal
        for (int i = 0; i < 3; ++i) {
            winningStyle = (buttons[i][i]->text() == "X") ? "background-color: green;" : "background-color: red;";
            winningStyle += "border: 2px solid #888; border-radius: 10px; color: #fff;";
            buttons[i][i]->setStyleSheet(winningStyle);
        }
    } else if (winType == 3) { // Anti-diagonal
        for (int i = 0; i < 3; ++i) {
            winningStyle = (buttons[i][2 - i]->text() == "X") ? "background-color: green;" : "background-color: red;";
            winningStyle += "border: 2px solid #888; border-radius: 10px; color: #fff;";
            buttons[i][2 - i]->setStyleSheet(winningStyle);
        }
    }
}



void TicTacToe::updateScores(char winner)
{
    if (winner == 'X') {
        ++scoreX;
    } else if (winner == 'O') {
        ++scoreO;
    }

           // Update the score labels
    xScoreLabel->setText(QString("X: %1").arg(scoreX));
    oScoreLabel->setText(QString("O: %1").arg(scoreO));
}


bool TicTacToe::checkWin()
{
    for (int i = 0; i < 3; ++i) {
        if (!buttons[i][0]->text().isEmpty() && buttons[i][0]->text() == buttons[i][1]->text() && buttons[i][1]->text() == buttons[i][2]->text()) {
            highlightWinningLine(0, i); // Row win
            return true;
        }
        if (!buttons[0][i]->text().isEmpty() && buttons[0][i]->text() == buttons[1][i]->text() && buttons[1][i]->text() == buttons[2][i]->text()) {
            highlightWinningLine(1, i); // Column win
            return true;
        }
    }
    if (!buttons[0][0]->text().isEmpty() && buttons[0][0]->text() == buttons[1][1]->text() && buttons[1][1]->text() == buttons[2][2]->text()) {
        highlightWinningLine(2, 0); // Main diagonal win
        return true;
    }
    if (!buttons[0][2]->text().isEmpty() && buttons[0][2]->text() == buttons[1][1]->text() && buttons[1][1]->text() == buttons[2][0]->text()) {
        highlightWinningLine(3, 0); // Anti-diagonal win
        return true;
    }
    return false;
}






void TicTacToe::saveHistory(char winner)
{
    mydb = QSqlDatabase::addDatabase("QSQLITE","myconnection");
    mydb.setDatabaseName(DataBase_path);
    if (!mydb.open()) {
        qDebug() << "Failed to open the database:" << mydb.lastError().text();
        return; // Exit the function if the database can't be opened
    } else {
        qDebug() << "Connected to the database";
    }
    qDebug() << "The user is:" << user;

    QSqlQuery myqry;
    if (!myqry.exec("UPDATE data SET total_matches= total_matches+ 1 where username='" + user + "';")) {
        qDebug() << "Failed to update total_matches:" << myqry.lastError().text();
    }

    if(winner == 'X'){
        if (!myqry.exec("UPDATE data SET matches_win= matches_win+ 1 where username='" + user + "';")) {
            qDebug() << "Failed to update matches_win:" << myqry.lastError().text();
        }
    } else if (winner == 'O'){
        if (!myqry.exec("UPDATE data SET matches_loss= matches_loss+ 1 where username='" + user + "';")) {
            qDebug() << "Failed to update matches_loss:" << myqry.lastError().text();
        }
    }

    if (!myqry.exec("UPDATE data SET win_rate = (CAST(matches_win AS FLOAT) / total_matches)*100 where username='" + user + "';")) {
        qDebug() << "Failed to update win_rate:" << myqry.lastError().text();
    }
    if (!myqry.exec(QString("UPDATE data SET last_game = %1 WHERE username = '%2';").arg(gameseq).arg(user))) {
        qDebug() << "Failed to update last game:" << myqry.lastError().text();
    }

    else {
        qDebug() << "last_game updated successfully for user:" << user;
    }
    gameseq=0;
    mydb.close(); // Always close the database connection
}

void TicTacToe::computerMove() {
    QElapsedTimer timer;
    timer.start();
    qDebug() << "computer move start.";
    if (m_vsComputer) {
        int bestMoveRow = -1;
        int bestMoveCol = -1;
        int bestVal;

        if (currentDifficulty == Easy) {
            currentDepth = 1;  // Set a lower depth for easier difficulty
        } else if (currentDifficulty == Medium) {
            currentDepth = 2;  // Moderate depth for medium difficulty
        } else if (currentDifficulty == Hard) {
            currentDepth = 8;  // Deeper depth for harder difficulty
        }

        if (currentDifficulty == Easy || currentDifficulty == Medium || currentDifficulty == Hard) {
            bestVal = -1000;  // Initialize bestVal for maximization

                   // Iterate through all possible moves
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    if (buttons[i][j]->text().isEmpty()) {
                        buttons[i][j]->setText("O"); // Assume 'O' is the computer's move

                               // Apply three Xs mode logic here
                        if (threeXsMode) {
                       highlightOldMove();
                            // Count existing 'X' marks on the board
                            int countX = countMarksInQueue('X');
                            int countO = countMarksInQueue('O');

                                   // Remove the oldest 'X' or 'O' move if there are already three
                            if (countX > 3 || countO >= 3) {
                                removeOldestMoveFromUI();


                            }
                        }

                        char board[3][3];
                        // Copy the current state of the game board
                        for (int k = 0; k < 3; ++k) {
                            for (int l = 0; l < 3; ++l) {
                                QString buttonText = buttons[k][l]->text();
                                if (!buttonText.isEmpty() && buttonText.size() > 0) {
                                    board[k][l] = buttonText.at(0).toLatin1();
                                } else {
                                    board[k][l] = ' '; // or some other default value
                                }
                            }
                        }

                        int moveVal = minimax(board, false, 0, -1000, 1000);
                        buttons[i][j]->setText(""); // Undo the move

                        if (moveVal > bestVal) {
                            bestMoveRow = i;
                            bestMoveCol = j;
                            bestVal = moveVal;
                        }
                    }
                }
            }
        }

               // Make the best move found
        if (bestMoveRow != -1 && bestMoveCol != -1) {
            buttons[bestMoveRow][bestMoveCol]->setText("O");
            buttons[bestMoveRow][bestMoveCol]->setStyleSheet("QPushButton {"
                                                             "background-color: #ddd;"
                                                             "border: 2px solid #888;"
                                                             "border-radius: 10px;"
                                                             "color: #ed7b9c;"
                                                             "}");
            int row = buttons[bestMoveRow][bestMoveCol]->property("row").toInt();
            int col = buttons[bestMoveRow][bestMoveCol]->property("col").toInt();
            char type = isXturn ? 'X' : 'O';
            Move move = {row, col, type};
            int pos = row * 3 + col + 1;
            gameseq = gameseq * 10 + pos;
            moves.append(move);

                   // Check for win or draw after making the move
            if (checkWin()) {
                QString winner = "O wins!";
                updateScores('O');
                gameOver();
            } else if (isDraw()) {
                gameOver();
            } else {
                isXturn = !isXturn;
            }
        }
    }
    qint64 elapsed = timer.nsecsElapsed(); // Get elapsed time in nanoseconds
    qDebug() << "Elapsed time:" << elapsed << "ns";
}
int TicTacToe::minimax(char board[3][3], bool isMax, int depth, int alpha, int beta)
{
    int score = evaluate(board);

    if (score == 10 || score == -10)
        return score;

    if (!isMovesLeft(board))
        return 0;

    if (depth >= currentDepth)  // Use currentDepth based on difficulty level
        return 0;

    if (isMax) {
        int best = -1000;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'O';

                    int val = minimax(board, false, depth + 1, alpha, beta);

                    board[i][j] = ' ';

                    best = std::max(best, val);
                    alpha = std::max(alpha, best);

                    if (beta <= alpha)
                        return best;  // Beta cut-off
                }
            }
        }
        return best;
    } else {
        int best = 1000;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'X';

                    int val = minimax(board, true, depth + 1, alpha, beta);

                    board[i][j] = ' ';

                    best = std::min(best, val);
                    beta = std::min(beta, best);

                    if (beta <= alpha)
                        return best;  // Alpha cut-off
                }
            }
        }
        return best;
    }
}
int TicTacToe::evaluate(char board[3][3])
{
    // Checking for Rows for X or O victory
    for (int row = 0; row < 3; ++row) {
        if (board[row][0] == board[row][1] && board[row][1] == board[row][2]) {
            if (board[row][0] == 'O')
                return 10;
            else if (board[row][0] == 'X')
                return -10;
        }
    }

           // Checking for Columns for X or O victory
    for (int col = 0; col < 3; ++col) {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col]) {
            if (board[0][col] == 'O')
                return 10;
            else if (board[0][col] == 'X')
                return -10;
        }
    }

           // Checking for Diagonals for X or O victory
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == 'O')
            return 10;
        else if (board[0][0] == 'X')
            return -10;
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == 'O')
            return 10;
        else if (board[0][2] == 'X')
            return -10;
    }

    return 0;
}

bool TicTacToe::isMovesLeft(char board[3][3])
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == ' ')
                return true;
    return false;
}
void TicTacToe::setVsComputer(bool vsComputer)
{
    this->m_vsComputer = vsComputer;
}
void TicTacToe::setDifficulty(Difficulty difficulty)
{
    this->difficulty = difficulty;
}
bool TicTacToe::isDraw()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (buttons[i][j]->text().isEmpty()) {
                return false;
            }
        }
    }
    return true;
}
void TicTacToe::handleButtonClick() {
    QElapsedTimer timer1;
    timer1.start();


    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    int row = clickedButton->property("row").toInt();
    int col = clickedButton->property("col").toInt();
    char type = isXturn ? 'X' : 'O';
    int pos = row * 3 + col + 1;
    gameseq = gameseq * 10 + pos;

    if (clickedButton && clickedButton->text().isEmpty()) {
        // Handle three Xs mode logic
        if (isXturn && threeXsMode) {
            qDebug()<<"highlightold";
            highlightOldMove() ;

            // Count existing 'X' marks on the board
            int countX = countMarksInQueue('X');
            int countO = countMarksInQueue('O');

                   // Remove the oldest 'X' or 'O' move if there are already three
            if (countX > 3 || countO >= 3) {
                removeOldestMoveFromUI();


            }
        }

               // Set text and style for the clicked button
        clickedButton->setText(type == 'X' ? "X" : "O");
        clickedButton->setStyleSheet(type == 'X' ? "QPushButton { background-color: #f0f2f2; border: 2px solid #888; border-radius: 10px; color: #488797; }" :
                                             "QPushButton { background-color: #f0f2f2; border: 2px solid #888; border-radius: 10px; color: #ed7b9c; }");

               // Store the move in the moves list
        Move move = {row, col, type};
        moves.append(move);

               // Check for win or draw
        if (checkWin()) {
            char winner = isXturn ? 'X' : 'O';
            winnerWidget->show();
            updateScores(winner);
            gameOver();
        } else if (isDraw()) {
            winnerWidget->show();
            gameOver();
        } else {
            // Switch turns
            isXturn = !isXturn;
            if (m_vsComputer && !isXturn) {
                computerMove();
            }
        }
    }
    qint64 elapsed = timer1.nsecsElapsed(); // Get elapsed time in nanoseconds
    qDebug() << "Elapsed time:" << elapsed << "ns";
}
void TicTacToe::resetGame()
{
    gameseq=0;
    winnerWidget->hide();
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            buttons[i][j]->setEnabled(true);
            buttons[i][j]->setText("");
            buttons[i][j]->setStyleSheet("QPushButton {"
                                         "background-color: #fff;"
                                         "border: 2px solid #888;"
                                         "border-radius: 10px;"
                                         "color: #333;"
                                         "}"
                                         "QPushButton:pressed {"
                                         "background-color: #ddd;"
                                         "}");
        }
    }
    isXturn = true; // X always starts
    moves.clear(); // Clear the moves list

}


void TicTacToe::highlightOldMove() {
    // Find the oldest move in the moves list
    qDebug() << "Highlighting move at row" ;

    for (int i = 0; i < moves.size(); ++i) {
        if (moves[i].type == 'X') {
            // Highlight the button text and style for the oldest 'X' move
            int row = moves[i].row;
            int col = moves[i].col;
            qDebug() << "Highlighting move at row" << row << "col" << col;

                   // Ensure buttons and moves array are correctly mapped
            if (row >= 0 && row < 3 && col >= 0 && col < 3) {
                buttons[row][col]->setStyleSheet("QPushButton {"
                                                 "background-color: yellow;"
                                                 "border: 2px solid #888;"
                                                 "border-radius: 10px;"
                                                 "color: #333;"
                                                 "}"
                                                 "QPushButton:pressed {"
                                                 "background-color: #ddd;"
                                                 "}");
            } else {
                qDebug() << "Invalid row or column index for button highlighting.";
            }
        } else if (moves[i].type == 'O') {
            // Highlight the button text and style for the oldest 'O' move
            int row = moves[i].row;
            int col = moves[i].col;
            qDebug() << "Highlighting move at row" << row << "col" << col;

                   // Ensure buttons and moves array are correctly mapped
            if (row >= 0 && row < 3 && col >= 0 && col < 3) {
                buttons[row][col]->setStyleSheet("QPushButton {"
                                                 "background-color: cyan;"
                                                 "border: 2px solid #888;"
                                                 "border-radius: 10px;"
                                                 "color: #333;"
                                                 "}"
                                                 "QPushButton:pressed {"
                                                 "background-color: #ddd;"
                                                 "}");
            } else {
                qDebug() << "Invalid row or column index for button highlighting.";
            }
            break;// Highlight only the first oldest move found
        }
    }
}
void TicTacToe::toggleDifficulty()
{
    switch (currentDifficulty) {
    case Easy:
        currentDifficulty = Medium;
        difficultyButton->setText("Difficulty: Medium");
        break;
    case Medium:
        currentDifficulty = Hard;
        difficultyButton->setText("Difficulty: Hard");
        break;
    case Hard:
        currentDifficulty = Easy;
        difficultyButton->setText("Difficulty: Easy");
        break;
    default:
        break;
    }
}
void TicTacToe::gameOver()
{
    if(threeXsMode){gameseq=0;}
    if (checkWin()) {
        QString winner = isXturn? "X" : "O";
        winnerWidget->setWinner(winner);
        winnerWidget->show();
        saveHistory(winner.at(0).toLatin1());
    } else if (isDraw()) {
        winnerWidget->setWinner("It's a draw!");
        winnerWidget->show();
        saveHistory(' '); // ' ' signifies a draw

    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            buttons[i][j]->setEnabled(false);
        }
    }
}
void TicTacToe::replayGame() {
    // Reset the game board and scores
    if(threeXsMode){return;}
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            buttons[i][j]->setEnabled(true);
            buttons[i][j]->setText("");
            buttons[i][j]->setStyleSheet("QPushButton {"
                                         "background-color: #fff;"
                                         "border: 2px solid #888;"
                                         "border-radius: 10px;"
                                         "color: #333;"
                                         "}"
                                         "QPushButton:pressed {"
                                         "background-color: #ddd;"
                                         "}");
        }
    }
    winnerWidget->hide();

    mydb = QSqlDatabase::addDatabase("QSQLITE","myconnection");
    mydb.setDatabaseName(DataBase_path);
    if (!mydb.open()) {
        qDebug() << "Failed to open the database:" << mydb.lastError().text();
        return; // Exit the function if the database can't be opened
    } else {
        qDebug() << "Connected to the database";
    }
    QSqlQuery myqry;
    myqry.prepare("SELECT last_game FROM data WHERE username = :username");
    myqry.bindValue(":username", user); // Binding the username parameter

    if (!myqry.exec()) {
        qDebug() << "Error executing query:" << myqry.lastError().text();
        return;
    }

    if (myqry.next()) {
        int lastgame = myqry.value(0).toInt();
        qDebug() << "Retrieved gameseq" << lastgame << "for username:" << user;
        mydb.close();

        QStack<int> mystack;
        while (lastgame != 0) {
            mystack.push(lastgame % 10);
            lastgame = lastgame / 10;
        }

        char type = 'X'; // X always starts
        bool isXturn = true; // Initialize isXturn to true

        while (!mystack.isEmpty()) {
            int move = mystack.pop() - 1; // Convert to zero-indexed move
            int row = move / 3;
            int col = move % 3;

                   // Set the button text and style
            buttons[row][col]->setText(type == 'X'? "X" : "O");
            buttons[row][col]->setStyleSheet(type == 'X'? "QPushButton { background-color: #f0f2f2; border: 2px solid #888; border-radius: 10px; color: #488797; }" :
                                                     "QPushButton { background-color: #f0f2f2; border: 2px solid #888; border-radius: 10px; color: #ed7b9c; }");
            buttons[row][col]->setDisabled(true);
                   // Update the internal board state
            board[row][col] = type;
            type = (type == 'O')? 'X' : 'O';
            isXturn = !isXturn; // Toggle isXturn

                   // Check game state
            if (checkWin()) {
                QString winner = isXturn? "O" : "X"; // Update winner based on last move
                winnerWidget->setWinner(winner);
                winnerWidget->show();
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        buttons[i][j]->setEnabled(false);
                    }
                }
                break;
            } else if (isDraw()) {
                winnerWidget->setWinner("It's a draw!");
                winnerWidget->show();
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        buttons[i][j]->setEnabled(false);
                    }
                }
                break;
            }

                   // Delay for visual effect (optional)
            QCoreApplication::processEvents();
            QThread::msleep(500); // Adjust delay time as needed
        }

               // Reset scores and labels for a new game
        scoreX = 0;
        scoreO = 0;
        xScoreLabel->setText("X: 0");
        oScoreLabel->setText("O: 0");
    } else {
        qDebug() << "No gameseq found for username:" << user;
    }
}

int TicTacToe::countMarksInQueue(char mark) {
    int count = 0;
    for (const Move &move : moves) {
        if (move.type == mark) {
            ++count;
        }
    }
    return count;
}

void TicTacToe::removeOldestMoveFromUI() {
    // Find and remove the oldest move from the moves list
    for (int i = 0; i < moves.size(); ++i) {
        if (moves[i].type == 'X' || moves[i].type == 'O') {
            // Remove the button text and style for the oldest move
            int pos = moves[i].row * 3 + moves[i].col + 1;
            buttons[moves[i].row][moves[i].col]->setText("");
            buttons[moves[i].row][moves[i].col]->setStyleSheet("QPushButton {"
                                                               "background-color: #fff;"
                                                               "border: 2px solid #888;"
                                                               "border-radius: 10px;"
                                                               "color: #333;"
                                                               "}"
                                                               "QPushButton:pressed {"
                                                               "background-color: #ddd;"
                                                               "}");
            // Remove the oldest move from the moves list
            moves.remove(i);
            break;
        }
    }
}

