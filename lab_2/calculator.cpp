#include "calculator.h"
#include "ui_calculator.h"



calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);

    connect(ui->Number_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->Number_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));

    connect(ui->Button_change_sign,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->Button_procent,SIGNAL(clicked()),this,SLOT(operations()));

    connect(ui->Button_plus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->Button_minus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->Button_multiply,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->Button_divide,SIGNAL(clicked()),this,SLOT(math_operations()));

    ui->Button_plus->setCheckable(true);
    ui->Button_minus->setCheckable(true);
    ui->Button_multiply->setCheckable(true);
    ui->Button_divide->setCheckable(true);
}

calculator::~calculator()
{
    delete ui;
}

void calculator:: digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();
    double numbers;
    QString new_result;


    if((ui->result->text().contains(".")) && (button->text() == "0") )
    {
        new_result = (ui->result->text() + button->text()) ;
    }else
    {
        numbers = (ui->result->text() + button->text()).toDouble();
        new_result = QString::number(numbers,'g',12);
    }
    ui->result->setText(new_result);
}

void calculator::on_Button_dot_clicked()
{
    if(!(ui->result->text().contains('.')))
        ui->result->setText(ui->result->text() + ".");
}

void calculator:: operations()
{
    QPushButton *button = (QPushButton *)sender();
    double numbers=0;
    QString new_result;


    if (button->text() == "+/-")
    {
        numbers = (ui->result->text()).toDouble();
        numbers *= (-1);
    }
    else if (button->text() == "%")
    {
        numbers = (ui->result->text()).toDouble();
        numbers *= (100);
    }

    new_result = QString::number(numbers,'g',12);
    ui->result->setText(new_result);
}

void calculator:: math_operations()
{
    QPushButton *button = (QPushButton *)sender();
    first_num = ui->result->text().toDouble() ;
    ui->result->clear();
    button->setChecked(true);

}

void calculator::on_Button_eqv_clicked()
{
    double result, second_num;
    QString new_result;

    second_num = ui->result->text().toDouble() ;


    if ((ui->Button_plus->isChecked()) && !(ui->Button_minus->isChecked()) && // +
            !(ui->Button_multiply->isChecked()) && !(ui->Button_divide->isChecked()) )
    {
        result = first_num + second_num ;
        ui->Button_plus->setChecked(false);
        new_result = QString::number(result,'g',12);
        ui->result->setText(new_result);
    }
    else if (!(ui->Button_plus->isChecked()) && (ui->Button_minus->isChecked()) && // -
             !(ui->Button_multiply->isChecked()) && !(ui->Button_divide->isChecked()) )
    {
        result = first_num - second_num ;
        ui->Button_minus->setChecked(false);
        new_result = QString::number(result,'g',12);
        ui->result->setText(new_result);
    }
    else if (!(ui->Button_plus->isChecked()) && !(ui->Button_minus->isChecked()) && // *
             (ui->Button_multiply->isChecked()) && !(ui->Button_divide->isChecked()) )
    {
        result = first_num * second_num ;
        ui->Button_multiply->setChecked(false);
        new_result = QString::number(result,'g',12);
        ui->result->setText(new_result);
    }
    else if (!(ui->Button_plus->isChecked()) && !(ui->Button_minus->isChecked()) && // ÷
             (!ui->Button_multiply->isChecked()) && (ui->Button_divide->isChecked()) )
    {
        if(!( second_num > 0) && !(second_num<0))
        {
            ui->result->setText("Error: dividing by 0");
        }
        else
        {
            result = first_num / second_num ;
            new_result = QString::number(result,'g',12);
            ui->result->setText(new_result);
        }
        ui->Button_divide->setChecked(false);
    }
    else // not one math oper.
    {
        ui->result->setText("Error: two or more math operations");
    }

}

void calculator::on_Button_clear_clicked()
{
     ui->Button_plus->setChecked(false);
     ui->Button_minus->setChecked(false);
     ui->Button_multiply->setChecked(false);
     ui->Button_divide->setChecked(false);

     ui->result->setText("0");
}
