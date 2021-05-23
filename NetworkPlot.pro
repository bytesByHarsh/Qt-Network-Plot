QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += include/
VPATH += src/

SOURCES += \
    main.cpp \
    src/myserver.cpp \
    src/mythread.cpp \
    src/networkplot.cpp \
    src/qcustomplot.cpp \
    src/serverthread.cpp

HEADERS += \
    include/myserver.h \
    include/mythread.h \
    include/networkplot.h \
    include/qcustomplot.h \
    include/serverthread.h

FORMS += \
    networkplot.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
