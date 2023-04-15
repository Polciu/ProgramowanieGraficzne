#include "operatorparamwidget.h"
#include "ui_operatorparamwidget.h"

OperatorParamWidget::OperatorParamWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OperatorParamWidget)
{
    ui->setupUi(this);
}

OperatorParamWidget::~OperatorParamWidget()
{
    delete ui;
}
