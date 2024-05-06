#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

#include "global_functions.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static void updateUIifSigned(); //A function to update UI when sign-in or up

private slots:
    void on_exitButton_clicked();

    void on_homeButton_clicked();

    void on_historyButton_clicked();

    void on_aboutButton_clicked();

    void on_sign_in_clicked();

    void on_sign_up_clicked();

    void on_X_O_pushButton_toggled(bool checked);

    void on_three_Xs_pushButton_clicked();

    void on_sign_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
