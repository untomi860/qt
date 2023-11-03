#include "clock.h"
#include "ui_clock.h"

Clock::Clock(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Clock)
{
    ui->setupUi(this);
}

Clock::~Clock()
{
    delete ui;
}

