#-------------------------------------------------
#
# Project created by QtCreator 2017-11-03T23:13:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    image.cpp \
    rotation.cpp \
    rogner.cpp \
    filtre.cpp \
    zoom.cpp \
    valeur.cpp

HEADERS  += mainwindow.h \
    image.h \
    rotation.h \
    rogner.h \
    filtre.h \
    zoom.h \
    valeur.h

FORMS    += mainwindow.ui \
    image.ui \
    rotation.ui \
    rogner.ui \
    filtre.ui \
    zoom.ui

RESOURCES += \
    ressource.qrc
