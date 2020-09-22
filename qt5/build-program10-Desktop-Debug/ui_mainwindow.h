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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QToolButton *toolButton_5;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QWidget *page_2;
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QRadioButton *radioButton;
    QSplitter *splitter_2;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QWidget *tab_3;
    QWidget *tab_2;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(861, 512);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(0, 0, 201, 471));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 201, 360));
        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 121, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(gridLayoutWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        toolButton_5 = new QToolButton(splitter);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        splitter->addWidget(toolButton_5);
        toolButton_2 = new QToolButton(splitter);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        splitter->addWidget(toolButton_2);
        toolButton = new QToolButton(splitter);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        splitter->addWidget(toolButton);
        toolButton_3 = new QToolButton(splitter);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        splitter->addWidget(toolButton_3);
        toolButton_4 = new QToolButton(splitter);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        splitter->addWidget(toolButton_4);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("QListWidge\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 201, 360));
        toolBox->addItem(page_2, QString::fromUtf8("QTreeWidget\346\223\215\344\275\234"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 201, 360));
        toolBox->addItem(page_3, QString::fromUtf8("QTableWidget\346\223\215\344\275\234"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(200, 0, 661, 471));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 240, 256, 192));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 78, 23));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 60, 113, 31));
        radioButton = new QRadioButton(tab);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(360, 70, 127, 29));
        splitter_2 = new QSplitter(tab);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(40, 150, 421, 30));
        splitter_2->setOrientation(Qt::Horizontal);
        toolButton_6 = new QToolButton(splitter_2);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        splitter_2->addWidget(toolButton_6);
        toolButton_7 = new QToolButton(splitter_2);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        splitter_2->addWidget(toolButton_7);
        toolButton_8 = new QToolButton(splitter_2);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        splitter_2->addWidget(toolButton_8);
        toolButton_9 = new QToolButton(splitter_2);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        splitter_2->addWidget(toolButton_9);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 861, 28));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toolButton_5->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\345\210\235\345\247\213\345\214\226", nullptr));
        toolButton_3->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        toolButton_4->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "QListWidge\346\223\215\344\275\234", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "QTreeWidget\346\223\215\344\275\234", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "QTableWidget\346\223\215\344\275\234", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        toolButton_6->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\241\271\347\233\256", nullptr));
        toolButton_7->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\211\200\346\234\211\351\241\271\347\233\256", nullptr));
        toolButton_8->setText(QString());
        toolButton_9->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "QLIstWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "QTreeWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "QTableWidget", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
