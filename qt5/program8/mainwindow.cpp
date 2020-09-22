//这部分内容是关于定时器和计时器以及DateEdit和TimeEdit的
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QTime>
#include<QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    time=new QTimer(this);
    time->stop();
    time->setInterval(1000);

    connect(time,&QTimer::timeout,this,&MainWindow::on_timeout);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    auto current_time=QDateTime::currentDateTime();
    ui->dateEdit->setDate(current_time.date());
    ui->lineEdit->setText(current_time.date().toString("yyyy-MM-dd"));

    ui->timeEdit->setTime(current_time.time());
    ui->lineEdit_2->setText(current_time.time().toString("hh:mm:ss"));

    ui->dateTimeEdit->setDateTime(current_time);
    ui->lineEdit_3->setText(current_time.toString("yyyy-MM-dd  hh:mm:ss"));
}

void MainWindow::on_pushButton_4_clicked()
{

    QString str=ui->lineEdit_3->text();
    str=str.trimmed();
    if(!str.isEmpty())
    {
        QDateTime datetime=QDateTime::fromString(str,"yyyy-MM-dd:mm:ss");
        ui->dateTimeEdit->setDateTime(datetime);
    }
}

void MainWindow::on_timeout()
{

    auto currtime=QTime::currentTime();
    ui->lcdNumber->display(currtime.hour());
    ui->lcdNumber_2->display(currtime.minute());
    ui->lcdNumber_3->display(currtime.second());

    int va=ui->progressBar->value();
    va++;
    if(va>100)
        va=0;
    ui->progressBar->setValue(va);

}

void MainWindow::on_pushButton_5_clicked()
{

    time->start();
    count.start();
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_5->setEnabled(false);

}

void MainWindow::on_pushButton_6_clicked()
{
   time->stop();
   int countms=count.elapsed();
   int sec=countms%1000;
   int mmm=countms/1000;
   QString str=QString::asprintf("%d 秒 %d 毫秒",mmm,countms);
   ui->lineEdit_4->setText(str);
   ui->pushButton_6->setEnabled(false);
   ui->pushButton_5->setEnabled(true);

}
