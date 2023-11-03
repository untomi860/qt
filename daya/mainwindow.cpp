#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
#include <QStyle>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("супер часы");
    QString currentTime = QTime::currentTime().toString("hh:mm:ss");
    ui->lcdNumber->display(currentTime);
    timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(update_time()));

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(this->style()->standardIcon(Qstyle))
    trayIcon = new QSystemTrayIcon(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::update_time() {
    QString currentTime = QTime::currentTime().toString("hh:mm:ss");
    ui->lcdNumber->display(currentTime);
}
