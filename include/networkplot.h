#ifndef NETWORKPLOT_H
#define NETWORKPLOT_H

#include <QMainWindow>
#include <QVector>
#include <QDebug>
#include "qcustomplot.h"
#include "serverthread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class NetworkPlot; }
QT_END_NAMESPACE

class NetworkPlot : public QMainWindow
{
    Q_OBJECT

public:
    NetworkPlot(QWidget *parent = nullptr);
    ~NetworkPlot();

private slots:
    void on_plotButton_clicked();

    void on_clearButton_clicked();

    void on_lineStyleComboBox_currentIndexChanged(int index);

    void on_plotTypeComboBox_currentIndexChanged(int index);

private:
    Ui::NetworkPlot *ui;

public slots:
    void parseData(QByteArray);
};
#endif // NETWORKPLOT_H
