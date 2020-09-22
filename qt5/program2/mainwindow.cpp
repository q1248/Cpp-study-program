#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox_6,SIGNAL(clicked()),this,SLOT(choose_two_choosed()));
    connect(ui->checkBox_5,SIGNAL(clicked()),this,SLOT(choose_two_choosed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_2_clicked(bool checked)
{
  QFont font=ui->plainTextEdit->font();
  font.setItalic(checked);
  ui->plainTextEdit->setFont(font);

}

void MainWindow::on_checkBox_clicked(bool checked)
{
   QFont font=ui->plainTextEdit->font();
   font.setBold(checked);
   ui->plainTextEdit->setFont(font);
}

void MainWindow::on_checkBox_3_clicked(bool checked)
{
   QFont font =ui->plainTextEdit->font();
   font.setUnderline(checked);
   ui->plainTextEdit->setFont(font);
}

void MainWindow::on_checkBox_4_clicked(bool checked)
{

  QPalette pale=ui->plainTextEdit->palette();
    if(checked==true){
  pale.setColor(QPalette::Text,Qt::red);
  ui->plainTextEdit->setPalette(pale);
    }
    else{
  pale.setColor(QPalette::Text,Qt::black);
  ui->plainTextEdit->setPalette(pale);

    }
}

void MainWindow::choose_two_choosed()
{
    QPalette pale=ui->plainTextEdit->palette();

    if(ui->checkBox_5->isChecked())
        pale.setColor(QPalette::Text,Qt::yellow);
    else{

    if(ui->checkBox_6->isChecked())
        pale.setColor(QPalette::Text,Qt::blue);
    }
    ui->plainTextEdit->setPalette(pale);
}

