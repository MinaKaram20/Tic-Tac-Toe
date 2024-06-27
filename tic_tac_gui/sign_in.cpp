#include "sign_in.h"
#include "ui_sign_in.h"

#include "global_functions.h"
#include "sign_up.h"
#include "player.h"
#include "globals.h"

extern player* plyr;

sign_in::sign_in(QWidget *parent) :
      QDialog(parent),
      ui(new Ui::sign_in)
{
    ui->setupUi(this);
    setWindowTitle("Sign in");

    mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName(DataBase_path);

    if(!mydb.open())
        ui->lineEdit_error_message->setText("Failed to open the database.");
    else
        ui->lineEdit_error_message->setText("Connected....");

}

sign_in::~sign_in()
{
    delete ui;
    qDebug() << " database";

}


void sign_in::clearLayout(QLayout *layout)
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


void sign_in::on_Button_hid_sho_clicked()
{
    if (ui->lineEdit_pass->echoMode() == QLineEdit::Normal) {
        ui->lineEdit_pass->setEchoMode(QLineEdit::Password);
    } else {
        ui->lineEdit_pass->setEchoMode(QLineEdit::Normal);
    }
}


void sign_in::on_pushButton_cancel_clicked()
{
    sign_in::close();
}


void sign_in::on_pushButton_sign_in_clicked()
{
    QString username = ui->lineEdit_user->text();
    QString password = ui->lineEdit_pass->text();

    if(username.isEmpty())
    {
        ui->lineEdit_error_message->setText("Enter your username please.");
        return;
    }
    else if (password.isEmpty())
    {
        ui->lineEdit_error_message->setText("Enter your password please.");
        return;
    }

    if(!mydb.isOpen()) {
        ui->lineEdit_error_message->setText("Failed to open the database.");
        return; }

    QSqlQuery myqry;

    if(myqry.exec("select * from Data where username='"+username+"' and PASSWORD='"+password+"'"))
    {
        user=username;
        int count=0;
        while (myqry.next())
        {
            count++;
        }

        if (count==1)
        {
            if (ui->sub_gridLayout->layout())
                clearLayout(ui->sub_gridLayout->layout());
            if (ui->sub_horizontalLayout->layout())
                clearLayout(ui->sub_horizontalLayout->layout());
            if (ui->main_gridLayout->layout())
                clearLayout(ui->main_gridLayout->layout());

            plyr->signIn(username.toStdString(), password.toStdString());  // Sign into the player for the GUI
            emit signedIn(); // to update UI after Signing

            Delay_ND_CLose(this);

            ui->lineEdit_error_message->setText("Welcome "+ username);
            ui->lineEdit_error_message->setStyleSheet("background-color: rgb(240, 240, 240);    color: green;   font-size: 20px;");
            ui->lineEdit_error_message->setAlignment(Qt::AlignHCenter); // Align the text horizontally to the center
        }
        else
            ui->lineEdit_error_message->setText("Wrong Username or Password.");
    }
}


void sign_in::on_toggel_access_pushButton_clicked()
{
    sign_in::close();
    sign_up SignUpWindow;
    SignUpWindow.setModal(true);
    SignUpWindow.exec();
}

