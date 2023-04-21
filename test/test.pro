QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle
INCLUDEPATH += "../prog_server"

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        ../prog_server/complex.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../lib/googletest/lib/ -lgtest

INCLUDEPATH += $$PWD/../lib/googletest/include/googletest/include
DEPENDPATH += $$PWD/../lib/googletest/include/googletest/include

HEADERS += \
    ../prog_server/complex.h
