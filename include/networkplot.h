#ifndef NETWORKPLOT_H
#define NETWORKPLOT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class NetworkPlot; }
QT_END_NAMESPACE

class NetworkPlot : public QMainWindow
{
    Q_OBJECT

public:
    NetworkPlot(QWidget *parent = nullptr);
    ~NetworkPlot();

private:
    Ui::NetworkPlot *ui;
};
#endif // NETWORKPLOT_H
