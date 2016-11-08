#-------------------------------------------------
#
# Project created by QtCreator 2016-11-04T19:45:46
#
#-------------------------------------------------
include(../defaults.pri)

QT       += widgets testlib

TARGET = AurebeshProjectTest
CONFIG   += console
CONFIG -= debug_and_release

TEMPLATE = app


SOURCES += \
    AurebeshProjectTest.cpp

LIBS += -L../AurebeshLib -laurebeshLib
