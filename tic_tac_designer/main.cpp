#include "mainwindow.h"
#include "loginPage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w1;
    w1.show();

    loginPage w2;
    w2.show();

    return a.exec();
}
