#include "networkplot.h"
#include "ui_networkplot.h"

NetworkPlot::NetworkPlot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NetworkPlot)
{
    ui->setupUi(this);
}

NetworkPlot::~NetworkPlot()
{
    delete ui;
}

