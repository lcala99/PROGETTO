QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        alcolico.cpp \
        analcolico.cpp \
        bevanda.cpp \
        carrello.cpp \
        cocktail.cpp \
        ingrediente.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    alcolico.h \
    analcolico.h \
    bevanda.h \
    carrello.h \
    cocktail.h \
    deeptr.h \
    ingrediente.h \
    vettore.h
