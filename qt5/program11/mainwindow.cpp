#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->scrollArea);
    init_tree();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exit_triggered()
{
    this->close();
}

void MainWindow::init_tree()
{
    ui->treeWidget->clear();
    QTreeWidgetItem *item=new QTreeWidgetItem(MainWindow::itTopItem);
    item->setText(MainWindow::colItem,"图片文档");
    item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
    item->setCheckState(MainWindow::itTopItem,Qt::Checked);

    item->setData(0,Qt::UserRole,"");
    ui->treeWidget->addTopLevelItem(item);
}

void MainWindow::addFloder(QTreeWidgetItem *parItem, QString dirName)
{
    auto str=getFinalFloderName(dirName);
    QTreeWidgetItem *item=new QTreeWidgetItem(MainWindow::itGroupItem);
    item->setText(MainWindow::colItem,str);
    item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
    item->setCheckState(MainWindow::itTopItem,Qt::Checked);
    item->setData(0,Qt::UserRole,QVariant(dirName));

    parItem->addChild(item);
}

QString MainWindow::getFinalFloderName(const QString &full_dir_name)
{
    int count=full_dir_name.length();
    int i=full_dir_name.lastIndexOf("/");
    auto str=full_dir_name.right(count-i-1);
    return str;
}

void MainWindow::addImagesItem(QTreeWidgetItem *parItem, QString aFileName)
{

    QString str=getFinalFloderName(aFileName);
    auto* item=new QTreeWidgetItem(MainWindow::itImageItem);
    item->setText(MainWindow::colItem,str);
    item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
    item->setCheckState(MainWindow::itTopItem,Qt::Checked);
    item->setData(0,Qt::UserRole,QVariant(aFileName));
    parItem->addChild(item);

}

void MainWindow::displayImage(QTreeWidgetItem *parItem)
{

    QString fileName=parItem->data(0,Qt::UserRole).toString();
    statusShow->setText(fileName);
    curPixMap.load(fileName);

}

void MainWindow::on_add_dic_triggered()
{

    QString str=QFileDialog::getExistingDirectory();
    if(!str.isEmpty())
    {
        QTreeWidgetItem *item=ui->treeWidget->currentItem();
        addFloder(item,str);
    }
}

void MainWindow::on_action_2_triggered()
{
    auto str=QFileDialog::getOpenFileNames(this,"选择一个或者多个文件","","Images(*.jpg)");
    if(str.isEmpty())
        return;
    QTreeWidgetItem* item, *paritem;
    item=ui->treeWidget->currentItem();
    if(item->type()==itImageItem)
        paritem=item->parent();
    else {
        paritem=item;
    }
    for(int i=0;i<str.size();i++)
    {
        QString aFilename=str.at(i);
        addImagesItem(paritem,aFilename);
    }
}

void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
   if(current==nullptr)
       return;
   int type=current->type();
   switch (type) {

   case MainWindow::itTopItem:
       ui->add_dic->setEnabled(true);
       ui->action_2->setEnabled(true);
       ui->del_node->setEnabled(false);
       break;

   case MainWindow::itGroupItem:

        ui->add_dic->setEnabled(true);
        ui->action_2->setEnabled(true);
        ui->del_node->setEnabled(true);
       break;

       case MainWindow::itImageItem:
       ui->add_dic->setEnabled(false);
       ui->action_2->setEnabled(true);
       ui->del_node->setEnabled(true);
       displayImage(current);
       break;
   }

}

void MainWindow::on_del_node_triggered()
{
    auto * item=ui->treeWidget->currentItem();
    auto *paritem=item->parent();
    paritem->removeChild(item);
}
