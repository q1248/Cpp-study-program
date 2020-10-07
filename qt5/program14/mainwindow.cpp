#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    ui->plainTextEdit->clear();
}

void MainWindow::on_pushButton_4_clicked()
{

    model->insertRow(model->rowCount());
    QModelIndex index=model->index(model->rowCount()-1,0);
    model->setData(index,"new item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

void MainWindow::init()
{
    model=new QStringListModel(this);
    ui->listView->setModel(model);
    QStringList theList;
    theList<<"北京"<<"上海"<<"天津"<<"武汉"<<"陕西"<<"山西";

    model->setStringList(theList);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
}

void MainWindow::on_pushButton_5_clicked()
{

    QModelIndex index=ui->listView->currentIndex();
    model->insertRow(index.row());

    model->setData(index,"insert row ",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

void MainWindow::on_pushButton_6_clicked()
{

    auto index=ui->listView->currentIndex();
    model->removeRow(index.row());
}

void MainWindow::on_pushButton_7_clicked()
{
    model->removeRows(0,model->rowCount());
}

void MainWindow::on_pushButton_2_clicked()
{
    auto str=model->stringList();
    ui->plainTextEdit->clear();
    for(auto i:str){
        ui->plainTextEdit->appendPlainText(i);
    }
}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{
   ui->label->setText(QString::asprintf("当前条目:row=%d,  column=%d",index.row(),index.column()));
   on_pushButton_2_clicked();
}
