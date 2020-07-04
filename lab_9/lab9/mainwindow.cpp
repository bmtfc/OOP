#include "mainwindow.h"
#include "ui_mainwindow.h"

book temp1;
magazine temp2;
authorial_magazine temp3;

printed_production *arr[3]={&temp1, &temp2, &temp3};

auto ptemp1 = dynamic_cast<book*>(arr[0]);
auto ptemp2 = dynamic_cast<magazine*>(arr[1]);
auto ptemp3 = dynamic_cast<authorial_magazine*>(arr[2]);


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


void MainWindow::on_book_set_clicked()
{
    ptemp1->set_name(ui->book_name->toPlainText().toStdString());
    ptemp1->set_number_of_pages(ui->book_number_of_pages->toPlainText().toInt());
    ptemp1->set_size_of_page(ui->book__size_of_page->toPlainText().toDouble());
    ptemp1->set_number(ui->book_number->toPlainText().toInt());
    ptemp1->set_author(ui->book_author->toPlainText().toStdString());
}

void MainWindow::on_magazine_set_clicked()
{
    ptemp2->set_name(ui->magazine_name->toPlainText().toStdString());
    ptemp2->set_number_of_pages(ui->magazine_number_of_pages->toPlainText().toInt());
    ptemp2->set_size_of_page(ui->magazine_size_of_page->toPlainText().toDouble());
    ptemp2->set_number(ui->magazine_number->toPlainText().toInt());
    ptemp2->set_period(ui->magazine_period->toPlainText().toInt());
}

void MainWindow::on_am_set_clicked()
{
    ptemp3->set_name(ui->am_name->toPlainText().toStdString());
    ptemp3->set_number_of_pages(ui->am_number_of_pages->toPlainText().toInt());
    ptemp3->set_size_of_page(ui->am_size_of_page->toPlainText().toDouble());
    ptemp3->set_number(ui->am_number->toPlainText().toInt());
    ptemp3->set_author(ui->am_author->toPlainText().toStdString());
    ptemp3->set_period(ui->am_period->toPlainText().toInt());
}

void MainWindow::on_book_paper_clicked()
{
    ui->book_res->setNum(ptemp1->paper());
}

void MainWindow::on_magazine_paper_clicked()
{
    ui->magazine_res->setNum(ptemp2->paper());
}

void MainWindow::on_am_paper_clicked()
{
    ui->am_res1->setNum(ptemp3->paper());
}

void MainWindow::on_am_paperd_clicked()
{
    ui->am_res2->setNum(ptemp3->paper(ui->days->text().toInt()));
}
