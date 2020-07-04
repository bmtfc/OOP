#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QSplashScreen *splash = new QSplashScreen ;

    splash->setPixmap(QPixmap(":/new/lol.png"));

    splash->show();

    QTimer::singleShot(3000,splash,SLOT(close()));
    QTimer::singleShot(3000,&w,SLOT(show()));

    return a.exec();
}
