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

    void on_button_plus_clicked();

    void on_button_minus_clicked();

    void on_button_mult_clicked();

    void on_button_big_clicked();

    void on_botton_sm_clicked();

    void on_button_eqv_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
