#include "forparamwidget.h"
#include "ui_forparamwidget.h"

ForParamWidget::ForParamWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ForParamWidget)
{
    ui->setupUi(this);
}

ForParamWidget::~ForParamWidget()
{
    delete ui;
}
