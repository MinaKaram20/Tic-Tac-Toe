#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "sign_in.h"
#include "sign_up.h"
#include "player.h"

player* plyr = nullptr;    // Define a player object
QString unClecked_style=R"(       QPushButton{
                                    background-color: rgba(0, 0, 0, 0);
                                    border: 1px solid rgba(0, 0, 0, 0);}

                                QPushButton:hover{
                                    background-color: rgba(255, 255, 255, 50);
                                    border: 1px solid rgba(20, 20, 20, 200);})";
QString X_O_Clecked_style=R"(     QPushButton {
                                    background-color: rgba(0, 0, 0, 30);
                                    border: 1px solid rgba(10, 10, 10, 255);}

                                QPushButton:hover {
                                    background-color: rgba(150, 150, 150, 50);
                                    border: 1px solid rgba(20, 20, 20, 200);})";
QString three_Xs_Clecked_style=R"(QPushButton {
                                    background-color: rgba(0, 0, 0, 30);
                                    border: 1px solid rgba(10, 10, 10, 255);}

                                QPushButton:hover {
                                    background-color: rgba(150, 150, 150, 50);
                                    border: 1px solid rgba(20, 20, 20, 200);})";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); // initialize the main page to be the home page
    ui->X_O_listWidget->hide();
    ui->three_Xs_listWidget->hide();
    ui->welcome_icon->hide();
    plyr = player::getInstance();   // Initialize the player object
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateUIifSigned()
{
    //ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_homeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    if(plyr->isSigned())
    {
        ui->HI_message->setText(QString::fromStdString(plyr->getUsername()));
        ui->HI_message->setStyleSheet("color: gray;   font-size: 13px;");
        ui->HI_message->setFont(QFont(ui->HI_message->font().family(), -1, QFont::Bold));
        ui->HI_message->setAlignment(Qt::AlignLeft);

        ui->sign_pushButton->close();
        ui->welcome_icon->show();
    }
    //remove the sign in button
}


void MainWindow::on_historyButton_clicked()
{
    if(plyr->isSigned())
        ui->stackedWidget->setCurrentIndex(2);
    else
        ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_aboutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_sign_in_clicked()
{
    sign_in SignInWindow;
    SignInWindow.setModal(true);
    SignInWindow.exec();
}


void MainWindow::on_sign_up_clicked()
{
    sign_up SignUpWindow;
    SignUpWindow.setModal(true);
    SignUpWindow.exec();
}


void MainWindow::on_exitButton_clicked()
{
    MainWindow::close();
}

void MainWindow::on_X_O_pushButton_toggled(bool checked)
{
    if(ui->X_O_pushButton->isChecked())
        ui->X_O_pushButton->setStyleSheet(X_O_Clecked_style);
    else
        ui->X_O_pushButton->setStyleSheet(unClecked_style);
}


void MainWindow::on_three_Xs_pushButton_clicked()
{
    if(ui->three_Xs_pushButton->isChecked())
        ui->three_Xs_pushButton->setStyleSheet(three_Xs_Clecked_style);
    else
        ui->three_Xs_pushButton->setStyleSheet(unClecked_style);
}


void MainWindow::on_sign_pushButton_clicked()
{
    sign_in SignInWindow;
    SignInWindow.setModal(true);
    SignInWindow.exec();
}

