#include "hellocimainwindow.h"
#include "ui_hellocimainwindow.h"

HelloCIMainWindow::HelloCIMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelloCIMainWindow)
{
    ui->setupUi(this);
}

HelloCIMainWindow::~HelloCIMainWindow()
{
    delete ui;
}
