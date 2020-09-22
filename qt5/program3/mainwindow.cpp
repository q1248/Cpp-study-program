#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("文本编辑器");
    initUi();
    connect_fun();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUi() {

    lable1 = new QLabel;
    lable1->setMinimumWidth(150);
    lable1->setText("当前文件");
    ui->statusbar->addWidget(lable1);
    auto hh=lable1->property("text");

    progress=new  QProgressBar;
    progress->setMaximum(50);
    progress->setMinimum(5);
    progress->setMaximumWidth(200);
    progress->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(progress);

    spin=new QSpinBox;
    spin->setMinimum(5);
    spin->setMaximum(50);
    spin->setValue(ui->textEdit->font().pointSize());
    spin->setMinimumWidth(50);
    ui->toolBar->addWidget(new QLabel("字体大小"));
    ui->toolBar->addWidget(spin);

    ui->toolBar->addSeparator();
    ui->toolBar->addWidget(new QLabel("字体"));
    qfontBox=new QFontComboBox;
    qfontBox->setMinimumWidth(150);
    ui->toolBar->addWidget(qfontBox);
    setCentralWidget(ui->textEdit);


}

void  MainWindow::font_sizez_change(int font_size){

    QTextCharFormat fmt;
    fmt.setFontPointSize(font_size);
    ui->textEdit->mergeCurrentCharFormat(fmt);
    progress->setValue(font_size);
}
void MainWindow::font_choose(const QString &agr1){

    QTextCharFormat fmt;
    fmt.setFontFamily(agr1);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}

void MainWindow::connect_fun(){

    connect(spin,SIGNAL(valueChanged(int)),this,SLOT(font_sizez_change(int)));
    connect(qfontBox,SIGNAL(currentIndexChanged(const QString &)),this,SLOT(font_choose(const QString &)) );
}


void MainWindow::on_blod_triggered(bool checked)
{

     QTextCharFormat fmt;
     fmt=ui->textEdit->currentCharFormat();
    if(checked==true)
    {
       fmt.setFontWeight(QFont::Bold);
    }
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit->mergeCurrentCharFormat(fmt);

}

void MainWindow::on_Ltail_triggered(bool checked)
{

     QTextCharFormat fmt;
     fmt=ui->textEdit->currentCharFormat();
    if(checked==true)
    {
    }
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}
