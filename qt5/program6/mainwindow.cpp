#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
   auto spin1=ui->spinBox;
   auto spin2=ui->spinBox_2;

   spin1->setSuffix(" kg");
   spin2->setPrefix("$ ");
   spin2->setSuffix(" /kg");
   spin1->setValue(0);
   spin2->setValue(0);

   ui->lineEdit->setText("0");
}


void MainWindow::on_pushButton_clicked()
{
    auto *line=ui->lineEdit;
    QString str =line->text();
    int  sp1=ui->spinBox->value();
    int  sp2=ui->spinBox_2->value();
    str=str.setNum(sp1*sp2,10);
    line->setText(str);

}
