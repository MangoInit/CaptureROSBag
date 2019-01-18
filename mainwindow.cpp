#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("机器人数据包录制工具");
    this->setWindowIcon(QIcon(":/new/prefix1/image/turtle.png"));
    QString path_str;
    path_str.append("/home/");
    path_str.append(qgetenv("USER"));//
    path_str.append("/Desktop");
    ui->file_edit->setText(path_str);
    connect(ui->file_edit,SIGNAL(returnPressed()),this,SLOT(FileShow()));
    connect(ui->file_list,SIGNAL(itemDoubleClicked(QListWidgetItem*)),this,SLOT(DirShow(QListWidgetItem*)));

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeoutslot()));
    timer->start(1000);

    little_win_id = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 菜单栏关闭按钮
void MainWindow::on_actionExit_triggered()
{
    close();
}
// 菜单栏新建按钮
void MainWindow::on_actionAdd_triggered()
{

    LittleWin *u = new LittleWin;
    little_win_id++;
    QListWidgetItem *win_item = new QListWidgetItem(ui->win_list);
    win_item_list[little_win_id] = win_item;
    u->set_id(little_win_id);

//    qDebug("win_item_list %d",win_item_list.size());
    connect(u,SIGNAL(little_win_exit(int)),this,SLOT(window_close(int)));
    win_item->setSizeHint(QSize(270,260));
    ui->win_list->setItemWidget(win_item,u);

    //存放地址
    u->out_dir = ui->file_edit->text();
//    u->line_Node->setText("Mango");?


}

void MainWindow::window_close(int id)
{
//    qDebug("window id%d",id);
    if(win_item_list.find(id)==win_item_list.end()) return;
//    qDebug("window_close");
    ui->win_list->removeItemWidget(win_item_list[id]);
    win_item_list[id]->type();

    delete win_item_list[id];
    win_item_list.erase(id);
//    qDebug("win_item_list after remove %d",win_item_list.size());
}



void MainWindow::closeEvent(QCloseEvent *event)
{
    // QMessageBox::StandardButton button;
    int button;
    button = QMessageBox::question(this, tr("退出程序"),
                                QString(tr("确认退出程序?")),
                                QMessageBox::Yes | QMessageBox::No);
    if (button == QMessageBox::No)
    {
       event->ignore();  //忽略退出信号，程序继续运行
    }
    else if (button == QMessageBox::Yes)
    {
     delete ui;
     event->accept();  //接受退出信号，程序退出
    }
}

//---------------------------------文件浏览器----------------------------------------------
// 显示当前目录下所有文件
void MainWindow::FileShow()
{
    QDir path_dir(ui->file_edit->text());
    QStringList path_str_list;
    path_str_list << "*";
    QFileInfoList path_info_list = path_dir.entryInfoList(path_str_list, QDir::AllEntries, QDir::DirsFirst);
    showFileList(path_info_list);

    //存放地址
//    out_dir = ui->file_edit->text();
}

// 双击双击浏览器中显示的目录进入下一级，或者返回上一级目录
void MainWindow::showFileList(QFileInfoList list)
{
    ui->file_list->clear();
    for(int i=0; i<list.count(); i++)
    {
        QFileInfo fileInfo = list.at(i);
        if(fileInfo.isDir())
        {
            QIcon icon(":new/prefix1/image/dir.png");
            QString fileName = fileInfo.fileName();
            QListWidgetItem *fileListWidgetItem = new QListWidgetItem(icon, fileName);
            ui->file_list->addItem(fileListWidgetItem);
        }
        else
        {
            QIcon icon(":new/prefix1/image/file.png");
            QString fileName = fileInfo.fileName();
            QListWidgetItem *fileListWidgetItem = new QListWidgetItem(icon, fileName);
            ui->file_list->addItem(fileListWidgetItem);
        }
    }
}

// 根据用户的选择显示下一级目录下的文件
void MainWindow::DirShow(QListWidgetItem *Item)
{
    QString str = Item->text();//保存下一级目录名
    QDir dir;

    //设置路径为当前目录路径
    dir.setPath(ui->file_edit->text());
    //重新设置路径
    dir.cd(str);
    //显示当前绝对路径
    ui->file_edit->setText(dir.absolutePath());
    //显示当前文件目录下所有文件
    FileShow();
}

//----文件浏览器右键菜单选项（新建文件夹）
void MainWindow::mousePressEvent(QMouseEvent *event)
{
//    if(event->button()==Qt::RightButton)
//    {
//        QDir *temp = new QDir;
//        bool exist = temp->exists("BagFolder");
//        if(exist)
//            QMessageBox::warning(this,tr("创建文件夹"),tr("文件夹已经存在！"));
//        else
//        {
//            bool ok = temp->mkdir("BagFolder");
//            if( ok )
//                QMessageBox::warning(this,tr("创建文件夹"),tr("文件夹创建成功！"));
//        }
//    }
    //要继续保留原有时间
//    LittleWin::mousePressEvent(event);
}



//定时更新文件列表
void MainWindow::timeoutslot()
{
    FileShow();
}

void MainWindow::on_actionHelp_triggered()
{
    QMessageBox::information(NULL,"使用指导","使用步骤：\n"
                                         "１.在右边选择好数据存放地址\n"
                                         "2.按工具栏'+'添加录制窗口\n"
                                         "3.填写机器人IP地址，根据需要选择视频录制，其他默认即可\n"
                                         "4.填写完按'加载'',然后点击'录制'，录制过程右边状态栏显示录制文件\n"
                                         "5.按'结束'按钮完成录制，根据需要点击'获取日志'按钮可获取机器人运行日志");

}
