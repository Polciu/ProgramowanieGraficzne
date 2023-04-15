#include "variableparams.h"
#include "ui_variableparams.h"

VariableParams::VariableParams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VariableParams)
{
    ui->setupUi(this);
}

VariableParams::~VariableParams()
{
    delete ui;
}
