//这个界面啊是进制转换和总商品价格计算的那个
//这是关于所有组件学习的第一部分
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
