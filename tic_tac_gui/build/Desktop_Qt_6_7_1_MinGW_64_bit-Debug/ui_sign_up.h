/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_up
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *main_verticalLayout;
    QGridLayout *sub_gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Button_hid_sho;
    QLabel *label_pass;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_pass;
    QLabel *label_user;
    QLineEdit *lineEdit_user;
    QLabel *label_confirm;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_confirm;
    QPushButton *Button_toggel_confirm;
    QLineEdit *lineEdit_error_message;
    QHBoxLayout *sub_horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_sign_up;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_5;
    QWidget *layoutWidget1;
    QGridLayout *main_gridLayout;
    QLineEdit *lineEdit;
    QPushButton *toggel_access_pushButton;

    void setupUi(QDialog *sign_up)
    {
        if (sign_up->objectName().isEmpty())
            sign_up->setObjectName("sign_up");
        sign_up->resize(351, 192);
        layoutWidget = new QWidget(sign_up);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 10, 301, 158));
        main_verticalLayout = new QVBoxLayout(layoutWidget);
        main_verticalLayout->setSpacing(3);
        main_verticalLayout->setObjectName("main_verticalLayout");
        main_verticalLayout->setContentsMargins(0, 0, 0, 0);
        sub_gridLayout = new QGridLayout();
        sub_gridLayout->setObjectName("sub_gridLayout");
        sub_gridLayout->setHorizontalSpacing(0);
        sub_gridLayout->setVerticalSpacing(5);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        sub_gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        Button_hid_sho = new QPushButton(layoutWidget);
        Button_hid_sho->setObjectName("Button_hid_sho");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/closed_eye.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/open_eye.png"), QSize(), QIcon::Normal, QIcon::On);
        Button_hid_sho->setIcon(icon);
        Button_hid_sho->setCheckable(true);
        Button_hid_sho->setFlat(true);

        sub_gridLayout->addWidget(Button_hid_sho, 1, 3, 1, 1);

        label_pass = new QLabel(layoutWidget);
        label_pass->setObjectName("label_pass");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_pass->setFont(font);

        sub_gridLayout->addWidget(label_pass, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        sub_gridLayout->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        lineEdit_pass = new QLineEdit(layoutWidget);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        sub_gridLayout->addWidget(lineEdit_pass, 1, 2, 1, 1);

        label_user = new QLabel(layoutWidget);
        label_user->setObjectName("label_user");
        label_user->setFont(font);

        sub_gridLayout->addWidget(label_user, 0, 0, 1, 1);

        lineEdit_user = new QLineEdit(layoutWidget);
        lineEdit_user->setObjectName("lineEdit_user");

        sub_gridLayout->addWidget(lineEdit_user, 0, 2, 1, 2);

        label_confirm = new QLabel(layoutWidget);
        label_confirm->setObjectName("label_confirm");
        label_confirm->setFont(font);

        sub_gridLayout->addWidget(label_confirm, 2, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        sub_gridLayout->addItem(horizontalSpacer_6, 2, 1, 1, 1);

        lineEdit_confirm = new QLineEdit(layoutWidget);
        lineEdit_confirm->setObjectName("lineEdit_confirm");
        lineEdit_confirm->setEchoMode(QLineEdit::Password);

        sub_gridLayout->addWidget(lineEdit_confirm, 2, 2, 1, 1);

        Button_toggel_confirm = new QPushButton(layoutWidget);
        Button_toggel_confirm->setObjectName("Button_toggel_confirm");
        Button_toggel_confirm->setIcon(icon);
        Button_toggel_confirm->setCheckable(true);
        Button_toggel_confirm->setFlat(true);

        sub_gridLayout->addWidget(Button_toggel_confirm, 2, 3, 1, 1);


        main_verticalLayout->addLayout(sub_gridLayout);

        lineEdit_error_message = new QLineEdit(layoutWidget);
        lineEdit_error_message->setObjectName("lineEdit_error_message");
        QFont font1;
        font1.setPointSize(8);
        lineEdit_error_message->setFont(font1);
        lineEdit_error_message->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"color: rgb(255, 0, 0);"));
        lineEdit_error_message->setFrame(false);
        lineEdit_error_message->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lineEdit_error_message->setReadOnly(true);
        lineEdit_error_message->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_error_message->setClearButtonEnabled(false);

        main_verticalLayout->addWidget(lineEdit_error_message);

        sub_horizontalLayout = new QHBoxLayout();
        sub_horizontalLayout->setObjectName("sub_horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        sub_horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_sign_up = new QPushButton(layoutWidget);
        pushButton_sign_up->setObjectName("pushButton_sign_up");
        pushButton_sign_up->setMinimumSize(QSize(100, 27));
        pushButton_sign_up->setMaximumSize(QSize(100, 27));
        QFont font2;
        font2.setPointSize(11);
        pushButton_sign_up->setFont(font2);

        sub_horizontalLayout->addWidget(pushButton_sign_up);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        sub_horizontalLayout->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(layoutWidget);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setMinimumSize(QSize(100, 27));
        pushButton_cancel->setMaximumSize(QSize(100, 27));
        pushButton_cancel->setFont(font2);

        sub_horizontalLayout->addWidget(pushButton_cancel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        sub_horizontalLayout->addItem(horizontalSpacer_5);


        main_verticalLayout->addLayout(sub_horizontalLayout);

        layoutWidget1 = new QWidget(sign_up);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(80, 160, 211, 31));
        main_gridLayout = new QGridLayout(layoutWidget1);
        main_gridLayout->setSpacing(0);
        main_gridLayout->setObjectName("main_gridLayout");
        main_gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        main_gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font1);
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"color: rgb(90, 90, 90);"));
        lineEdit->setFrame(false);
        lineEdit->setReadOnly(true);

        main_gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        toggel_access_pushButton = new QPushButton(layoutWidget1);
        toggel_access_pushButton->setObjectName("toggel_access_pushButton");
        toggel_access_pushButton->setEnabled(true);
        toggel_access_pushButton->setMaximumSize(QSize(16562, 16777215));
        QFont font3;
        font3.setPointSize(8);
        font3.setUnderline(true);
        toggel_access_pushButton->setFont(font3);
        toggel_access_pushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"color: rgb(0, 0, 255);"));
        toggel_access_pushButton->setFlat(true);

        main_gridLayout->addWidget(toggel_access_pushButton, 0, 1, 1, 1);


        retranslateUi(sign_up);

        pushButton_sign_up->setDefault(true);


        QMetaObject::connectSlotsByName(sign_up);
    } // setupUi

    void retranslateUi(QDialog *sign_up)
    {
        sign_up->setWindowTitle(QCoreApplication::translate("sign_up", "Dialog", nullptr));
        Button_hid_sho->setText(QString());
        label_pass->setText(QCoreApplication::translate("sign_up", "Password :", nullptr));
        label_user->setText(QCoreApplication::translate("sign_up", "Username :", nullptr));
        label_confirm->setText(QCoreApplication::translate("sign_up", "Confirm Password :", nullptr));
        Button_toggel_confirm->setText(QString());
        lineEdit_error_message->setText(QString());
        pushButton_sign_up->setText(QCoreApplication::translate("sign_up", "sign up", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("sign_up", "cancel", nullptr));
        lineEdit->setText(QCoreApplication::translate("sign_up", "already have an account ?", nullptr));
        toggel_access_pushButton->setText(QCoreApplication::translate("sign_up", "sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sign_up: public Ui_sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
