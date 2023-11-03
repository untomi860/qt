#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include "QWidget"
#include "QLCDNumber"
#include "observer.h"
#include "displayelement.h"
#include "subject.h"

class currentconditionsdisplay : public QWidget, public observer, public DisplayElement
{
    Q_OBJECT
private:
public:
    currentconditionsdisplay();
};

#endif // CURRENTCONDITIONSDISPLAY_H
