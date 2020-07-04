#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private:
    Ui::calculator *ui;
    double first_num;

private slots :
    void digits_numbers();
    void on_Button_dot_clicked();
    void operations();
    void on_Button_clear_clicked();
    void on_Button_eqv_clicked();
    void math_operations();
};
#endif // CALCULATOR_H
