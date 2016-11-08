#-------------------------------------------------
#
# Project created by QtCreator 2016-11-04T19:45:46
#
#-------------------------------------------------
include(../defaults.pri)

QT       += core gui testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


#CONFIG   += console
CONFIG -= debug_and_release

TEMPLATE = app
TARGET = AurebeshProjectTest

SOURCES += \
    AurebeshProjectTest.cpp

LIBS += -L../AurebeshLib -laurebeshLib
