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
    void on_print_class_names_clicked();

    void on_magazine_set_clicked();

    void on_class2_calc_clicked();

    void on_book_set_clicked();

    void on_class3_calc_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
