#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "functions.h"

stack<float> s1, s2;
queue<float> q1, q2;

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


void MainWindow::on_b1_clicked()
{
    add_n_random_to_stack(s1, 5);
    QString temp = QString::fromStdString(stack_to_str(s1));
    ui->stack1->setText(temp);

}

void MainWindow::on_b2_clicked()
{
    delete_n_top_from_stack(s1,ui->b2_n->text().toInt());
    add_n_random_to_stack(s1,ui->b2_m->text().toInt());
    QString temp = QString::fromStdString(stack_to_str(s1));
    ui->stack1->setText(temp);
}

void MainWindow::on_b3_clicked()
{
    add_n_random_to_stack(s2, 5);
    QString temp = QString::fromStdString(stack_to_str(s2));
    ui->stack2->setText(temp);
}

void MainWindow::on_b4_clicked()
{
    stack_change(s1, s2, ui->b4_pos->text().toInt(),ui->b4_n->text().toInt());
    QString temp1 = QString::fromStdString(stack_to_str(s1));
    ui->stack1->setText(temp1);
    QString temp2 = QString::fromStdString(stack_to_str(s2));
    ui->stack2->setText(temp2);
}

void MainWindow::on_b5_clicked()
{
    sort_stack_by_decrease(s1);
    QString temp = QString::fromStdString(stack_to_str(s1));
    ui->stack1->setText(temp);
}

void MainWindow::on_b6_clicked()
{
    ui->b6_res->setNum(*search_for_el_in_stack(s1));
}

void MainWindow::on_b7_clicked()
{
    from_stack_to_queue(s1,q1);
    QString temp = QString::fromStdString(queue_to_str(q1));
    ui->queue1->setText(temp);
}

void MainWindow::on_b8_clicked()
{
    sort_stack_by_increase(s1);
    sort_queue_by_increase(q1);
    QString temp = QString::fromStdString(queue_to_str(q1));
    ui->queue1->setText(temp);
    QString temp1 = QString::fromStdString(stack_to_str(s1));
    ui->stack1->setText(temp1);
}

void MainWindow::on_b9_clicked()
{
    add_stacks(s1,s2,q2);
    QString temp = QString::fromStdString(queue_to_str(q2));
    ui->queue2->setText(temp);

}

void MainWindow::on_b10_clicked()
{
    ui->b10_res->setNum(number_of_el_in_queue(q2));
}
