#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox msg;
    if(ui->lineEdit->text().isEmpty()) {
           QMessageBox::warning(this, "Ошибка", "введите число!");

           ui->lineEdit->setFocus();
           return;
    }
    if(ui->lineEdit_2->text().isEmpty()) {
           QMessageBox::warning(this, "Ошибка", "введите число!");

           ui->lineEdit_2->setFocus();
           return;

       }
    else {
        float edt1 = ui->lineEdit->text().toFloat();
        float edt2 = ui->lineEdit_2->text().toFloat();
        float msgq;

    QString act = ui->comboBox->currentText();
    if (act == "+") {
        msgq = edt1 + edt2;
    }
    if (act == "-") {
        msgq = edt1 - edt2;
    }
    if (act == "*") {
        msgq = edt1 * edt2;
    }
    if (act == "/") {
        msgq = edt1 / edt2;
    }
    msg.setText(QString::number(msgq));
    msg.exec();
    }




}

