#ifndef OPERATORPARAMWIDGET_H
#define OPERATORPARAMWIDGET_H

#include <QWidget>


namespace Ui {
class OperatorParamWidget;
}

class OperatorParamWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OperatorParamWidget(QWidget *parent = nullptr);
    ~OperatorParamWidget();

private:
    Ui::OperatorParamWidget *ui;
};

#endif // OPERATORPARAMWIDGET_H
