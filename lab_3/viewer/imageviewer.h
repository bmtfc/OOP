#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#include <QLabel>
#include <QScrollArea>
#include <QFileDialog>
#include <QMessageBox>
#include "aboutwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ImageViewer; }
QT_END_NAMESPACE

class ImageViewer : public QMainWindow
{
    Q_OBJECT

public:
    ImageViewer(QWidget *parent = nullptr);
    ~ImageViewer();

private slots:
    void on_actionOpen_triggered();

    void on_action_Exit_triggered();

    void on_action_About_triggered();

    void on_action_Save_triggered();

    void on_actionSave_As_triggered();

private:
    Ui::ImageViewer *ui;    
    QLabel *imageLabel;
    QScrollArea *scrollArea;
    QAction *actionOpen;
    QAction *action_Exit;
    QAction *action_About;
    AboutWindow *window;
    QImage image;
    QString fileName;
};
#endif // IMAGEVIEWER_H
