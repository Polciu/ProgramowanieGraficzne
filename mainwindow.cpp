#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    creationWidget = new IndicatorCreationWidget();


    // Ustawienie central widgeta
    ui->saControls->setWidget(ui->wControlsContent);
    ui->wControlsContent->setLayout(ui->verticalLayout);

    // Dodanie kontrolki od ifa
    ifWidget = new IndicatorWidget();
    ui->verticalLayout->addWidget(ifWidget);
    ifWidget->setIndicatorType(IndicatorType::IT_IF);
    ifWidget->getLaName()->setText("If");
    ifWidget->getLaIcon()->setPixmap(QPixmap("res/ifIcon.png").scaled(180,180, Qt::KeepAspectRatio));
    ifParams = new IfParamWidget();
    connect(ifWidget, &IndicatorWidget::notifyWidgetTypeToMW, this, &MainWindow::showParamWidget);

    // Dodanie kontrolki od inputu
    inputWidget = new IndicatorWidget();
    ui->verticalLayout->addWidget(inputWidget);
    inputWidget->setIndicatorType(IndicatorType::IT_INPUT);
    inputWidget->getLaName()->setText("Input");
    // Ikonka - TODO
    inputParams = new InputParamWidget();
    connect(inputWidget, &IndicatorWidget::notifyWidgetTypeToMW, this, &MainWindow::showParamWidget);

    // Dodanie kontrolki od fora
    forWidget = new IndicatorWidget();
    ui->verticalLayout->addWidget(forWidget);
    forWidget->setIndicatorType(IndicatorType::IT_FOR);
    forWidget->getLaName()->setText("For");
    // Ikonka - TODO
    forParams = new ForParamWidget();
    connect(forWidget, &IndicatorWidget::notifyWidgetTypeToMW, this, &MainWindow::showParamWidget);

    // Dodanie kontrolki od while
    whileWidget = new IndicatorWidget();
    ui->verticalLayout->addWidget(whileWidget);
    whileWidget->setIndicatorType(IndicatorType::IT_WHILE);
    whileWidget->getLaName()->setText("While");
    // Ikonka - TODO
    whileParams = new WhileParams();
    connect(whileWidget, &IndicatorWidget::notifyWidgetTypeToMW, this, &MainWindow::showParamWidget);

    // Dodanie kontrolki od operatorow
    operatorWidget = new IndicatorWidget();
    ui->verticalLayout->addWidget(operatorWidget);
    operatorWidget->setIndicatorType(IndicatorType::IT_OPERATOR);
    operatorWidget->getLaName()->setText("Operator");
    // Ikonka - TODO
    operatorParams = new OperatorParamWidget();
    connect(operatorWidget, &IndicatorWidget::notifyWidgetTypeToMW, this, &MainWindow::showParamWidget);

    // Dodanie kontrolki od zmiennych
    variableWidget = new IndicatorWidget();
    ui->verticalLayout->addWidget(variableWidget);
    variableWidget->setIndicatorType(IndicatorType::IT_VARIABLE);
    variableWidget->getLaName()->setText("Zmienna");
    variableWidget->getLaIcon()->setPixmap(QPixmap("res/variable.png").scaled(180,180, Qt::KeepAspectRatio));
    variableParams = new VariableParams();
    connect(variableWidget, &IndicatorWidget::notifyWidgetTypeToMW, this, &MainWindow::showParamWidget);






    //--------------------------------------------------------------------------------------------------//
    //--------------------------------------------------------------------------------------------------//
    //------ Scena - prawa strona GUI -----//
    graphicsScene = new Scene();
    ui->graphicsView->setScene(graphicsScene);
    graphicsScene->setSceneRect(*graphicsScene->getSceneSize());

    // Tworzenie kontrolek
    // Zbieranie danych z paramsow
    connect(creationWidget, &IndicatorCreationWidget::notifyCreateItem, this, &MainWindow::takeDataFromParams);
    // Wysylanie danych do utworzenia - do sceny
    connect(this, &MainWindow::notifyCreateIfItem, graphicsScene, &Scene::createIfItem);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showParamWidget(IndicatorType type)
{
    switch(type)
    {
    case IndicatorType::IT_IF:
        {
            creationWidget->getLayout()->addWidget(ifParams);
            ifParams->show();
            creationWidget->show();
            creationWidget->setCurrentIndicator(IndicatorType::IT_IF);
            break;
        }
    case IndicatorType::IT_INPUT:
        {
            creationWidget->getLayout()->addWidget(inputParams);
            inputParams->show();
            creationWidget->show();
            creationWidget->setCurrentIndicator(IndicatorType::IT_INPUT);
            break;
        }
    case IndicatorType::IT_FOR:
        {
            creationWidget->getLayout()->addWidget(forParams);
            forParams->show();
            creationWidget->show();
            creationWidget->setCurrentIndicator(IndicatorType::IT_FOR);
            break;
        }
    case IndicatorType::IT_WHILE:
        {
            creationWidget->getLayout()->addWidget(whileParams);
            whileParams->show();
            creationWidget->show();
            creationWidget->setCurrentIndicator(IndicatorType::IT_WHILE);
            break;
        }
    case IndicatorType::IT_OPERATOR:
        {
            creationWidget->getLayout()->addWidget(operatorParams);
            operatorParams->show();
            creationWidget->show();
            creationWidget->setCurrentIndicator(IndicatorType::IT_OPERATOR);
            break;
        }
    case IndicatorType::IT_VARIABLE:
        {
            creationWidget->getLayout()->addWidget(variableParams);
            variableParams->show();
            creationWidget->show();
            creationWidget->setCurrentIndicator(IndicatorType::IT_VARIABLE);
            break;
        }
    }

}

void MainWindow::takeDataFromParams()
{
    qDebug() << "Take data from params.";

    switch(creationWidget->getCurrentType())
    {
    case IndicatorType::IT_IF:
        {
            emit notifyCreateIfItem(ifParams->getCondition());
            break;
        }
    case IndicatorType::IT_INPUT:
        {

            break;
        }
    case IndicatorType::IT_FOR:
        {

            break;
        }
    case IndicatorType::IT_WHILE:
        {

            break;
        }
    case IndicatorType::IT_OPERATOR:
        {

            break;
        }
    case IndicatorType::IT_VARIABLE:
        {
            break;
        }
    }
}

