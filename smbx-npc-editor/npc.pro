#-------------------------------------------------
#
# Project created by QtCreator 2015-08-23T11:30:33
#
#-------------------------------------------------

QT       += core gui widgets

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = "SMBX NPC Editor"
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    customspinner.cpp \
    new_npc.cpp \
    customcheckbox.cpp \
    scorecombobox.cpp

HEADERS  += mainwindow.h \
    customspinner.h \
    new_npc.h \
    customcheckbox.h \
    scorecombobox.h

FORMS    += mainwindow.ui \
    customspinner.ui \
    customcheckbox.ui \
    scorecombobox.ui
