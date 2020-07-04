#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "vectors.h"
#include "number.h"


Vector3D v1,v2;


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


void MainWindow::on_set_v1_clicked()
{
    v1.set_x(ui->v1_x->text().toInt());
    v1.set_y(ui->v1_y->text().toInt());
    v1.set_z(ui->v1_z->text().toInt());
    Number<Vector3D> temp1(v1);
    QString temp= QString::fromStdString(num_to_str(temp1));
    ui->label_v1->setText(temp);
}

void MainWindow::on_set_v2_clicked()
{
    v2.set_x(ui->v2_x->text().toInt());
    v2.set_y(ui->v2_y->text().toInt());
    v2.set_z(ui->v2_z->text().toInt());
    Number<Vector3D> temp2(v2);
    QString temp= QString::fromStdString(num_to_str(temp2));
    ui->label_v2->setText(temp);
}

void MainWindow::on_button_plus_clicked()
{
    Number<Vector3D> temp1(v1);
    Number<Vector3D> temp2(v2);
    Number<Vector3D> res;
    res = v1 + v2;
    QString temp= QString::fromStdString(num_to_str(res));
    ui->label_res->setText(temp);
}

void MainWindow::on_button_minus_clicked()
{
    Number<Vector3D> temp1(v1);
    Number<Vector3D> temp2(v2);
    Number<Vector3D> res;
    res = v1 - v2;
    QString temp= QString::fromStdString(num_to_str(res));
    ui->label_res->setText(temp);
}

void MainWindow::on_button_mult_clicked()
{
    Number<Vector3D> temp1(v1);
    Number<Vector3D> temp2(v2);
    Number<Vector3D> res;
    res = v1 ^ v2;
    QString temp= QString::fromStdString(num_to_str(res));
    ui->label_res->setText(temp);
}

void MainWindow::on_button_big_clicked()
{
    Number<Vector3D> temp1(v1);
    Number<Vector3D> temp2(v2);
    if( temp1 > temp2)
        ui->label_res->setText("true");
    else
        ui->label_res->setText("false");
}

void MainWindow::on_botton_sm_clicked()
{
    Number<Vector3D> temp1(v1);
    Number<Vector3D> temp2(v2);
    if( temp1 < temp2)
        ui->label_res->setText("true");
    else
        ui->label_res->setText("false");
}

void MainWindow::on_button_eqv_clicked()
{
    Number<Vector3D> temp1(v1);
    Number<Vector3D> temp2(v2);
    if( temp1 == temp2)
        ui->label_res->setText("true");
    else
        ui->label_res->setText("false");
}
