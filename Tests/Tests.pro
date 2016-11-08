#-------------------------------------------------
#
# Project created by QtCreator 2016-11-04T19:45:46
#
#-------------------------------------------------
include(../defaults.pri)

QT       += core testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AurebeshProjectTest
CONFIG   += console
CONFIG -= debug_and_release

TEMPLATE = app


SOURCES += \
    AurebeshProjectTest.cpp

LIBS += -L../AurebeshLib -laurebeshLib
