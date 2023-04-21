QT -= gui
QT += network

CONFIG += c++17 console
CONFIG -= app_bundle
INCLUDEPATH += ../common
INCLUDEPATH += ../generate-proto

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        ../common/common.cpp \
        ../common/communicator.cpp \
        ../generate-proto/data.pb.cc \
        application.cpp \
        complex.cpp \
        main.cpp \
        rationalnumber.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    ../common/common.h \
    ../common/communicator.h \
    ../generate-proto/data.pb.h \
    application.h \
    complex.h \
    matrix.h \
    rationalnumber.h \
    squarematrix.h

win32: LIBS += -L$$PWD/../lib/protobuf/lib/ -lprotobuf

INCLUDEPATH += $$PWD/../lib/protobuf/include
DEPENDPATH += $$PWD/../lib/protobuf/include
