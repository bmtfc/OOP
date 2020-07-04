#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "class.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr );
    ~MainWindow();

private slots:
    void on_book_set_clicked();

    void on_magazine_set_clicked();

    void on_am_set_clicked();

    void on_book_paper_clicked();

    void on_magazine_paper_clicked();

    void on_am_paper_clicked();

    void on_am_paperd_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
