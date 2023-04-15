#ifndef INDICATOR_H
#define INDICATOR_H

#include "ControlType.h"

#include <QObject>

class Indicator
{
public:
    Indicator();

public:
    virtual void generateCode() = 0;

private:
    IndicatorType type;
};

#endif // INDICATOR_H
