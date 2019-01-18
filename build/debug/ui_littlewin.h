/********************************************************************************
** Form generated from reading UI file 'littlewin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LITTLEWIN_H
#define UI_LITTLEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LittleWin
{
public:
    QLabel *label_2;
    QPushButton *exit_button;
    QLineEdit *lineEdit_Port;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit_Node;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit_IP;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_5;
    QRadioButton *radioButton;
    QFrame *line;
    QPushButton *getlog_button;

    void setupUi(QWidget *LittleWin)
    {
        if (LittleWin->objectName().isEmpty())
            LittleWin->setObjectName(QStringLiteral("LittleWin"));
        LittleWin->resize(515, 250);
        label_2 = new QLabel(LittleWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 81, 21));
        exit_button = new QPushButton(LittleWin);
        exit_button->setObjectName(QStringLiteral("exit_button"));
        exit_button->setGeometry(QRect(390, 90, 101, 31));
        lineEdit_Port = new QLineEdit(LittleWin);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(110, 45, 151, 24));
        textBrowser = new QTextBrowser(LittleWin);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 130, 491, 121));
        lineEdit_Node = new QLineEdit(LittleWin);
        lineEdit_Node->setObjectName(QStringLiteral("lineEdit_Node"));
        lineEdit_Node->setGeometry(QRect(110, 75, 151, 24));
        pushButton_2 = new QPushButton(LittleWin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 45, 80, 25));
        label_3 = new QLabel(LittleWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(17, 100, 51, 21));
        lineEdit_IP = new QLineEdit(LittleWin);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(110, 15, 151, 24));
        pushButton_3 = new QPushButton(LittleWin);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 75, 80, 25));
        label = new QLabel(LittleWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 15, 91, 31));
        pushButton = new QPushButton(LittleWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 15, 80, 25));
        label_5 = new QLabel(LittleWin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 70, 81, 31));
        radioButton = new QRadioButton(LittleWin);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setEnabled(true);
        radioButton->setGeometry(QRect(390, 20, 131, 21));
        radioButton->setCheckable(true);
        radioButton->setChecked(false);
        line = new QFrame(LittleWin);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 0, 771, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        getlog_button = new QPushButton(LittleWin);
        getlog_button->setObjectName(QStringLiteral("getlog_button"));
        getlog_button->setEnabled(true);
        getlog_button->setGeometry(QRect(390, 50, 99, 31));
        getlog_button->setMouseTracking(false);
        QWidget::setTabOrder(lineEdit_IP, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, getlog_button);
        QWidget::setTabOrder(getlog_button, lineEdit_Port);
        QWidget::setTabOrder(lineEdit_Port, lineEdit_Node);
        QWidget::setTabOrder(lineEdit_Node, radioButton);
        QWidget::setTabOrder(radioButton, textBrowser);
        QWidget::setTabOrder(textBrowser, exit_button);

        retranslateUi(LittleWin);

        QMetaObject::connectSlotsByName(LittleWin);
    } // setupUi

    void retranslateUi(QWidget *LittleWin)
    {
        LittleWin->setWindowTitle(QApplication::translate("LittleWin", "Form", 0));
        label_2->setText(QApplication::translate("LittleWin", "\346\234\272\345\231\250\344\272\272\347\253\257\345\217\243:", 0));
        exit_button->setText(QApplication::translate("LittleWin", "\351\200\200\345\207\272", 0));
        lineEdit_Port->setText(QApplication::translate("LittleWin", "11311", 0));
        lineEdit_Node->setText(QApplication::translate("LittleWin", "name0", 0));
        pushButton_2->setText(QApplication::translate("LittleWin", "\345\275\225\345\210\266", 0));
        label_3->setText(QApplication::translate("LittleWin", "\350\276\223\345\207\272:", 0));
        lineEdit_IP->setText(QApplication::translate("LittleWin", "192.168.31.", 0));
        pushButton_3->setText(QApplication::translate("LittleWin", "\347\273\223\346\235\237", 0));
        label->setText(QApplication::translate("LittleWin", "\346\234\272\345\231\250\344\272\272 IP:", 0));
        pushButton->setText(QApplication::translate("LittleWin", "\345\212\240\350\275\275", 0));
        label_5->setText(QApplication::translate("LittleWin", "\345\275\225\345\210\266\350\212\202\347\202\271\345\220\215:", 0));
        radioButton->setText(QApplication::translate("LittleWin", "\350\247\206\351\242\221\345\275\225\345\210\266", 0));
        getlog_button->setText(QApplication::translate("LittleWin", "\350\216\267\345\217\226\346\227\245\345\277\227", 0));
    } // retranslateUi

};

namespace Ui {
    class LittleWin: public Ui_LittleWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LITTLEWIN_H
