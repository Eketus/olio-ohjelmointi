#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    double decreaseAmount=0;

    double currentValue=0;

    double currentValue2=0;

private slots:

    void Timer1();

    void Timer2();

    void on_pushButton_3_clicked();

    void on_time1_button_clicked();

    void on_time2_button_clicked();

    void on_Switch1_clicked();

    void on_Switch2_clicked();

    void on_StopGame_clicked();


private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTimer *timer2;
};
#endif // MAINWINDOW_H
