#ifndef IFPARAMWIDGET_H
#define IFPARAMWIDGET_H

#include <QWidget>


namespace Ui {
class IfParamWidget;
}

class IfParamWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IfParamWidget(QWidget *parent = nullptr);
    ~IfParamWidget();


    // Metody
    QString getCondition();

private:
    Ui::IfParamWidget *ui;
};

#endif // IFPARAMWIDGET_H
