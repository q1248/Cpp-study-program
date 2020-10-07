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


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->label->setText(model->filePath(index));
    ui->label_2->setText(model->type(index));
    ui->label_3->setText(model->fileName(index));


}

void MainWindow::init()
{

    model=new QFileSystemModel(this);

    model->setRootPath(QDir::currentPath());
    ui->tableView->setModel(model);
    ui->treeView->setModel(model);
    ui->listView->setModel(model);
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->listView,SLOT(setRootIndex(QModelIndex)));
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->tableView,SLOT(setRootIndex(QModelIndex)));
}
