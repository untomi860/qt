#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "subject.h"
#include "QList"
#include "QTimer"
#include "ctime"
#include "iostream"

class weatherdata : public Subject
{
private:
    QList<observer*> observers;
    float temperature;
    float humidity;
    float pressure;
    QTimer *timer;
public:
    weatherdata();
    void registerObserver(observer*);
    void removeObserver(observer*);
    void notifyObserver();
    void measurementsChanged();
    void setMeasurements(float, float, float);
private slots:
    void on_timer();
};

#endif // WEATHERDATA_H
