#ifndef INDICATORCREATIONWIDGET_H
#define INDICATORCREATIONWIDGET_H

#include <QWidget>
#include <QGridLayout>

#include "ControlType.h"

namespace Ui {
class IndicatorCreationWidget;
}

class IndicatorCreationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IndicatorCreationWidget(QWidget *parent = nullptr);
    ~IndicatorCreationWidget();

    // Getty & setty
    QGridLayout* getLayout();
    void setCurrentIndicator(IndicatorType type);

    // Metody
    void clearLayout();
    IndicatorType getCurrentType();


public: signals:
    // Tworzenie
    void notifyCreateItem(IndicatorType type);

private slots:
    void on_pbCancel_clicked();

    void on_pbCreate_clicked();

private:
    Ui::IndicatorCreationWidget *ui;
    IndicatorType currentType;

};

#endif // INDICATORCREATIONWIDGET_H
