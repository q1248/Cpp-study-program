#pragma once

#include <QMainWindow>
#include <qpersion.h>

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
    QPersion *man;
    QPersion *woman;

private slots:
    //自定义的槽函数
    //响应person对象的值发生改变时,对text里的内容进行更新
    void repose_age_changed(int age);

    //响应spin进行变化的时候,person里的age发生变化
    void on_spinBox_valueChanged(int arg1);
};
