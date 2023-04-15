#include "inputparamwidget.h"
#include "ui_inputparamwidget.h"

InputParamWidget::InputParamWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputParamWidget)
{
    ui->setupUi(this);
}

InputParamWidget::~InputParamWidget()
{
    delete ui;
}
