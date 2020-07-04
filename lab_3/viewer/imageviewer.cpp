#include "imageviewer.h"
#include "ui_imageviewer.h"

ImageViewer::ImageViewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ImageViewer)
{
    ui->setupUi(this);

    actionOpen = ui->actionOpen;
    action_Exit = ui->action_Exit;
    action_About = ui->action_About;

        imageLabel = new QLabel;
        imageLabel->setBackgroundRole(QPalette::Base);
        imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        imageLabel->setScaledContents(true);
        setCentralWidget(imageLabel);

        setWindowTitle(tr("Image Viewer"));
        resize(500, 400);
}

ImageViewer::~ImageViewer()
{
    delete ui;
}


void ImageViewer::on_actionOpen_triggered()
{
        fileName = QFileDialog::getOpenFileName(this,tr("Open File"), QDir::currentPath());
        if (!fileName.isEmpty()) {
             image.load(fileName);
             if (image.isNull()) {
                 QMessageBox::information(this, tr("Image Viewer"),
                                          tr("Cannot load %1.").arg(fileName));
                 return;
             }
             imageLabel->setPixmap(QPixmap::fromImage(image));
             imageLabel->adjustSize();
        }
}

void ImageViewer::on_action_Exit_triggered()
{
 ui->centralwidget->close();
}

void ImageViewer::on_action_About_triggered()
{
    window = new AboutWindow(this);
    window->show();
}

void ImageViewer::on_action_Save_triggered()
{
    image.save(fileName);
}

void ImageViewer::on_actionSave_As_triggered()
{
    QString file = QFileDialog::getSaveFileName(this,
            tr("Open File"));
    if (!file.isEmpty())
        image.save(file);
}
