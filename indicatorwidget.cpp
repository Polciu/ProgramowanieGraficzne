#include "indicatorwidget.h"
#include "ui_indicatorwidget.h"

IndicatorWidget::IndicatorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IndicatorWidget)
{
    ui->setupUi(this);
}


IndicatorWidget::~IndicatorWidget()
{
    delete ui;
}

IndicatorType IndicatorWidget::getIndicatorType()
{
    return _type;
}

void IndicatorWidget::setIndicatorType(IndicatorType newType)
{
    _type = newType;
}

QLabel *IndicatorWidget::getLaName()
{
    return ui->laName;
}

QLabel *IndicatorWidget::getLaIcon()
{
    return ui->laIcon;
}


void IndicatorWidget::on_pbAdd_clicked()
{
    emit notifyWidgetTypeToMW(_type);
}

