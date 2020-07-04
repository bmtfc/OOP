#include "mainwindow.h"
#include "ui_mainwindow.h"

int i=0,n=0,k=1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_clicked()
{
    n++;
        if (i<100)
        {
        if (i==10)
            k=2;
        if (i==20)
            k=3;
        if (i==50)
            k=10;
        i += k;
        char str[]={0};
        sprintf(str, "%d", i);
        ui->Label->setText(str);
        }
        else
        if(n<35)
            ui->Label->setText("You won");
        if(n==35)
            ui->Label->setText("Close the app");
        if(n==40)
            ui->Label->close();
}
