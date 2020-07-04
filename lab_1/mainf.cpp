#include "mainwindow.h"

#include <QApplication>
#include <QPoint>
#include <QLabel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QPoint p(879,509); // (0,0) - left top
    w.resize(400,200);
    w.move(p);
    return a.exec();
}
