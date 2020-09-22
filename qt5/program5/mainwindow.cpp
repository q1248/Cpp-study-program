#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>

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

    QString str=ui->lineEdit_3->text();
    float num=ui->lineEdit->text().toFloat();
    float price=ui->lineEdit_2->text().toFloat();
    str=str.setNum(num*price,'f',4);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_pushButton_2_clicked()
{
   auto str=ui->lineEdit_4->text();
   int ori=str.toInt();

   str=str.setNum(ori,2);
   ui->lineEdit_5->setText(str);

   str=str.setNum(ori,16);
   ui->lineEdit_6->setText(str);
}
