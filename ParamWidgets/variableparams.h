#ifndef VARIABLEPARAMS_H
#define VARIABLEPARAMS_H

#include <QWidget>

namespace Ui {
class VariableParams;
}

class VariableParams : public QWidget
{
    Q_OBJECT

public:
    explicit VariableParams(QWidget *parent = nullptr);
    ~VariableParams();

private:
    Ui::VariableParams *ui;
};

#endif // VARIABLEPARAMS_H
