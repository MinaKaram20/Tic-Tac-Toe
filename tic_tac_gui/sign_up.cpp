#include "sign_up.h"
#include "ui_sign_up.h"

#include "sign_in.h"
#include "global_functions.h"
#include "mainwindow.h"
#include "player.h"
//#include "globals.h"

extern QString DataBase_path;
extern player* plyr;

sign_up::sign_up(QWidget *parent)
    : QDialog(parent)
      , ui(new Ui::sign_up)
{
    ui->setupUi(this);
    setWindowTitle("Create new account");

    mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName(DataBase_path);

    if(!mydb.open())
        ui->lineEdit_error_message->setText("Failed to open the database");
    else
        ui->lineEdit_error_message->setText("Connected....");
}

sign_up::~sign_up()
{
    delete ui;

}


void sign_up::clearLayout(QLayout *layout)
{
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr)
    {
        if (item->layout() != nullptr)
        {
            clearLayout(item->layout());
            delete item->layout();
        }
        if (item->widget() != nullptr)
        {
            delete item->widget();
        }
        delete item;
    }
}


void sign_up::on_Button_hid_sho_clicked()
{
    if (ui->lineEdit_pass->echoMode() == QLineEdit::Normal) {
        ui->lineEdit_pass->setEchoMode(QLineEdit::Password);
    } else {
        ui->lineEdit_pass->setEchoMode(QLineEdit::Normal);
    }
}


void sign_up::on_Button_toggel_confirm_clicked()
{
    if (ui->lineEdit_confirm->echoMode() == QLineEdit::Normal) {
        ui->lineEdit_confirm->setEchoMode(QLineEdit::Password);
    } else {
        ui->lineEdit_confirm->setEchoMode(QLineEdit::Normal);
    }
}


void sign_up::on_pushButton_cancel_clicked()
{
    sign_up::close();
}


void sign_up::on_pushButton_sign_up_clicked()
{
    QString username = ui->lineEdit_user->text();
    QString password = ui->lineEdit_pass->text();
    QString confirm = ui->lineEdit_confirm->text();

    if(username.isEmpty())
    {
        ui->lineEdit_error_message->setText("Enter your username please.");
        return;
    }
    else if (password.isEmpty())
    {
        ui->lineEdit_error_message->setText("Enter a password please.");
        return;
    }
    else if (password != confirm)
    {
        ui->lineEdit_error_message->setText("Passwords don't match.");
        return;
    }
    else {
        ui->lineEdit_error_message->clear();
    }

    QSqlQuery myqry;
    myqry.prepare("INSERT INTO data (username, PASSWORD) VALUES (:username, :password)");
    myqry.bindValue(":username", username);
    myqry.bindValue(":password", password);

    if(myqry.exec())
    {
        if (ui->sub_gridLayout->layout())
            clearLayout(ui->sub_gridLayout->layout());
        if (ui->sub_horizontalLayout->layout())
            clearLayout(ui->sub_horizontalLayout->layout());
        if (ui->main_gridLayout->layout())
            clearLayout(ui->main_gridLayout->layout());

        plyr->signIn(username.toStdString(), password.toStdString());  // Sign into the player for the GUI
        MainWindow::updateUIifSigned();

        Delay_ND_CLose(this);

        ui->lineEdit_error_message->setText("Account created successfully.");
        ui->lineEdit_error_message->setStyleSheet("background-color: rgb(240, 240, 240); color: green; font-size: 20px;");
        ui->lineEdit_error_message->setAlignment(Qt::AlignHCenter); // Align the text horizontally to the center


    }
    else {
        // Check if the error is due to a unique constraint violation
        if(myqry.lastError().text().contains("UNIQUE constraint failed")) {
            ui->lineEdit_error_message->setText("Username already exists. Please choose another one.");
        } else {
            ui->lineEdit_error_message->setText("Failed to create account: " + myqry.lastError().text());
        }
    }
}


void sign_up::on_toggel_access_pushButton_clicked()
{
    sign_up::close();
    sign_in SignInWindow;
    SignInWindow.setModal(true);
    SignInWindow.exec();
}



