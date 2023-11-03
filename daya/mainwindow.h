#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QCloseEvent>
#include <QSystemTrayIcon>
#include <QAction>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent * event);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void update_time();


private:
    Ui::MainWindow *ui;
    int second;
    QTimer *timer;
};
#endif // MAINWINDOW_H
