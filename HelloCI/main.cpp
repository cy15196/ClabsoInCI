#include "hellocimainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloCIMainWindow w;
    w.show();

    return a.exec();
}
