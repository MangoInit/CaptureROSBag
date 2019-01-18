#ifndef LITTLEWIN_H
#define LITTLEWIN_H

#include <QWidget>
#include <QMainWindow>
#include "ui_mainwindow.h"
#include "QString"
#include "QLineEdit"
#include "QStringList"
#include <QMessageBox>
#include <QProcess>
#include <QDebug>
#include <QDir>
#include <QTableView>
#include <QFileDialog>
#include <QFileInfo>
#include <iostream>
#include <QListWidgetItem>
#include <QTextCodec>
#include <QWidget>
#include <QFileInfoList>
#include <QIcon>
#include <QAction>
#include <QContextMenuEvent>
#include <QPoint>
#include <QBoxLayout>
#include <QIODevice>
#include <mainwindow.h>
#include <QTime>
#include <QTcpSocket>

namespace Ui {
class LittleWin;
}

class LittleWin : public QWidget
{
    Q_OBJECT
    
public:
    explicit LittleWin(QWidget *parent = 0);
    ~LittleWin();

    QString out_dir;    //录制包的存放地址

//    //双击浏览器中显示的目录进入下一级,或者返回上一级目录
//    void showFileInfoList(QFileInfoList list);

    void set_id(const int& id);

Q_SIGNALS:
    void little_win_exit(int);

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    
    void on_exit_button_clicked(bool checked);

    void on_radioButton_clicked();

    void on_getlog_button_clicked();

    bool copyFileToPath(QString sourceDir ,QString toDir, bool coverFileIfExist);

    bool copyDirectoryFiles(const QString &fromDir, const QString &toDir, bool coverFileIfExist);

    void timeoutslot();
    void timeoutslot2();

    void tcp_connected();
    void tcp_disconnected();

private:

    Ui::LittleWin *uii;

    QProcess *po;
    QProcess *ko;
    QProcess *ro;

//    QFileInfoList list;
    int window_id_;
    QString id_str;

    QString ip_str, port_str, node_str;
    QString video_select;
};

#endif // LITTLEWIN_H
