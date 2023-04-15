#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include "indicatorwidget.h"
#include "ParamWidgets/ifparamwidget.h"
#include "indicatorcreationwidget.h"
#include "ParamWidgets/inputparamwidget.h"
#include "ParamWidgets/forparamwidget.h"
#include "ParamWidgets/whileparams.h"
#include "ParamWidgets/operatorparamwidget.h"
#include "ParamWidgets/variableparams.h"

#include "SceneItems/scene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public: signals:
    // Tworzenie kontrolek
    void notifyCreateIfItem(QString condition);

public slots:
    void showParamWidget(IndicatorType type);
    void takeDataFromParams();

private:
    Ui::MainWindow *ui;


    //------------------------------------------------------------------------//
    // Rzeczy odpowiedzialne za tworzenie kontrolek - lewa strona ekranu

    IndicatorCreationWidget* creationWidget = nullptr;

    // Kontrolka if - zmienne
    IndicatorWidget* ifWidget = nullptr;
    IfParamWidget* ifParams = nullptr;

    // Kontrolka input - zmienne
    IndicatorWidget* inputWidget = nullptr;
    InputParamWidget* inputParams = nullptr;

    // Kontrolka for
    IndicatorWidget* forWidget = nullptr;
    ForParamWidget* forParams = nullptr;

    // Kontrolka while
    IndicatorWidget* whileWidget = nullptr;
    WhileParams* whileParams = nullptr;

    // Kontrolka do while

    // Kontrolka od operatorow (kontrolki)
    IndicatorWidget* operatorWidget = nullptr;
    OperatorParamWidget* operatorParams = nullptr;

    // Kontrolka od zmiennych
    IndicatorWidget* variableWidget = nullptr;
    VariableParams* variableParams = nullptr;


    //---------------------------------------------------------------------//
    // Rzeczy odpowiedzialne za tworzenie diagramu - prawa strona ekranu
    Scene* graphicsScene = nullptr;



};
#endif // MAINWINDOW_H
