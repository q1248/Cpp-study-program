#pragma once

#include <QMainWindow>
#include<QLabel>
#include<QTreeWidgetItem>

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
    void on_exit_triggered();

    void on_add_dic_triggered();

    void on_action_2_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_del_node_triggered();

private:
    Ui::MainWindow *ui;
    enum treeItemType{itTopItem=1001,itGroupItem,itImageItem};
    enum treeColNum{colItem=0,colItemType=1};

    QLabel *statusShow;
    QPixmap curPixMap;
    float pixRate;

    void init_tree();
    void addFloder(QTreeWidgetItem *parItem,QString dirName);
    QString getFinalFloderName(const QString &full_dir_name);
    void addImagesItem(QTreeWidgetItem *parItem,QString aFileName);
    void displayImage(QTreeWidgetItem *parItem);
    void changeItemCaption(QTreeWidgetItem *item);
};
