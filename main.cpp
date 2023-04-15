#include "mainwindow.h"


#include "startup.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Startup startup;
    startup.start();
    /*MainWindow w;
    w.show();*/
    return a.exec();
}
