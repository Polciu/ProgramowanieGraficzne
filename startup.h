#ifndef STARTUP_H
#define STARTUP_H

#include <QObject>

#include "mainwindow.h"
#include "modelcontroller.h"

class Startup
{
public:
    Startup();

    // Metody
public:
    void start();
    void initConnections();

private:
    MainWindow mainWindow;
    ModelController* modelController = nullptr;


};

#endif // STARTUP_H
