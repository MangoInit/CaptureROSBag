#include "littlewin.h"
#include "ui_littlewin.h"
#include <QDebug>
#include <QApplication>

LittleWin::LittleWin(QWidget *parent) :
    QWidget(parent),
    uii(new Ui::LittleWin)
{
    uii->setupUi(this);
    uii->pushButton_2->setEnabled(false);
    uii->pushButton_3->setEnabled(false);
    uii->getlog_button->setEnabled(false);
    video_select = "0";


}

LittleWin::~LittleWin()
{
//    qDebug("~LittleWin");
    delete uii;
}

// 加载按钮,参数传入
void LittleWin::on_pushButton_clicked()
{
    ip_str = uii->lineEdit_IP->text();
    port_str = uii->lineEdit_Port->text();
    node_str = uii->lineEdit_Node->text();

    //参数输入不够则退出
    if(ip_str.isEmpty()==true || port_str.isEmpty()==true || node_str.isEmpty()==true || out_dir.isEmpty()==true)
    {
        return;
    }

    QTcpSocket *tcp_socket = new QTcpSocket(this);
    tcp_socket->connectToHost(ip_str,port_str.toUInt());

    connect(tcp_socket, SIGNAL(connected()), this, SLOT(tcp_connected()));
//    connect(tcp_socket, SIGNAL(disconnected()), this, SLOT(tcp_disconnected()));
    connect(tcp_socket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(tcp_disconnected()));  //连接失败或者断开



    uii->textBrowser->insertPlainText("--------------------------------load-------------------------------\n");
    uii->textBrowser->insertPlainText("ROS_MASTER_URI : http://" + ip_str + ":" + port_str + "\n");
    uii->textBrowser->insertPlainText("Node Name : " + node_str + "\n");
    uii->textBrowser->moveCursor(QTextCursor::End);
}


// 录制按钮
void LittleWin::on_pushButton_2_clicked()
{
    uii->pushButton_3->setEnabled(true);
    uii->pushButton_2->setEnabled(false);
    uii->radioButton->setEnabled(false);
    po = new QProcess(this);
    QStringList program;
    program.append("qt_record2.py");
    program.append(ip_str);     //ip地址
    program.append(port_str);   //ip端口
    program.append(node_str);   //录制节点名称
    program.append(out_dir);    //录制包存放地址
    program.append(video_select);//视频录制选项
    program.append(id_str); //录制包数字标号

    po->start("python", program);
    if(!po->waitForStarted())
    {
        qDebug()<<"start faild\n";
        return;
    }
    bool BB = po->waitForFinished(3000);
    qDebug()<<BB;

    QString out_str = po->readAll();
    qDebug()<<out_str;
    uii->textBrowser->insertPlainText(out_str);
    uii->textBrowser->moveCursor(QTextCursor::End);

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeoutslot2()));
    timer->start(100);
}

// 结束按钮
void LittleWin::on_pushButton_3_clicked()
{
    uii->pushButton_3->setEnabled(false);
    uii->pushButton_2->setEnabled(true);
    uii->radioButton->setEnabled(true);
    ko = new QProcess(this);
    QStringList program;
    program<<"qt_kill.py"<<ip_str<<port_str<<node_str;

    ko->start("python", program);
    ko->waitForFinished(1500);

    qDebug()<<program;
    QString out_str = ko->readAllStandardOutput();
    uii->textBrowser->insertPlainText(out_str);
    uii->textBrowser->moveCursor(QTextCursor::End);
    qDebug()<<out_str;
}
// 退出按钮

void LittleWin::on_exit_button_clicked(bool)
{

    close();
    Q_EMIT(little_win_exit(window_id_));
}


// 工具按钮
//void LittleWin::on_toolButton_clicked()
//{
//    QString directory = QDir::toNativeSeparators(QFileDialog::getExistingDirectory(this,tr("Save Path"),QDir::currentPath()));//存放路径
//    if(!directory.isEmpty())
//    {
//        if(ui->comboBox->findText(directory)==-1)
//            ui->comboBox->addItem(directory);
//        ui->comboBox->setCurrentIndex(ui->comboBox->findText(directory));
//    }
//    chakan(directory);
//}


void LittleWin::set_id(const int &id)
{
    window_id_ = id;
    id_str = QString::number(id, 10);
    uii->lineEdit_Node->setText( "name_" + id_str);
}

// 视频录制选项
void LittleWin::on_radioButton_clicked()
{
    if(uii->radioButton->isChecked())
    {
        video_select = "1";
    }
    else
    {
        video_select = "0";
    }
}

// 抓取ROS logs按钮
void LittleWin::on_getlog_button_clicked()
{
    ro = new QProcess(this);
    QStringList program;
    program<<ip_str;
    program<<id_str;
    program<<out_dir;
    ro->start("./get_ros_log.sh",program);

    ro->waitForFinished(500);

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeoutslot()));
    timer->start(100);
}

//拷贝文件：
bool LittleWin::copyFileToPath(QString sourceDir ,QString toDir, bool coverFileIfExist)
{
    toDir.replace("\\","/");
    if (sourceDir == toDir)
    {
        return true;
    }
    if (!QFile::exists(sourceDir))
    {
        return false;
    }
    QDir *createfile = new QDir;
    bool exist = createfile->exists(toDir);
    if(exist)
    {
        if(coverFileIfExist)
        {
            createfile->remove(toDir);
            qDebug("yes");
        }
    }

    if(!QFile::copy(sourceDir, toDir))
    {
        return false;
    }
    return true;
}

//拷贝文件夹：
bool LittleWin::copyDirectoryFiles(const QString &fromDir, const QString &toDir, bool coverFileIfExist)
{
    QDir sourceDir(fromDir);
    QDir targetDir(toDir);
    if(!targetDir.exists())
    {    /**< 如果目标目录不存在，则进行创建 */
        if(!targetDir.mkdir(targetDir.absolutePath()))
            return false;
    }

    QFileInfoList fileInfoList = sourceDir.entryInfoList();
    foreach(QFileInfo fileInfo, fileInfoList)
    {
        if(fileInfo.fileName() == "." || fileInfo.fileName() == "..")
            continue;

        if(fileInfo.isDir())
        {
            /**< 当为目录时，递归的进行copy */
            if(!copyDirectoryFiles(fileInfo.filePath(),
                targetDir.filePath(fileInfo.fileName()),
                coverFileIfExist))
                return false;
        }
        else
        {
            /**< 当允许覆盖操作时，将旧文件进行删除操作 */
            if(coverFileIfExist && targetDir.exists(fileInfo.fileName()))
            {
               targetDir.remove(fileInfo.fileName());
            }

            //进行文件copy
            if(!QFile::copy(fileInfo.filePath(),targetDir.filePath(fileInfo.fileName())))
            {
              return false;
            }
        }
    }
    return true;
}

void LittleWin::timeoutslot()
{
    if(ro->isReadable())
    {
        QString out_str = ro->readAllStandardOutput();
        qDebug()<<out_str;
        uii->textBrowser->insertPlainText(out_str);
        uii->textBrowser->moveCursor(QTextCursor::End);
    }
}

void LittleWin::timeoutslot2()
{
    if(po->isReadable())
    {
        QString out_str = po->readAll();
        qDebug()<<out_str;
        uii->textBrowser->insertPlainText(out_str);
        uii->textBrowser->moveCursor(QTextCursor::End);
    }
}

void LittleWin::tcp_connected()
{
    uii->pushButton_2->setEnabled(true);
    uii->getlog_button->setEnabled(true);

    QString out_str = "连接成功......\n";
    qDebug()<<out_str;
    uii->textBrowser->insertPlainText(out_str);
    uii->textBrowser->moveCursor(QTextCursor::End);
}

void LittleWin::tcp_disconnected()
{
    uii->pushButton_2->setEnabled(false);
    uii->getlog_button->setEnabled(false);

    QString out_str = "连接失败......\n";
    qDebug()<<out_str;
    uii->textBrowser->insertPlainText(out_str);
    uii->textBrowser->moveCursor(QTextCursor::End);
}
