#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QTextBlock>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    auto *comboBox=ui->comboBox;
    comboBox->clear();

    for(int i=0;i<20;i++) {

        comboBox->addItem(QString::asprintf("第%d个",i));
    }
}

void MainWindow::on_pushButton_2_clicked()
{

    auto *combox=ui->comboBox;
    combox->clear();
}

void MainWindow::on_pushButton_3_clicked()
{
    QMap<QString,int>info;
    info.insert("上海",0323);
    info.insert("天津",0523);
    info.insert("杭州",2352);
    info.insert("山西",9234);
    info.insert("武汉",3523);

    auto *combox=ui->comboBox_2;
    combox->clear();
    foreach (const QString &str,info.keys())
                combox->addItem(str,info.value(str));
}

void MainWindow::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    QString zone=ui->comboBox_2->currentData().toString();
    ui->plainTextEdit->appendPlainText(arg1+":区号"+zone);
}

void MainWindow::on_pushButton_5_clicked()
{

    ui->plainTextEdit->clear();
}

void MainWindow::on_pushButton_4_clicked()
{

    auto *doc=ui->plainTextEdit;

    int count=doc->blockCount();


    //此处书中想通过行之间分隔符进行遍历文本编辑器中的行,但是,这个函数被弃用了,以后再看
    for(int i=1;i<=count;i++)
    {
    }
}
