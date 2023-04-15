#ifndef INDICATORWIDGET_H
#define INDICATORWIDGET_H

#include <QWidget>
#include <QGroupBox>
#include <QLabel>

#include "ParamWidgets/ifparamwidget.h"
#include "ControlType.h"

namespace Ui {
class IndicatorWidget;
}

class IndicatorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IndicatorWidget(QWidget *parent = nullptr);
    ~IndicatorWidget();


    // Gettery & Settery
    QWidget* getSaWidget();
    IndicatorType getIndicatorType();
    void setIndicatorType(IndicatorType newType);
    QLabel* getLaName();
    QLabel* getLaIcon();


public: signals:
    void notifyWidgetTypeToMW(IndicatorType type);



private slots:
    void on_pbAdd_clicked();

private:
    Ui::IndicatorWidget *ui;
    IndicatorType _type;


};

#endif // INDICATORWIDGET_H
