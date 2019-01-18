
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <QListWidget>
#include <QListWidgetItem>
#include <littlewin.h>
#include <unistd.h>
#include <QTime>
#include <QtGui>
#include <QMouseEvent>
#include <QMenu>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_actionExit_triggered();

    void on_actionAdd_triggered();

    void window_close(int);

    void closeEvent(QCloseEvent *event);

    void FileShow();

    void showFileList(QFileInfoList list);

    void DirShow(QListWidgetItem *Item);

    void mousePressEvent(QMouseEvent *event);

    void timeoutslot();

    void on_actionHelp_triggered();

private:
    Ui::MainWindow *ui;

    int little_win_id;
    std::map<int,QListWidgetItem*> win_item_list;


//    QFileInfoList list;

};

#endif // MAINWINDOW_H
