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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
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
    QPushButton *aboutButton;
    QSpacerItem *verticalSpacer;
    QPushButton *exitButton;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QLabel *background_2;
    QPushButton *X_O_pushButton;
    QPushButton *three_Xs_pushButton;
    QLineEdit *slogan;
    QTextEdit *HI_message;
    QListWidget *X_O_listWidget;
    QListWidget *three_Xs_listWidget;
    QPushButton *sign_pushButton;
    QLineEdit *lineEdit;
    QLabel *welcome_icon;
    QWidget *signPage;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sign_in;
    QSpacerItem *horizontalSpacer;
    QPushButton *sign_up;
    QSpacerItem *horizontalSpacer_3;
    QWidget *historyPage;
    QLabel *background;
    QWidget *aboutPage;
    QTextBrowser *textBrowser;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 611);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        menu = new QWidget(centralwidget);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(0, 0, 170, 611));
        menu->setMouseTracking(false);
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 70, 70);"));
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
        game_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(menu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 90, 152, 511));
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
        homeButton->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/home_off.png"), QSize(), QIcon::Normal, QIcon::On);
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
        historyButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/history.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icons/history_off.png"), QSize(), QIcon::Normal, QIcon::On);
        historyButton->setIcon(icon1);
        historyButton->setIconSize(QSize(25, 25));
        historyButton->setCheckable(true);
        historyButton->setAutoExclusive(true);

        verticalLayout->addWidget(historyButton);

        aboutButton = new QPushButton(layoutWidget);
        aboutButton->setObjectName("aboutButton");
        aboutButton->setFont(font2);
        aboutButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/about-us.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icons/about-us_off.png"), QSize(), QIcon::Normal, QIcon::On);
        aboutButton->setIcon(icon2);
        aboutButton->setIconSize(QSize(26, 26));
        aboutButton->setCheckable(true);
        aboutButton->setAutoExclusive(true);

        verticalLayout->addWidget(aboutButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        exitButton = new QPushButton(layoutWidget);
        exitButton->setObjectName("exitButton");
        exitButton->setMaximumSize(QSize(16777215, 43));
        exitButton->setFont(font2);
        exitButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/exit_off.png"), QSize(), QIcon::Normal, QIcon::On);
        exitButton->setIcon(icon3);
        exitButton->setIconSize(QSize(32, 32));
        exitButton->setCheckable(true);
        exitButton->setAutoExclusive(true);

        verticalLayout->addWidget(exitButton);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(170, 0, 630, 611));
        QFont font3;
        font3.setPointSize(12);
        stackedWidget->setFont(font3);
        stackedWidget->setLineWidth(1);
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        background_2 = new QLabel(homePage);
        background_2->setObjectName("background_2");
        background_2->setGeometry(QRect(-10, 200, 650, 650));
        background_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/12.png")));
        background_2->setScaledContents(true);
        X_O_pushButton = new QPushButton(homePage);
        X_O_pushButton->setObjectName("X_O_pushButton");
        X_O_pushButton->setGeometry(QRect(70, 287, 158, 156));
        X_O_pushButton->setMinimumSize(QSize(158, 156));
        X_O_pushButton->setMaximumSize(QSize(158, 156));
        X_O_pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover  {\n"
"	    background-color: rgba(255, 255, 255, 50);		 /* Semi-transparent white */\n"
"        border: 1px solid rgba(20, 20, 20, 200);			 	 /* Semi-transparent white */\n"
"}\n"
""));
        X_O_pushButton->setCheckable(true);
        X_O_pushButton->setFlat(true);
        three_Xs_pushButton = new QPushButton(homePage);
        three_Xs_pushButton->setObjectName("three_Xs_pushButton");
        three_Xs_pushButton->setGeometry(QRect(401, 287, 160, 156));
        three_Xs_pushButton->setMinimumSize(QSize(160, 147));
        three_Xs_pushButton->setMaximumSize(QSize(160, 157));
        three_Xs_pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover  {\n"
"        background-color: rgba(255, 255, 255, 50);		 /* Semi-transparent white */\n"
"        border: 1px solid rgba(20, 20, 20, 200);			 	 /* Semi-transparent white */\n"
"}\n"
""));
        three_Xs_pushButton->setCheckable(true);
        three_Xs_pushButton->setFlat(true);
        slogan = new QLineEdit(homePage);
        slogan->setObjectName("slogan");
        slogan->setGeometry(QRect(-70, -40, 781, 373));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        slogan->setFont(font4);
        slogan->setFrame(false);
        slogan->setAlignment(Qt::AlignCenter);
        slogan->setReadOnly(true);
        HI_message = new QTextEdit(homePage);
        HI_message->setObjectName("HI_message");
        HI_message->setGeometry(QRect(489, 5, 141, 71));
        QFont font5;
        font5.setPointSize(11);
        HI_message->setFont(font5);
        HI_message->setFrameShape(QFrame::NoFrame);
        HI_message->setFrameShadow(QFrame::Plain);
        HI_message->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HI_message->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HI_message->setReadOnly(true);
        X_O_listWidget = new QListWidget(homePage);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/1_player.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush(QColor(0, 0, 0, 200));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(132, 207, 212, 100));
        brush1.setStyle(Qt::NoBrush);
        QFont font6;
        font6.setPointSize(11);
        font6.setWeight(QFont::DemiBold);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(X_O_listWidget);
        __qlistwidgetitem->setFont(font6);
        __qlistwidgetitem->setBackground(brush1);
        __qlistwidgetitem->setForeground(brush);
        __qlistwidgetitem->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/2_players.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush2(QColor(0, 0, 0, 200));
        brush2.setStyle(Qt::NoBrush);
        QBrush brush3(QColor(132, 207, 212, 100));
        brush3.setStyle(Qt::NoBrush);
        QFont font7;
        font7.setWeight(QFont::DemiBold);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(X_O_listWidget);
        __qlistwidgetitem1->setFont(font7);
        __qlistwidgetitem1->setBackground(brush3);
        __qlistwidgetitem1->setForeground(brush2);
        __qlistwidgetitem1->setIcon(icon5);
        X_O_listWidget->setObjectName("X_O_listWidget");
        X_O_listWidget->setGeometry(QRect(74, 443, 151, 71));
        QFont font8;
        font8.setPointSize(16);
        font8.setBold(false);
        X_O_listWidget->setFont(font8);
        X_O_listWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        X_O_listWidget->setFrameShape(QFrame::NoFrame);
        X_O_listWidget->setFrameShadow(QFrame::Plain);
        X_O_listWidget->setLineWidth(0);
        X_O_listWidget->setMidLineWidth(0);
        X_O_listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        X_O_listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        X_O_listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        X_O_listWidget->setIconSize(QSize(60, 60));
        X_O_listWidget->setFlow(QListView::TopToBottom);
        X_O_listWidget->setProperty("isWrapping", QVariant(true));
        X_O_listWidget->setSpacing(7);
        X_O_listWidget->setViewMode(QListView::IconMode);
        three_Xs_listWidget = new QListWidget(homePage);
        QBrush brush4(QColor(0, 0, 0, 200));
        brush4.setStyle(Qt::NoBrush);
        QBrush brush5(QColor(132, 207, 212, 100));
        brush5.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(three_Xs_listWidget);
        __qlistwidgetitem2->setFont(font6);
        __qlistwidgetitem2->setBackground(brush5);
        __qlistwidgetitem2->setForeground(brush4);
        __qlistwidgetitem2->setIcon(icon4);
        QBrush brush6(QColor(0, 0, 0, 200));
        brush6.setStyle(Qt::NoBrush);
        QBrush brush7(QColor(132, 207, 212, 100));
        brush7.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(three_Xs_listWidget);
        __qlistwidgetitem3->setFont(font7);
        __qlistwidgetitem3->setBackground(brush7);
        __qlistwidgetitem3->setForeground(brush6);
        __qlistwidgetitem3->setIcon(icon5);
        three_Xs_listWidget->setObjectName("three_Xs_listWidget");
        three_Xs_listWidget->setGeometry(QRect(402, 443, 151, 71));
        three_Xs_listWidget->setFont(font8);
        three_Xs_listWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        three_Xs_listWidget->setFrameShape(QFrame::NoFrame);
        three_Xs_listWidget->setFrameShadow(QFrame::Plain);
        three_Xs_listWidget->setLineWidth(0);
        three_Xs_listWidget->setMidLineWidth(0);
        three_Xs_listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        three_Xs_listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        three_Xs_listWidget->setTabKeyNavigation(true);
        three_Xs_listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        three_Xs_listWidget->setIconSize(QSize(60, 60));
        three_Xs_listWidget->setFlow(QListView::TopToBottom);
        three_Xs_listWidget->setProperty("isWrapping", QVariant(true));
        three_Xs_listWidget->setSpacing(7);
        three_Xs_listWidget->setViewMode(QListView::IconMode);
        sign_pushButton = new QPushButton(homePage);
        sign_pushButton->setObjectName("sign_pushButton");
        sign_pushButton->setGeometry(QRect(520, 58, 83, 31));
        sign_pushButton->setFont(font5);
        sign_pushButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/key.png"), QSize(), QIcon::Normal, QIcon::Off);
        sign_pushButton->setIcon(icon6);
        sign_pushButton->setIconSize(QSize(28, 28));
        sign_pushButton->setFlat(false);
        lineEdit = new QLineEdit(homePage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(41, 21, 311, 106));
        QFont font9;
        font9.setPointSize(30);
        font9.setBold(true);
        lineEdit->setFont(font9);
        lineEdit->setFrame(false);
        welcome_icon = new QLabel(homePage);
        welcome_icon->setObjectName("welcome_icon");
        welcome_icon->setGeometry(QRect(440, 0, 51, 51));
        welcome_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/welcome.png")));
        welcome_icon->setScaledContents(true);
        stackedWidget->addWidget(homePage);
        slogan->raise();
        background_2->raise();
        X_O_pushButton->raise();
        three_Xs_pushButton->raise();
        HI_message->raise();
        X_O_listWidget->raise();
        three_Xs_listWidget->raise();
        sign_pushButton->raise();
        lineEdit->raise();
        welcome_icon->raise();
        signPage = new QWidget();
        signPage->setObjectName("signPage");
        label_3 = new QLabel(signPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-20, 0, 651, 461));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/need_to_sign.png")));
        label_3->setScaledContents(true);
        label_2 = new QLabel(signPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 0, 551, 71));
        QFont font10;
        font10.setPointSize(20);
        label_2->setFont(font10);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        layoutWidget1 = new QWidget(signPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(80, 510, 471, 46));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sign_in = new QPushButton(layoutWidget1);
        sign_in->setObjectName("sign_in");
        QFont font11;
        font11.setPointSize(15);
        sign_in->setFont(font11);
        sign_in->setIcon(icon6);
        sign_in->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(sign_in);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sign_up = new QPushButton(layoutWidget1);
        sign_up->setObjectName("sign_up");
        sign_up->setFont(font11);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        sign_up->setIcon(icon7);
        sign_up->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(sign_up);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        stackedWidget->addWidget(signPage);
        historyPage = new QWidget();
        historyPage->setObjectName("historyPage");
        background = new QLabel(historyPage);
        background->setObjectName("background");
        background->setGeometry(QRect(-120, 0, 811, 621));
        background->setPixmap(QPixmap(QString::fromUtf8(":/icons/history_background.png")));
        background->setScaledContents(true);
        stackedWidget->addWidget(historyPage);
        aboutPage = new QWidget();
        aboutPage->setObjectName("aboutPage");
        textBrowser = new QTextBrowser(aboutPage);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 330, 631, 281));
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setLineWidth(0);
        label_4 = new QLabel(aboutPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, -20, 651, 361));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/about_background.png")));
        label_4->setScaledContents(true);
        stackedWidget->addWidget(aboutPage);
        label_4->raise();
        textBrowser->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(X_O_pushButton, &QPushButton::toggled, X_O_listWidget, &QListWidget::setVisible);
        QObject::connect(three_Xs_pushButton, &QPushButton::toggled, three_Xs_listWidget, &QListWidget::setVisible);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        game_Logo->setText(QString());
        game_Name->setText(QCoreApplication::translate("MainWindow", "TicTacTooooo", nullptr));
        homeButton->setText(QCoreApplication::translate("MainWindow", "Home    ", nullptr));
        historyButton->setText(QCoreApplication::translate("MainWindow", "History  ", nullptr));
        aboutButton->setText(QCoreApplication::translate("MainWindow", "about us", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "   Exit   ", nullptr));
        background_2->setText(QString());
        X_O_pushButton->setText(QString());
        three_Xs_pushButton->setText(QString());
        slogan->setText(QCoreApplication::translate("MainWindow", "Begin the duel and conquer the Tic Tac Toe grid!", nullptr));
        HI_message->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Guest player!</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Try signing in to get your personal play history</span></p></body></html>", nullptr));

        const bool __sortingEnabled = X_O_listWidget->isSortingEnabled();
        X_O_listWidget->setSortingEnabled(false);
        X_O_listWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = three_Xs_listWidget->isSortingEnabled();
        three_Xs_listWidget->setSortingEnabled(false);
        three_Xs_listWidget->setSortingEnabled(__sortingEnabled1);

        sign_pushButton->setText(QCoreApplication::translate("MainWindow", "sign-in", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Tic Tac Tooooo", nullptr));
        welcome_icon->setText(QString());
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Sign in now to access your playing history", nullptr));
        sign_in->setText(QCoreApplication::translate("MainWindow", "sign in", nullptr));
        sign_up->setText(QCoreApplication::translate("MainWindow", "sign up", nullptr));
        background->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">Who we are</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">We are a group of five engineering students specializing in Communication &amp; Electronics, we\302\240embarked on this database project under the mentorship of Professo"
                        "r Omar Ahmed Nasr. Initially, the task seemed daunting, but Professor Omar assured us that the project was as much about learning how to tackle challenges. Throughout the journey, we encountered roadblocks that tested our skills and pushed us to think outside the box. But each time we hit a snag, we rallied together, leveraging AI tools and each other's strengths to find solutions.\302\240It wasn't always easy, but\302\240the sense of accomplishment we felt\302\240with each milestone kept us motivated.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">With each line of code and\302\240every\302\240database query, we\302\240not only\302\240honed our technical abilities\302\240but also\302\240gained a deeper understanding of the collaborative nature of engineering.\302\240Professor Omar's guidance encouraged us to explore beyond our comfort zones, teaching us the value of persistence and creat"
                        "ivity in problem-solving. Now, as we look back on the project, we're not just proud of what we've accomplished; we're also grateful for the lessons learned and the bonds forged along the way</span></p></body></html>", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
