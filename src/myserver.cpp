#include "../include/myserver.h"

MyServer::MyServer(QObject *parent) :
    QTcpServer(parent)
{

}

void MyServer::startServer()
{
    int port = 1234;

    if(!this->listen(QHostAddress::Any,port)){
        qDebug() << "Could not start a server";

    }
    else{
        qDebug() << " Listening to port"<<port<<"...";
    }
}

void MyServer::incomingConnection(qintptr socketDescriptor)
{
    qDebug() << socketDescriptor << "Connecting..";

    MyThread *thread = new MyThread(socketDescriptor,this);

    connect(thread,SIGNAL(finished()),thread,SLOT(deleteLater()));

    thread->start();
}
