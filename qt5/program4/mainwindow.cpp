#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    man=new QPersion;
    man->setProperty("score",99);
    man->setProperty("name","小明");
    man->setProperty("age",13);
    man->setProperty("sex","男");
    connect(man,&QPersion::ageChanged,this,&MainWindow::repose_age_changed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::repose_age_changed(int age)
{
   Q_UNUSED(age)
   auto *get_obj=qobject_cast<QPersion *>(sender());
   QString name=get_obj->property("name").toString();
   QString age1=get_obj->property("age").toString();
   auto sex=get_obj->property("sex");
   ui->textEdit->append("name is "+name+" sex is "+sex.toString()+" the age is "+age1);

}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
   Q_UNUSED(arg1)

   auto *spin=qobject_cast<QSpinBox *>(sender());
   man->setAge(spin->value());
}
