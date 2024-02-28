#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QTimer>
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(on_pushButton_3_clicked()));


    timer2 = new QTimer(this);
    connect(timer2, SIGNAL(timeout()),this,SLOT(on_Switch1_clicked()));

    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);
    }





MainWindow::~MainWindow()
{
    delete ui;
    qDebug() << "Destruckt...";
}


void MainWindow::on_pushButton_3_clicked()
{

    qDebug() << "Start Game painettu...";
                ui->label->setText("Peli käynnissä...");
    Timer1();
}


void MainWindow::on_time1_button_clicked()
{
    decreaseAmount = 1200;
        qDebug() << "Time1 painettu...";
}


void MainWindow::on_time2_button_clicked()
{
    decreaseAmount = 3000;
    qDebug() << "Time2 painettu...";
}


void MainWindow::on_Switch1_clicked()
{
        timer->stop();
    Timer2();
    qDebug() << "Switch1 painettu...";
    }

void MainWindow::on_Switch2_clicked()
{
    timer2->stop();
    Timer1();
    qDebug() << "Switch2 painettu...";
}


void MainWindow::Timer1()
{
    timer->start(decreaseAmount);
    currentValue = ui->progressBar->value();

        ui->progressBar->setValue(currentValue - 1);
        qDebug() << "TIMER1...";
        qDebug() << ui->progressBar->value();

        if (ui->progressBar->value() == 0){
            qDebug() << "PLAYER 1 WON!!!!!!!!!!!!!!!!!!!!!!!!!!!";
            ui->label->setText("Pelaaja 1 VOITTI!");
            on_StopGame_clicked();
        }
}


void MainWindow::Timer2()
{
    timer2->start(decreaseAmount);
    currentValue2 = ui->progressBar_2->value();

    ui->progressBar_2->setValue(currentValue2 - 1);
        qDebug() << "Timer2...";
            qDebug() << ui->progressBar_2->value();

        if (ui->progressBar_2->value() == 0){
                qDebug() << "PLAYER 2 WON????????????";
            ui->label->setText("Pelaaja 2 VOITTI!");
        on_StopGame_clicked();
        }
}


void MainWindow::on_StopGame_clicked()
{
    timer->stop();
    timer2->stop();

    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);

    decreaseAmount = 0;
    qDebug() << "STOPGAME...";
}

