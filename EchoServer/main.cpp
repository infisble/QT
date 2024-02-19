#include <QCoreApplication>
#include "mytcpserver.h"
#include"mainwindow.h"
#include<QApplication>
int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
        MainWindow  k;
        k.show();


        MyTcpServer server;
        return a.exec();
}

