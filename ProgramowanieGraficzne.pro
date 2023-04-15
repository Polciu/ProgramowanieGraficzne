QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ParamWidgets/forparamwidget.cpp \
    ParamWidgets/ifparamwidget.cpp \
    ParamWidgets/variableparams.cpp \
    SceneItems/ifitem.cpp \
    SceneItems/sceneitem.cpp \
    indicator.cpp \
    indicatorcreationwidget.cpp \
    indicatorwidget.cpp \
    ParamWidgets/inputparamwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    ParamWidgets/operatorparamwidget.cpp \
    SceneItems/scene.cpp \
    ParamWidgets/whileparams.cpp \
    modelcontroller.cpp \
    startup.cpp

HEADERS += \
    ControlType.h \
    ParamWidgets/forparamwidget.h \
    ParamWidgets/ifparamwidget.h \
    ParamWidgets/variableparams.h \
    SceneItems/ifitem.h \
    SceneItems/sceneitem.h \
    indicator.h \
    indicatorcreationwidget.h \
    indicatorwidget.h \
    ParamWidgets/inputparamwidget.h \
    mainwindow.h \
    ParamWidgets/operatorparamwidget.h \
    SceneItems/scene.h \
    ParamWidgets/whileparams.h \
    modelcontroller.h \
    startup.h

FORMS += \
    ParamWidgets/forparamwidget.ui \
    ParamWidgets/ifparamwidget.ui \
    ParamWidgets/variableparams.ui \
    indicatorcreationwidget.ui \
    indicatorwidget.ui \
    ParamWidgets/inputparamwidget.ui \
    mainwindow.ui \
    ParamWidgets/operatorparamwidget.ui \
    ParamWidgets/whileparams.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
