#include "mainwindow.h"
#include "ui_mainwindow.h"

float num1, num2, result = 0;
int num1Value = 0;

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


void MainWindow::on_num1_textChanged(const QString &arg1)
{
    num1=arg1.toFloat();
}


void MainWindow::on_num2_textChanged(const QString &arg1)
{
    num2=arg1.toFloat();
}


void MainWindow::on_add_clicked()
{
    result=num1+num2;
}


void MainWindow::on_sub_clicked()
{
    result=num1-num2;
}


void MainWindow::on_mul_clicked()
{
    result=num1*num2;
}


void MainWindow::on_div_clicked()
{
    result=num1/num2;
}


void MainWindow::on_enter_clicked()
{
    ui->result->setText(QString::number(result));
    num1Value=0;
}


void MainWindow::on_clear_clicked()
{
    ui->result->setText("");
    ui->num1->setText("");
    ui->num2->setText("");
    num1Value=0;
}


void MainWindow::on_N1_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(1));
    num1Value++;
    }

    else {
        ui->num2->setText(QString::number(1));
    }
}



void MainWindow::on_N2_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(2));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(2));
    }
}


void MainWindow::on_N3_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(3));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(3));
    }
}


void MainWindow::on_N4_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(4));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(4));
    }
}


void MainWindow::on_N5_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(5));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(5));
    }
}


void MainWindow::on_N6_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(6));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(6));
    }
}


void MainWindow::on_N7_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(7));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(7));
    }
}


void MainWindow::on_N8_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(8));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(8));
    }
}


void MainWindow::on_N9_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(9));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(9));
    }
}


void MainWindow::on_N0_clicked()
{
    if (num1Value < 1) {
        ui->num1->setText(QString::number(0));
        num1Value++;
    }

    else {
        ui->num2->setText(QString::number(0));
    }
}

