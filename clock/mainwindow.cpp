#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    clock = new Clock(this);
    clock->show();

    connect(clock, SIGNAL(alarm()), this, SLOT(on_alarm()));

    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(btn_start_click()));
    //connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(btn_stop_click()));
    //connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(btn_reset_click()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_alarm(){
    QMessageBox msg;
    msg.setText("time is up");
    msg.exec();
}

void MainWindow::on_pushButton_clicked()
{
    clock->start();
}


void MainWindow::on_pushButton_2_clicked()
{
    clock->stop();
}


void MainWindow::on_pushButton_3_clicked()
{
    clock->reset();
}

