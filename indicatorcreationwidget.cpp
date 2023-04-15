#include "indicatorcreationwidget.h"
#include "ui_indicatorcreationwidget.h"


IndicatorCreationWidget::IndicatorCreationWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IndicatorCreationWidget)
{
    ui->setupUi(this);
}

IndicatorCreationWidget::~IndicatorCreationWidget()
{
    delete ui;
}

QGridLayout *IndicatorCreationWidget::getLayout()
{
    return ui->gridLayout;
}

void IndicatorCreationWidget::setCurrentIndicator(IndicatorType type)
{
    currentType = type;
}

void IndicatorCreationWidget::clearLayout()
{
    QLayoutItem *item;
    while ((item =  ui->gridLayout->takeAt(0)))
    {
        item->widget()->hide();
        ui->gridLayout->removeItem(item);
        ui->gridLayout->update();
    }
}

IndicatorType IndicatorCreationWidget::getCurrentType()
{
    return currentType;
}

void IndicatorCreationWidget::on_pbCancel_clicked()
{
    clearLayout();
    this->close();
}


void IndicatorCreationWidget::on_pbCreate_clicked()
{
    clearLayout();
    this->close();
    emit notifyCreateItem(currentType);
}

