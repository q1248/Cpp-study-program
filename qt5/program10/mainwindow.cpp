#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect_tool_btn();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_init_list_triggered()
{

    QIcon icon;
    QListWidgetItem *lists;
    icon.addFile(":/img/item.png");
    bool isEditable=ui->radioButton->isChecked();
    auto *listwidget=ui->listWidget;
    listwidget->clear();

    for(int i=0;i<10;i++){

        lists=new QListWidgetItem;
        QString str=QString::asprintf("项目 %d",i);
        lists->setText("str");
        lists->setIcon(icon);
        lists->setCheckState(Qt::Checked);
        if(isEditable){

            lists->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
        else {
            lists->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
        listwidget->addItem(lists);

    }

}

void MainWindow::connect_tool_btn()
{

    ui->toolButton_1->setDefaultAction(ui->init_list);
    ui->toolButton_2->setDefaultAction(ui->clean_list);
    ui->toolButton_3->setDefaultAction(ui->add_item);
    ui->toolButton_4->setDefaultAction(ui->delete_item);
    ui->toolButton_11->setDefaultAction(ui->select_all);
    ui->toolButton_8->setDefaultAction(ui->clean_select);
    ui->toolButton_9->setDefaultAction(ui->select_un);
    QMenu *menu= new QMenu;
    menu->addAction(ui->select_all);
    menu->addAction(ui->clean_list);
    menu->addAction(ui->select_un);

    auto *down_menu=ui->toolButton_6;
    down_menu->setPopupMode(QToolButton::MenuButtonPopup);
    down_menu->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    down_menu->setDefaultAction(ui->select_un);
    down_menu->setMenu(menu);

}


void MainWindow::on_clean_list_triggered()
{

    ui->listWidget->clear();
}

void MainWindow::on_delete_current_triggered()
{

    auto*item= ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}

void MainWindow::on_add_item_triggered()
{


    QIcon icon;
    QListWidgetItem *lists;
    icon.addFile(":/img/item.png");
    bool isEditable=ui->radioButton->isChecked();
    auto *listwidget=ui->listWidget;
    int row=listwidget->currentRow();


        lists=new QListWidgetItem;
        QString str=QString::asprintf("新添加的项目");
        lists->setText(str);
        lists->setIcon(icon);
        lists->setCheckState(Qt::Checked);
        if(isEditable){

            lists->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
        else {
            lists->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
        listwidget->insertItem(row,lists);

}


void MainWindow::on_clean_select_triggered()
{

    for(int i=0;i<ui->listWidget->count();i++) {

        auto *item=ui->listWidget->item(i);
        item->setCheckState(Qt::Unchecked);
    }
}

void MainWindow::on_select_all_triggered()
{

    for(int i=0;i<ui->listWidget->count();i++) {

        auto *item=ui->listWidget->item(i);
        item->setCheckState(Qt::Checked);
    }
}

void MainWindow::on_select_un_triggered()
{

    int row=ui->listWidget->currentRow();
    for(int i=0;i<ui->listWidget->count();i++){

        if(i==row)
            ;
        else{
            auto *item=ui->listWidget->item(i);
            item->setCheckState(Qt::Checked);
        }
    }
}

void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{

    QMenu *menu=new QMenu(this);
    menu->addAction(ui->init_list);
    menu->addAction(ui->clean_list);
    menu->addAction(ui->delete_item);
    menu->addSeparator();
    menu->addAction(ui->select_all);
    menu->addAction(ui->select_un);
    menu->addAction(ui->clean_select);
    menu->exec(QCursor::pos());

    delete menu;
}
