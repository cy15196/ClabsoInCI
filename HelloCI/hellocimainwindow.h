#ifndef HELLOCIMAINWINDOW_H
#define HELLOCIMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class HelloCIMainWindow;
}

class HelloCIMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HelloCIMainWindow(QWidget *parent = nullptr);
    ~HelloCIMainWindow();

private:
    Ui::HelloCIMainWindow *ui;
};

#endif // HELLOCIMAINWINDOW_H
