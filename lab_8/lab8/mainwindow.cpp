#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "class.h"



printed_production temp;
magazine temp_magazine;
book temp_book;

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


void MainWindow::on_print_class_names_clicked()
{
    ui->class1_print_name->setText(temp.print());
    ui->class2_print_name->setText(temp_magazine.print());
    ui->class3_print_name->setText(temp_book.print());
}

void MainWindow::on_magazine_set_clicked()
{
    QString temp = ui->magazine_name->text();
    std::string temp1 = temp.toStdString();
    char temp2[100];
    std::strcpy(temp2,temp1.c_str());
    temp_magazine.set_name(temp2);
    temp_magazine.set_number_of_pages(ui->magazine_numbe_of_pages->text().toInt());
    temp_magazine.set_size_of_page(ui->magazine_size_of_page->text().toDouble());
    temp_magazine.set_number(ui->magazine_number->text().toInt());
    temp_magazine.set_period(ui->magazine_period->text().toInt());
    ui->class2_name_2->setText(temp_magazine.get_name());
    ui->class2_number_of_pages->setNum(temp_magazine.get_number_of_pages());
    ui->class2_size_of_page->setNum(temp_magazine.get_size_of_page());
    ui->class2_number->setNum(temp_magazine.get_number());
    ui->class2_period->setNum(temp_magazine.get_period());
}

void MainWindow::on_class2_calc_clicked()
{
    ui->class2_res->setNum(temp_magazine.paper());
}

void MainWindow::on_book_set_clicked()
{
    QString temp = ui->book_name->text();
    std::string temp1 = temp.toStdString();
    char temp2[100];
    std::strcpy(temp2,temp1.c_str());
    temp_book.set_name(temp2);
    temp_book.set_number_of_pages(ui->book_number_of_pages->text().toInt());
    temp_book.set_size_of_page(ui->book_size_of_page->text().toDouble());
    temp_book.set_number(ui->book_number->text().toInt());
    temp = ui->book_author->text();
    temp1 = temp.toStdString();
    std::strcpy(temp2,temp1.c_str());
    temp_book.set_author(temp2);
    ui->class3_name->setText(temp_book.get_name());
    ui->class3_number_of_pages->setNum(temp_book.get_number_of_pages());
    ui->class3_size_of_page->setNum(temp_book.get_size_of_page());
    ui->class3_number->setNum(temp_book.get_number());
    ui->class3_author->setText(temp_book.get_author());
}

void MainWindow::on_class3_calc_clicked()
{
    ui->class3_res->setNum(temp_book.paper());
}
