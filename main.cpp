#include "networkplot.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetworkPlot w;
    w.show();
    return a.exec();
}
