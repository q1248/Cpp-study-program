//这个本来是用来做QTableWidget的,但是item的操作就那么多,所以就暂时不做了
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
