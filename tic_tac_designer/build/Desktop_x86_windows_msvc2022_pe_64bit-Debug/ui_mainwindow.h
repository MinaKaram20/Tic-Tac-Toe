/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *menu;
    QLabel *game_Logo;
    QLabel *game_Name;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *homeButton;
    QPushButton *historyButton;
    QPushButton *SignButton;
    QPushButton *aboutButton;
    QSpacerItem *verticalSpacer;
    QPushButton *exitButton;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QLabel *label;
    QWidget *signPage;
    QLabel *label_3;
    QWidget *aboutPage;
    QLabel *label_4;
    QWidget *hystoryPage;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        menu = new QWidget(centralwidget);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(0, 0, 170, 600));
        menu->setMouseTracking(false);
        game_Logo = new QLabel(menu);
        game_Logo->setObjectName("game_Logo");
        game_Logo->setGeometry(QRect(10, 10, 50, 50));
        game_Logo->setMinimumSize(QSize(50, 50));
        game_Logo->setMaximumSize(QSize(50, 50));
        game_Logo->setPixmap(QPixmap(QString::fromUtf8(":/icons/game-logo.png")));
        game_Logo->setScaledContents(true);
        game_Name = new QLabel(menu);
        game_Name->setObjectName("game_Name");
        game_Name->setGeometry(QRect(10, 65, 111, 21));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        game_Name->setFont(font);
        layoutWidget = new QWidget(menu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 90, 152, 501));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(layoutWidget);
        homeButton->setObjectName("homeButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setPointSize(16);
        font1.setBold(false);
        homeButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/home_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/home.png"), QSize(), QIcon::Normal, QIcon::On);
        homeButton->setIcon(icon);
        homeButton->setIconSize(QSize(27, 27));
        homeButton->setCheckable(true);
        homeButton->setAutoExclusive(true);

        verticalLayout->addWidget(homeButton);

        historyButton = new QPushButton(layoutWidget);
        historyButton->setObjectName("historyButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font2.setPointSize(16);
        historyButton->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/history_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icons/history.png"), QSize(), QIcon::Normal, QIcon::On);
        historyButton->setIcon(icon1);
        historyButton->setIconSize(QSize(25, 25));
        historyButton->setCheckable(true);
        historyButton->setAutoExclusive(true);

        verticalLayout->addWidget(historyButton);

        SignButton = new QPushButton(layoutWidget);
        SignButton->setObjectName("SignButton");
        SignButton->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/sign-in_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icons/sign-in.png"), QSize(), QIcon::Normal, QIcon::On);
        SignButton->setIcon(icon2);
        SignButton->setIconSize(QSize(32, 33));
        SignButton->setCheckable(true);
        SignButton->setAutoExclusive(true);

        verticalLayout->addWidget(SignButton);

        aboutButton = new QPushButton(layoutWidget);
        aboutButton->setObjectName("aboutButton");
        aboutButton->setFont(font2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/about-us_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/about-us.png"), QSize(), QIcon::Normal, QIcon::On);
        aboutButton->setIcon(icon3);
        aboutButton->setIconSize(QSize(26, 26));
        aboutButton->setCheckable(true);
        aboutButton->setAutoExclusive(true);

        verticalLayout->addWidget(aboutButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        exitButton = new QPushButton(layoutWidget);
        exitButton->setObjectName("exitButton");
        exitButton->setFont(font2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/exit_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::On);
        exitButton->setIcon(icon4);
        exitButton->setIconSize(QSize(32, 32));
        exitButton->setCheckable(true);
        exitButton->setAutoExclusive(true);

        verticalLayout->addWidget(exitButton);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(170, 0, 630, 600));
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        label = new QLabel(homePage);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 200, 181, 111));
        QFont font3;
        font3.setPointSize(40);
        label->setFont(font3);
        stackedWidget->addWidget(homePage);
        signPage = new QWidget();
        signPage->setObjectName("signPage");
        label_3 = new QLabel(signPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 190, 161, 111));
        label_3->setFont(font3);
        stackedWidget->addWidget(signPage);
        aboutPage = new QWidget();
        aboutPage->setObjectName("aboutPage");
        label_4 = new QLabel(aboutPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 190, 161, 111));
        label_4->setFont(font3);
        stackedWidget->addWidget(aboutPage);
        hystoryPage = new QWidget();
        hystoryPage->setObjectName("hystoryPage");
        label_2 = new QLabel(hystoryPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 210, 221, 161));
        label_2->setFont(font3);
        stackedWidget->addWidget(hystoryPage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        game_Logo->setText(QString());
        game_Name->setText(QCoreApplication::translate("MainWindow", "TicTacTooooo", nullptr));
        homeButton->setText(QCoreApplication::translate("MainWindow", "Home    ", nullptr));
        historyButton->setText(QCoreApplication::translate("MainWindow", "History  ", nullptr));
        SignButton->setText(QCoreApplication::translate("MainWindow", "Sign in   ", nullptr));
        aboutButton->setText(QCoreApplication::translate("MainWindow", "about us", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "   Exit   ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "sign", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "about", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Hystory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
