#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vectors.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

Vector3D vector_1, vector_2, vector_add, vector_sub, vector_vect;

int on_const_choose = 1, lenght_choose = 1;

int Vector3D::how_many = 0;


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
    vector_1.set_x(ui->v1_x->text().toDouble());
    vector_1.set_y(ui->v1_y->text().toDouble());
    vector_1.set_z(ui->v1_z->text().toDouble());
    char coord[100];
    sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_1.get_x(),vector_1.get_y(),vector_1.get_z());
    ui->label_v1->setText(coord);
}

void MainWindow::on_set_v2_clicked()
{
    vector_2.set_x(ui->v2_x->text().toDouble());
    vector_2.set_y(ui->v2_y->text().toDouble());
    vector_2.set_z(ui->v2_z->text().toDouble());
    char coord[100];
    sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_2.get_x(),vector_2.get_y(),vector_2.get_z());
    ui->label_v2->setText(coord);
}


void MainWindow::on_add_clicked()
{
    vector_add = vector_1 + vector_2 ;
    char res[100];
    sprintf(res,"%5.2lf, %5.2lf, %5.2lf",vector_add.get_x(),vector_add.get_y(),vector_add.get_z());
    ui->add_res->setText(res);
}

void MainWindow::on_sub_clicked()
{
    vector_sub = vector_1 - vector_2;
    char res[100];
    sprintf(res,"%5.2lf, %5.2lf, %5.2lf",vector_sub.get_x(),vector_sub.get_y(),vector_sub.get_z());
    ui->sub_res->setText(res);
}

void MainWindow::on_set_as_v1_1_clicked()
{
    vector_1.set_x(vector_add.get_x());
    vector_1.set_y(vector_add.get_y());
    vector_1.set_z(vector_add.get_z());
    char coord[100];
    sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_1.get_x(),vector_1.get_y(),vector_1.get_z());
    ui->label_v1->setText(coord);

}

void MainWindow::on_set_as_v1_2_clicked()
{
    vector_1.set_x(vector_sub.get_x());
    vector_1.set_y(vector_sub.get_y());
    vector_1.set_z(vector_sub.get_z());
    char coord[100];
    sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_1.get_x(),vector_1.get_y(),vector_1.get_z());
    ui->label_v1->setText(coord);
}

void MainWindow::on_set_as_v2_1_clicked()
{
    vector_2.set_x(vector_add.get_x());
    vector_2.set_y(vector_add.get_y());
    vector_2.set_z(vector_add.get_z());
    char coord[100];
    sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_2.get_x(),vector_2.get_y(),vector_2.get_z());
    ui->label_v2->setText(coord);
}

void MainWindow::on_set_as_v2_2_clicked()
{
    vector_2.set_x(vector_sub.get_x());
    vector_2.set_y(vector_sub.get_y());
    vector_2.set_z(vector_sub.get_z());
    char coord[100];
    sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_2.get_x(),vector_2.get_y(),vector_2.get_z());
    ui->label_v2->setText(coord);
}

void MainWindow::on_scalyar_clicked()
{
    double dres = vector_1 * vector_2;
    char res[100];
    sprintf(res,"%lf",dres);
    ui->scalyar_res->setText(res);
}

void MainWindow::on_choose_v1_1_clicked()
{
    ui->choose_v1_1->setChecked(true);
    ui->choose_v2_1->setChecked(false);
    on_const_choose = 1;
}

void MainWindow::on_choose_v2_1_clicked()
{
    ui->choose_v1_1->setChecked(false);
    ui->choose_v2_1->setChecked(true);
    on_const_choose = 2;
}

void MainWindow::on_on_const_clicked()
{
    if(on_const_choose == 1)
    {
        vector_1 = vector_1*(ui->const_value->text().toDouble());
        char coord[100];
        sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_1.get_x(),vector_1.get_y(),vector_1.get_z());
        ui->label_v1->setText(coord);
    }
    else
    {
        vector_2 = vector_2*(ui->const_value->text().toDouble());
        char coord[100];
        sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_2.get_x(),vector_2.get_y(),vector_2.get_z());
        ui->label_v2->setText(coord);
    }
}

void MainWindow::on_choose_v1_2_clicked()
{
    ui->choose_v1_2->setChecked(true);
    ui->choose_v2_2->setChecked(false);
    lenght_choose = 1;
}

void MainWindow::on_choose_v2_2_clicked()
{
    ui->choose_v1_2->setChecked(false);
    ui->choose_v2_2->setChecked(true);
    lenght_choose = 2;
}

void MainWindow::on_lenght_clicked()
{
    double dres;
    if( lenght_choose == 1)
         dres = vector_1.l();
    else
         dres = vector_2.l();

    char res[100];
    sprintf(res,"%lf",dres);
    ui->lenght_res->setText(res);

}

void MainWindow::on_eqv_clicked()
{
    int i = vector_1.eqv(vector_2);
    if(i == 0)
        ui->eqv_res->setText("false");
    else
        ui->eqv_res->setText("true");
}

void MainWindow::on_eqv_l_clicked()
{
    int i = (vector_1 == vector_2);
    if(i == 0)
        ui->eqv_l_res->setText("false");
    else
        ui->eqv_l_res->setText("true");
}

void MainWindow::on_vect_clicked()
{
    vector_vect = vector_1^vector_2 ;
    char res[100];
    sprintf(res,"%5.2lf, %5.2lf, %5.2lf",vector_vect.get_x(),vector_vect.get_y(),vector_vect.get_z());
    ui->vect_res->setText(res);
}


void MainWindow::on_set_as_v1_3_clicked()
{
    vector_1.set_x(vector_vect.get_x());
    vector_1.set_y(vector_vect.get_y());
    vector_1.set_z(vector_vect.get_z());
    char coord[100];
    sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_1.get_x(),vector_1.get_y(),vector_1.get_z());
    ui->label_v1->setText(coord);
}

void MainWindow::on_set_as_v2_3_clicked()
{
    vector_2.set_x(vector_vect.get_x());
    vector_2.set_y(vector_vect.get_y());
    vector_2.set_z(vector_vect.get_z());
    char coord[100];
    sprintf(coord,"%5.2lf, %5.2lf, %5.2lf",vector_2.get_x(),vector_2.get_y(),vector_2.get_z());
    ui->label_v2->setText(coord);
}

void MainWindow::on_show_how_many_clicked()
{
    int q = Vector3D::get_how_many();
    char str[10];
    sprintf(str,"%d",q);
    ui->res_show_how_many->setText(str);
}

void MainWindow::on_bigger_clicked()
{
    bool q = (vector_1 > vector_2);
    if ( q )
         ui->res_is_bs->setText("true");
    else
         ui->res_is_bs->setText("false");
}

void MainWindow::on_smaller_clicked()
{
    bool q = (vector_1 < vector_2);
    if ( q )
         ui->res_is_bs->setText("true");
    else
         ui->res_is_bs->setText("false");
}
