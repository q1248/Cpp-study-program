#pragma once
#include<QStandardItemModel>
#include<QItemSelection>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void init_icon();
    void init();
    QStandardItemModel *model;
    QItemSelection *select;

};
