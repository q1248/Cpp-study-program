#pragma once

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

private slots:
    void on_init_list_triggered();

    void on_clean_list_triggered();

    void on_delete_current_triggered();

    void on_add_item_triggered();

    void on_toolButton_7_triggered(QAction *arg1);

    void on_clean_select_triggered();

    void on_select_all_triggered();

    void on_select_un_triggered();

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;
    void connect_tool_btn();
};
