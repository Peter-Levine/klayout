
DESTDIR=$$OUT_PWD/..

include($$PWD/../klayout.pri)

DEFINES += MAKE_RBA_LIBRARY

TEMPLATE = lib

SOURCES = rba.cc \
    rbaConvert.cc \
    rbaInspector.cc \
    rbaUtils.cc \
    rbaInternal.cc \
    rbaMarshal.cc

# NOTE: ../common needs to be before RUBYINCLUDE since there is a config.h too.
INCLUDEPATH += ../common $$RUBYINCLUDE $$RUBYINCLUDE2 ../tl ../gsi
DEPENDPATH += ../common $$RUBYINCLUDE $$RUBYINCLUDE2 ../tl ../gsi
LIBS += $$RUBYLIBFILE -L$$DESTDIR -ltl -lgsi
  

HEADERS += \
    rbaConvert.h \
    rbaInspector.h \
    rbaUtils.h \
    rba.h \
    rbaMarshal.h \
    rbaInternal.h \
    rbaCommon.h
