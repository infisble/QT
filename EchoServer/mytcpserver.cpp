#include "mytcpserver.h"
#include "global.h"
#include <QDebug>

#include <QCoreApplication>

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{
    mTcpServer = new QTcpServer(this);

    connect(mTcpServer, &QTcpServer::newConnection, this, &MyTcpServer::slotNewConnection);

    if(!mTcpServer->listen(QHostAddress::Any, 6000)){
        qDebug() << "server is not started";
    } else {
        qDebug() << "server is started";
    }

}

void MyTcpServer::slotNewConnection()
{
    mTcpSocket = mTcpServer->nextPendingConnection();
    init1 = true;

    mTcpSocket->write("123");

    connect(mTcpSocket, &QTcpSocket::readyRead, this, &MyTcpServer::slotServerRead);
    connect(mTcpSocket, &QTcpSocket::disconnected, this, &MyTcpServer::slotClientDisconnected);
}

void MyTcpServer::slotServerRead()
{
    while(mTcpSocket->bytesAvailable()>0)
    {

        QByteArray array = mTcpSocket->readAll();
        //qDebug()<<array;
QString ch = QString(array);
//qDebug() << ch;

            if((QString(array))=="321"){
                k = true;
                init2 = true;
                 if(init1  == true)
                     p = 1;
                    p2 = 1;
                    //qDebug() << "12123123231";
                 }
            else{

                if( ch[0]  == 'p'){
                   // qDebug() << "***" << array.data();

                    //if(p_ch){

                        //if(p1 == 0)
                            //p = 1;
                           // if(p2 == 1) p2 = 0;
                            //else p2 = 1;
                      //  }

                        //p = 1;
                        //p_ch = false;
                    //}
                       //else
                    p =  array[1];

                    //qDebug() <<"p = " << p;
                    p++;
                }else
                hit=QString(array).toInt();
                if(c == false){
                    c = true;
                    p1 = 1;


                }



            }

        //mTcpSocket->write(array);
    }
}

void MyTcpServer::slotClientDisconnected()
{
    mTcpSocket->close();
}

