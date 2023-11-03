#include "weatherdata.h"

weatherdata::weatherdata()
{
    timer = new QTimer(this);
    timer->setInterval(2000);
    timer->start();

    connect(timer, SIGNAL(timeout()), this, SLOT(on_timer()));

}
void weatherdata::registerObserver(observer *o)
{
    observers.append(o);
}
void weatherdata::removeObserver(observer *o)
{
    auto iter = observers.begin();
    while (iter != observers.end()) {
        if (*iter == o) {
            iter = observers.erase(iter);
        }
        else {
            iter++;
        }
    }
}
void weatherdata::notifyObserver()
{
    for (auto iter : observers) {
        ((observer*)iter)->update(temperature, humidity, pressure);
    }
}
void weatherdata::measurementsChanged()
{
   notifyObserver();
}
void weatherdata::setMeasurements(float, float, float)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}
void weatherdata::on_timer()
{
   temperature = std::rand() % 60 -30;
   measurementsChanged();
}

