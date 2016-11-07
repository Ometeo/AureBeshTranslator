include(../defaults.pri)

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += staticlib
win32
{ CONFIG -= debug_and_release }

TEMPLATE = lib
TARGET = aurebeshLib

SOURCES += mainwindow.cpp
HEADERS += mainwindow.h
