#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_set_v1_clicked();

    void on_set_v2_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_set_as_v1_1_clicked();

    void on_set_as_v1_2_clicked();

    void on_set_as_v2_1_clicked();

    void on_set_as_v2_2_clicked();

    void on_scalyar_clicked();

    void on_choose_v1_1_clicked();

    void on_choose_v2_1_clicked();

    void on_on_const_clicked();

    void on_choose_v1_2_clicked();

    void on_choose_v2_2_clicked();

    void on_lenght_clicked();

    void on_eqv_clicked();

    void on_eqv_l_clicked();

    void on_vect_clicked();



    void on_set_as_v1_3_clicked();

    void on_set_as_v2_3_clicked();

    void on_show_how_many_clicked();

    void on_bigger_clicked();

    void on_smaller_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
