/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionExit;
    QAction *actionHelp;
    QWidget *centralwidget;
    QListWidget *file_list;
    QLineEdit *file_edit;
    QLabel *label;
    QListWidget *win_list;
    QMenuBar *menubar;
    QMenu *menuFunction;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(920, 1138);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/image/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/image/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        file_list = new QListWidget(centralwidget);
        file_list->setObjectName(QStringLiteral("file_list"));
        file_list->setGeometry(QRect(540, 50, 371, 1001));
        file_edit = new QLineEdit(centralwidget);
        file_edit->setObjectName(QStringLiteral("file_edit"));
        file_edit->setGeometry(QRect(540, 20, 371, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(540, 0, 341, 21));
        win_list = new QListWidget(centralwidget);
        win_list->setObjectName(QStringLiteral("win_list"));
        win_list->setGeometry(QRect(10, 0, 521, 1051));
        win_list->setFocusPolicy(Qt::WheelFocus);
        win_list->setResizeMode(QListView::Adjust);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 920, 31));
        menuFunction = new QMenu(menubar);
        menuFunction->setObjectName(QStringLiteral("menuFunction"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(win_list, file_edit);
        QWidget::setTabOrder(file_edit, file_list);

        menubar->addAction(menuFunction->menuAction());
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionExit);
        toolBar->addAction(actionHelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdd->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\345\275\225\345\210\266\347\252\227\345\217\243\n"
"Crtl+n", 0));
#endif // QT_NO_TOOLTIP
        actionAdd->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\350\275\257\344\273\266", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\350\275\257\344\273\266\n"
"Ctrl+j", 0));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
#ifndef QT_NO_TOOLTIP
        actionHelp->setToolTip(QApplication::translate("MainWindow", "\344\275\277\347\224\250\346\214\207\345\215\227", 0));
#endif // QT_NO_TOOLTIP
        actionHelp->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        file_edit->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\345\255\230\346\224\276\350\267\257\345\276\204(\350\257\267\345\205\210\350\256\276\347\275\256\345\245\275\345\255\230\346\224\276\350\267\257\345\276\204\345\206\215\346\267\273\345\212\240\345\275\225\345\210\266\347\252\227\345\217\243):", 0));
        menuFunction->setTitle(QApplication::translate("MainWindow", "File", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
