#ifndef FORPARAMWIDGET_H
#define FORPARAMWIDGET_H

#include <QWidget>


namespace Ui {
class ForParamWidget;
}

class ForParamWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ForParamWidget(QWidget *parent = nullptr);
    ~ForParamWidget();

private:
    Ui::ForParamWidget *ui;
};

#endif // FORPARAMWIDGET_H
