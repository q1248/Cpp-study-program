#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_icon();
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_icon()
{

    QIcon icon;
    icon.addFile(":/pic/open.png");
    ui->open_file->setIcon(icon);
}

void MainWindow::init()
{
    ui->tableView->setModel(model);


}

