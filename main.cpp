#include <QApplication>
#include "mainwindow.h"
#include <QTextCodec>   //中文支持

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());    //设置编码
    MainWindow w;
    w.show();

    return a.exec();
}
