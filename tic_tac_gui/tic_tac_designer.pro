QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Specify the icon file for your application
RC_ICONS += $$PWD/icons/game-logo.ico

SOURCES += \
    global_fincyions.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    sign_in.cpp \
    sign_up.cpp \
    tictactoe.cpp \
    winnerwidget.cpp

HEADERS += \
    global_functions.h \
    globals.h \
    mainwindow.h \
    player.h \
    sign_in.h \
    sign_up.h \
    tictactoe.h \
    winnerwidget.h

FORMS += \
    mainwindow.ui \
    sign_in.ui \
    sign_up.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons/recoutces.qrc
