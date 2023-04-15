#ifndef WHILEPARAMS_H
#define WHILEPARAMS_H

#include <QWidget>


namespace Ui {
class WhileParams;
}

class WhileParams : public QWidget
{
    Q_OBJECT

public:
    explicit WhileParams(QWidget *parent = nullptr);
    ~WhileParams();

private:
    Ui::WhileParams *ui;
};

#endif // WHILEPARAMS_H
