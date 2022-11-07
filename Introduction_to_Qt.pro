TEMPLATE = app
TARGET = name_of_the_app

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    window_calculator.cpp \
    window_main.cpp

HEADERS += \
    window_calculator.h \
    window_main.h
