#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_countButton_clicked()
{
    qDebug()<<"Nappia painettu";
    x++;
    QString i = QString::number(x);
    ui->countLaatikko->setText(" "+i+" ");


}


void MainWindow::on_resetButton_clicked()
{
    qDebug()<<"Reset nappia painettu";
    x=0;
    ui->countLaatikko->setText("0");
}

