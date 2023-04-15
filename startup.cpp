#include "startup.h"

Startup::Startup()
{

}

void Startup::start()
{
    modelController = new ModelController();
    mainWindow.show();

    initConnections();
}

void Startup::initConnections()
{
    // TODO
}
