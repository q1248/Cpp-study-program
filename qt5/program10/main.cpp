//这个项目是关于使用tab box , tool box , listwidget,toolbutton相关内容组合起来的东西
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
