#-------------------------------------------------
#
# Project created by QtCreator 2016-06-24T13:35:04
#
#-------------------------------------------------

QT       += core gui
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataBaseConnect
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    MainView/MainView.cpp \
    MainView/SQLTableScene/SQLTableScene.cpp \
    MainView/SQLTableScene/TitleText.cpp \
    MainView/SQLTableScene/CustomComboBox/CustomComboBox.cpp \
    MainView/SQLTableScene/CustomComboBox/PopoutList.cpp \
    MainView/SQLTableScene/CustomComboBox/PopoutListOption.cpp

HEADERS  += MainWindow.h \
    MainView/MainView.h \
    MainView/SQLTableScene/SQLTableScene.h \
    MainView/SQLTableScene/TitleText.h \
    MainView/SQLTableScene/CustomComboBox/CustomComboBox.h \
    MainView/SQLTableScene/CustomComboBox/PopoutList.h \
    MainView/SQLTableScene/CustomComboBox/PopoutListOption.h
