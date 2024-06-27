#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QDialog>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QThread>
#include <qlineedit.h>

namespace Ui {
class sign_in;
}

class sign_in : public QDialog
{
    Q_OBJECT

public:
    explicit sign_in(QWidget *parent = nullptr);
    ~sign_in();


private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_sign_in_clicked();

    void on_Button_hid_sho_clicked();

    void on_toggel_access_pushButton_clicked();

        signals:
    void signedIn();

private:
    Ui::sign_in *ui;
    QSqlDatabase mydb;
    void clearLayout(QLayout *layout);
};

#endif // SIGN_IN_H
