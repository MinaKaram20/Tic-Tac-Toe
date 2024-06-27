#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

#include "global_functions.h"
#include "tictactoe.h"

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

    //static  //A function to update UI when sign-in or up
    QSqlDatabase mydb;

public slots:
    void update_AndGoTo_Home_After_Signed();
    void update_AndGoTo_History_After_Signed();

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

    void on_tictactoeButton_clicked();

    void on_tictactoeVsComputerButton_clicked();

    void handleGameClose();

    void updateGameHistory();

    void on_threeXsButton_clicked();



private:
    Ui::MainWindow *ui;
    TicTacToe *tictactoeGame;
    TicTacToe *tictactoe;
    void initializeBoard();
    void switchMode();
    void clearOldestMove();

};
#endif // MAINWINDOW_H
