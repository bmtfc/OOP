#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "operation.h"
#include "QMessageBox"
#include "Chyslo.h"
#include "radix.h"
#include "OutOfRangeException.h"
#include "LetterFormatException.h"
#include "UnsupportedBaseException.h"
#include "NumberFormatException.h"
#include "OverflowException.h"

#include <exception>
#include <ctime>
#include <fstream>
#include <string.h>


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
//----------------------------------------------------------------------

void f_logging(const char * info)
{
    std::ofstream LOG;
    char* filename = "/Users/mac/Desktop/oop/lab_12/lab12/log.txt";
    LOG.open (filename, std::ios_base::out | std::ios_base::app);
    time_t now = time(0);
    char* dt = ctime(&now);
    int len = strlen(dt);
    dt[len-1] = '\0';
    LOG << "[" << dt << "] " << info << std::endl;
    LOG.close();

}

void MainWindow::on_calculate_clicked()
{
    radix radix1, radix2, radix3;
    operation flag=(operation)-1;
    Chyslo result;
    if(ui->plus->isChecked()){
        flag = plus;
    }
    else if(ui->minus->isChecked()){
        flag = minus;
    }
    else if(ui->multiply->isChecked()){
        flag = multiply;
    }
    else if(ui->changeFirst->isChecked()){
        flag = convert1;
    }
    else if(ui->changeSecond->isChecked()){
        flag = convert2;
    }
    else {QMessageBox::warning(this,"Операція введення","Похоже на те, що ви не вибрали операцію.");
        return;
    }
    //
    if(ui->first_double->isChecked()){
        radix1 = binary;
    }
    else if(ui->first_tens->isChecked()){
        radix1 = decimal;
    }
    else if (ui->first_sixteenth->isChecked()){
        radix1 = hex;
    }
    else radix1 = (radix)0;
    //
    if(ui->second_double->isChecked()){
        radix2 = binary;
    }
    else if(ui->second_tens->isChecked()){
        radix2 = decimal;
    }
    else if (ui->second_sixteenth->isChecked()){
        radix2 = hex;
    }
    else radix2 = (radix)0;
    //
    if(ui->result_double->isChecked()){
        radix3 = binary;
    }
    else if(ui->result_tens->isChecked()){
        radix3 = decimal;
    }
    else if (ui->result_sixteenth->isChecked()){
        radix3 = hex;
    }
    else radix3 = (radix)0;
    //
    try {
    switch (flag) {
    case plus:{
        Chyslo chyslo1(ui->first->text().toStdString(),radix1);
        Chyslo chyslo2(ui->second->text().toStdString(),radix2);
        result = chyslo1 + chyslo2;
        break;
    }
    case minus:{
        Chyslo chyslo1(ui->first->text().toStdString(),radix1);
        Chyslo chyslo2(ui->second->text().toStdString(),radix2);
        result = chyslo1 - chyslo2;
        break;
    }
    case multiply:{
        Chyslo chyslo1(ui->first->text().toStdString(),radix1);
        Chyslo chyslo2(ui->second->text().toStdString(),radix2);
        result = chyslo1 * chyslo2;
        break;
    }
    case convert1:{
        Chyslo chyslo1(ui->first->text().toStdString(),radix1);
        result = chyslo1;
        break;
    }
    case convert2:{
        Chyslo chyslo2(ui->second->text().toStdString(),radix2);
        result = chyslo2;
        break;
    }
    }
  ui->result->setText(QString::fromStdString(result.getChyslo(radix3)));
}



    catch(NumberFormatException& a){
        QMessageBox::critical(this,"Помилка вводу","Неправильно введені числа, повторіть ще раз.");
        f_logging("NumberFormatException");
        return;
    }
    catch(LetterFormatException& a){
        QMessageBox::critical(this,"Помилка вводу","Введені букви замість чисел, повторіть ще раз.");
        f_logging("LetterFormatException");
        return;
    }
    catch(OutOfRangeException& a){
        QMessageBox::critical(this,"Помилка вводу"," Введене завелике число, повторіть ще раз.");
        f_logging("OutOfRangeException");
        return;
    }
    catch(OverflowException& a){
        QMessageBox::critical(this,"Невідома поведінка","Переповнення, перевірте та повторіть ще раз.");
        f_logging("OverflowException");
        return;
    }
    catch(UnsupportedBaseException& a){
        QMessageBox::critical(this,"Помилка","Невибрані кнопки, повторіть ще раз.");
        f_logging("UnsupportedBaseException");
        return;
    }



}


