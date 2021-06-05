#include "networkplot.h"
#include "myserver.h"
#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetworkPlot w;
    MyServer server;
    QObject::connect(&server,SIGNAL(newDataRecieved(QByteArray)),&w,SLOT(parseData(QByteArray)));
    server.startServer();
    w.show();
    return a.exec();
}
