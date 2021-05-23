#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QObject>
#include "mythread.h"

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent=0);
    void startServer();

protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // MYSERVER_H
