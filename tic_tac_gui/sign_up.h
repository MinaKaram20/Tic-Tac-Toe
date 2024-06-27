#ifndef SIGN_UP_H
#define SIGN_UP_H


#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <qlayoutitem.h>
#include <QThread>
#include <qlineedit.h>
#include <qalgorithms.h>
#include <qfont.h>
#include <qframe.h>

namespace Ui {
class sign_up;
}

class sign_up : public QDialog
{
    Q_OBJECT

public:
    explicit sign_up(QWidget *parent = nullptr);
    ~sign_up();

private slots:
    void on_Button_hid_sho_clicked();

    void on_pushButton_cancel_clicked();

    void on_pushButton_sign_up_clicked();

    void on_toggel_access_pushButton_clicked();

    void on_Button_toggel_confirm_clicked();

        signals:
    void signedUP();

private:
    Ui::sign_up *ui;
    QSqlDatabase mydb;
    void clearWidget(QWidget *widget);
    void clearSpacer(QSpacerItem *spacer);
    void clearLayout(QLayout *layout);
};

#endif // SIGN_UP_H
