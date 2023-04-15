#include "ifparamwidget.h"
#include "ui_ifparamwidget.h"

IfParamWidget::IfParamWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IfParamWidget)
{
    ui->setupUi(this);
}

IfParamWidget::~IfParamWidget()
{
    delete ui;
}

QString IfParamWidget::getCondition()
{
    return ui->lineEdit->text();
}
