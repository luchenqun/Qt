#-------------------------------------------------
#
# Project created by QtCreator 2015-07-13T22:19:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtExcel
TEMPLATE = app
CONFIG  += qaxcontainer

SOURCES += main.cpp\
        QtExcel.cpp \
    ExcelEngine.cpp

HEADERS  += QtExcel.h \
    ExcelEngine.h
