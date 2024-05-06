#include <QApplication>

#include "mainwindow.h"
//#include "sign_in.h"
//#include "sign_up.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w1;
    w1.show();

    return a.exec();
}
