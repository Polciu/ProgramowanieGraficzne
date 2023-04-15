#include "whileparams.h"
#include "ui_whileparams.h"

WhileParams::WhileParams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WhileParams)
{
    ui->setupUi(this);
}

WhileParams::~WhileParams()
{
    delete ui;
}
