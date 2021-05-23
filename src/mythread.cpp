#include "../include/mythread.h"

MyThread::MyThread(qintptr ID, QObject *parent)
{
    this->socketDescriptor = ID;
}

void MyThread::run(){
    qDebug()<<"Thread starting";

    socket = new QTcpSocket();

    if(!socket->setSocketDescriptor(this->socketDescriptor)){
        emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

    qDebug()<< socketDescriptor<< "Client Connected";

    exec();
}

void MyThread::readyRead()
{
    QByteArray Data = socket->readAll();

    qDebug()<<socketDescriptor <<" Data in:"<< Data;

}

void MyThread::disconnected()
{
    qDebug()<< socketDescriptor << "Disconnected";

    socket->deleteLater();
    exit(0);
}
