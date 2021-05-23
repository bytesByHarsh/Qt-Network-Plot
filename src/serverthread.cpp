#include "serverthread.h"

ServerThread::ServerThread(QObject *parent)
{

}

void ServerThread::run()
{
    MyServer server;

    server.startServer();

    exec();
}
