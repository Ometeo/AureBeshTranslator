#-------------------------------------------------
#
# Project created by QtCreator 2016-11-04T18:20:07
#
#-------------------------------------------------
include(../defaults.pri)

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

win32
{ CONFIG -= debug_and_release }

TEMPLATE = app
TARGET = AurebeshTranslator

SOURCES += main.cpp

LIBS += -L../AurebeshLib -laurebeshLib
