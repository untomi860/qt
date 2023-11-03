#ifndef CLOCK_H
#define CLOCK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Clock; }
QT_END_NAMESPACE

class Clock : public QMainWindow
{
    Q_OBJECT

public:
    Clock(QWidget *parent = nullptr);
    ~Clock();

private:
    Ui::Clock *ui;
};
#endif // CLOCK_H
