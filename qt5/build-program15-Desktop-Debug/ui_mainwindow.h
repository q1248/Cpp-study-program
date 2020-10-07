/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *open_file;
    QAction *save_file;
    QAction *display;
    QAction *add_row;
    QAction *insert_row;
    QAction *delete_row;
    QAction *centre;
    QAction *left;
    QAction *right;
    QAction *blod;
    QWidget *centralwidget;
    QLabel *label_4;
    QLabel *label_5;
    QSplitter *splitter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSplitter *splitter_2;
    QTableView *tableView;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        open_file = new QAction(MainWindow);
        open_file->setObjectName(QString::fromUtf8("open_file"));
        open_file->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_file->setIcon(icon);
        open_file->setIconVisibleInMenu(true);
        open_file->setPriority(QAction::NormalPriority);
        save_file = new QAction(MainWindow);
        save_file->setObjectName(QString::fromUtf8("save_file"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pic/\345\217\246\345\255\230\344\270\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_file->setIcon(icon1);
        display = new QAction(MainWindow);
        display->setObjectName(QString::fromUtf8("display"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pic/\345\261\225\347\244\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        display->setIcon(icon2);
        add_row = new QAction(MainWindow);
        add_row->setObjectName(QString::fromUtf8("add_row"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pic/\346\267\273\345\212\240\350\241\214.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_row->setIcon(icon3);
        insert_row = new QAction(MainWindow);
        insert_row->setObjectName(QString::fromUtf8("insert_row"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pic/\346\217\222\345\205\245\350\241\214.png"), QSize(), QIcon::Normal, QIcon::Off);
        insert_row->setIcon(icon4);
        delete_row = new QAction(MainWindow);
        delete_row->setObjectName(QString::fromUtf8("delete_row"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pic/\345\210\240\351\231\244\350\241\214.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_row->setIcon(icon5);
        centre = new QAction(MainWindow);
        centre->setObjectName(QString::fromUtf8("centre"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/pic/\345\261\205\344\270\255.png"), QSize(), QIcon::Normal, QIcon::Off);
        centre->setIcon(icon6);
        left = new QAction(MainWindow);
        left->setObjectName(QString::fromUtf8("left"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/pic/\345\267\246\345\257\271\351\275\220.png"), QSize(), QIcon::Normal, QIcon::Off);
        left->setIcon(icon7);
        right = new QAction(MainWindow);
        right->setObjectName(QString::fromUtf8("right"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/pic/\345\217\263\345\257\271\351\275\220.png"), QSize(), QIcon::Normal, QIcon::Off);
        right->setIcon(icon8);
        blod = new QAction(MainWindow);
        blod->setObjectName(QString::fromUtf8("blod"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/pic/blod.png"), QSize(), QIcon::Normal, QIcon::Off);
        blod->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 20, 131, 23));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 20, 141, 23));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(60, 470, 411, 23));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter->addWidget(label_3);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(10, 50, 781, 481));
        splitter_2->setOrientation(Qt::Horizontal);
        tableView = new QTableView(splitter_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        splitter_2->addWidget(tableView);
        plainTextEdit = new QPlainTextEdit(splitter_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        splitter_2->addWidget(plainTextEdit);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(15, 15));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(open_file);
        toolBar->addAction(save_file);
        toolBar->addAction(display);
        toolBar->addSeparator();
        toolBar->addAction(add_row);
        toolBar->addAction(insert_row);
        toolBar->addAction(delete_row);
        toolBar->addSeparator();
        toolBar->addAction(centre);
        toolBar->addAction(left);
        toolBar->addAction(right);
        toolBar->addAction(blod);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        open_file->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        save_file->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\346\226\207\344\273\266", nullptr));
        display->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\236\213\346\225\260\346\215\256\351\242\204\350\247\210", nullptr));
        add_row->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
        insert_row->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
        delete_row->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", nullptr));
        centre->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));
        left->setText(QCoreApplication::translate("MainWindow", "\345\261\205\345\267\246", nullptr));
        right->setText(QCoreApplication::translate("MainWindow", "\345\261\205\345\217\263", nullptr));
        blod->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TableView", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "QPlainTextView", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
