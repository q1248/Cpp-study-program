#pragma once

#include <QMainWindow>
#include <QLabel>
#include<QSpinBox>
#include<QFontComboBox>
#include<QProgressBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void font_sizez_change(int font_size);
    void font_choose(const QString &agr1);


    void on_blod_triggered(bool checked);

    void on_Ltail_triggered(bool checked);

private:
    Ui::MainWindow *ui;
    QLabel* lable1;
    QProgressBar *progress;
    QSpinBox *spin;
    QFontComboBox	*qfontBox;
    void initUi();
    void connect_fun();

};
