//这个项目是利用ui的可视化进行设计
//实现那个文本的颜色变化 加粗 斜体
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
