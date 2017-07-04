#-------------------------------------------------
#
# Project created by QtCreator 2017-07-04T14:11:55
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TeMariaDBConnector
TEMPLATE = app

#INCLUDEPATH += "/opt/lampp/lib"

#LIBS += -L"/opt/lampp/lib"

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

QMAKE_CXXFLAGS += -std=c++14
