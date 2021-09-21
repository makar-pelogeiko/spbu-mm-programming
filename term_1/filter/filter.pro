TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG = release
QMAKE_LFLAGS += -static

SOURCES += \
        main.c \
    filter.c

HEADERS += \
    filter.h
