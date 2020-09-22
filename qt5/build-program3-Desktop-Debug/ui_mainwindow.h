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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openfile;
    QAction *newfile;
    QAction *exit;
    QAction *cut;
    QAction *copy;
    QAction *pastle;
    QAction *clean;
    QAction *blod;
    QAction *Ltail;
    QAction *underline;
    QAction *showLable;
    QAction *fontsize;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        openfile = new QAction(MainWindow);
        openfile->setObjectName(QString::fromUtf8("openfile"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Downloads/\346\211\223\345\274\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        openfile->setIcon(icon1);
        newfile = new QAction(MainWindow);
        newfile->setObjectName(QString::fromUtf8("newfile"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Downloads/\346\226\260\345\273\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        newfile->setIcon(icon2);
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Downloads/\351\200\200\345\207\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon3);
        cut = new QAction(MainWindow);
        cut->setObjectName(QString::fromUtf8("cut"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Downloads/\345\211\252\345\210\207.png"), QSize(), QIcon::Normal, QIcon::Off);
        cut->setIcon(icon4);
        copy = new QAction(MainWindow);
        copy->setObjectName(QString::fromUtf8("copy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Downloads/\345\244\215\345\210\266.png"), QSize(), QIcon::Normal, QIcon::Off);
        copy->setIcon(icon5);
        pastle = new QAction(MainWindow);
        pastle->setObjectName(QString::fromUtf8("pastle"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Downloads/\347\262\230\350\264\264.png"), QSize(), QIcon::Normal, QIcon::Off);
        pastle->setIcon(icon6);
        clean = new QAction(MainWindow);
        clean->setObjectName(QString::fromUtf8("clean"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Downloads/\346\270\205\347\251\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        clean->setIcon(icon7);
        blod = new QAction(MainWindow);
        blod->setObjectName(QString::fromUtf8("blod"));
        blod->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Downloads/\345\212\240\347\262\227.png"), QSize(), QIcon::Normal, QIcon::Off);
        blod->setIcon(icon8);
        Ltail = new QAction(MainWindow);
        Ltail->setObjectName(QString::fromUtf8("Ltail"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Downloads/\346\226\234\344\275\223.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ltail->setIcon(icon9);
        underline = new QAction(MainWindow);
        underline->setObjectName(QString::fromUtf8("underline"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Downloads/\344\270\213\345\210\222\347\272\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        underline->setIcon(icon10);
        showLable = new QAction(MainWindow);
        showLable->setObjectName(QString::fromUtf8("showLable"));
        fontsize = new QAction(MainWindow);
        fontsize->setObjectName(QString::fromUtf8("fontsize"));
        fontsize->setCheckable(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(70, 40, 481, 341));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setAutoFillBackground(true);
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(newfile);
        menu->addSeparator();
        menu->addAction(openfile);
        menu->addSeparator();
        menu->addAction(exit);
        menu->addSeparator();
        menu_2->addAction(cut);
        menu_2->addSeparator();
        menu_2->addAction(copy);
        menu_2->addSeparator();
        menu_2->addAction(pastle);
        menu_2->addSeparator();
        menu_2->addAction(clean);
        menu_2->addSeparator();
        menu_3->addAction(blod);
        menu_3->addSeparator();
        menu_3->addAction(underline);
        menu_3->addSeparator();
        menu_3->addAction(Ltail);
        menu_3->addSeparator();
        menu_3->addAction(showLable);
        menu_3->addSeparator();
        toolBar->addAction(newfile);
        toolBar->addAction(openfile);
        toolBar->addAction(clean);
        toolBar->addSeparator();
        toolBar->addAction(cut);
        toolBar->addAction(copy);
        toolBar->addAction(pastle);
        toolBar->addSeparator();
        toolBar->addAction(blod);
        toolBar->addAction(Ltail);
        toolBar->addAction(underline);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(clean, SIGNAL(triggered()), textEdit, SLOT(clear()));
        QObject::connect(exit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(cut, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(copy, SIGNAL(triggered()), textEdit, SLOT(copy()));
        QObject::connect(pastle, SIGNAL(triggered()), textEdit, SLOT(paste()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openfile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200...", nullptr));
#if QT_CONFIG(tooltip)
        openfile->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        openfile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        newfile->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(shortcut)
        newfile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(shortcut)
        exit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(shortcut)
        cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(shortcut)
        copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        pastle->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(shortcut)
        pastle->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        clean->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        blod->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
#if QT_CONFIG(shortcut)
        blod->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        Ltail->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(shortcut)
        Ltail->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        underline->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(shortcut)
        underline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        showLable->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", nullptr));
        fontsize->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\345\260\261\346\230\257\346\226\207\346\234\254!</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This is the text!</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
