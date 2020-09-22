#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSlider>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    slider_init();
    connect_slilder();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    Q_UNUSED(value)
    int red=ui->horizontalSlider->value();
    int yellow =ui->horizontalSlider_2->value();
    int blue=ui->horizontalSlider_3->value();
    int alpha=ui->horizontalSlider_4->value();

    QColor color;
    color.setRgb(red,yellow,blue,alpha);

    auto pal=ui->textEdit->palette();
    pal.setColor(QPalette::Base,color);

    ui->textEdit->setPalette(pal);
}

void MainWindow::connect_slilder()
{
   connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
   connect(ui->horizontalSlider_3,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
   connect(ui->horizontalSlider_4,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));

}

void MainWindow::slider_init()
{
   auto *slider1=ui->horizontalSlider;
   auto *slider2=ui->horizontalSlider_2;
   auto *slider3=ui->horizontalSlider_3;

   slider1->setMinimum(0);
   slider1->setMaximum(255);
   slider1->setSingleStep(1);
   slider1->setPageStep(10);

   slider2->setMinimum(0);
   slider2->setMaximum(255);
   slider2->setSingleStep(1);
   slider2->setPageStep(10);

   slider3->setMinimum(0);
   slider3->setMaximum(255);
   slider3->setSingleStep(1);
   slider3->setPageStep(10);
}

void MainWindow::on_dial_valueChanged(int value)
{
   Q_UNUSED(value)
   int get_value=ui->dial->value();
   ui->lcdNumber->display(get_value);
}
