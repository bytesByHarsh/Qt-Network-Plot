#ifndef SERVERTHREAD_H
#define SERVERTHREAD_H

#include <QThread>
#include <QObject>
#include "myserver.h"

class ServerThread : public QThread
{
    Q_OBJECT
public:
    ServerThread(QObject *parent=0);
    void run();

signals:
    void newDataRecieved(QByteArray);
};

#endif // SERVERTHREAD_H
