#ifndef INPUTPARAMWIDGET_H
#define INPUTPARAMWIDGET_H

#include <QWidget>


namespace Ui {
class InputParamWidget;
}

class InputParamWidget : public QWidget
{
    Q_OBJECT

public:
    explicit InputParamWidget(QWidget *parent = nullptr);
    ~InputParamWidget();

private:
    Ui::InputParamWidget *ui;
};

#endif // INPUTPARAMWIDGET_H
