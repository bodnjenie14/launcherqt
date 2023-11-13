#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QMovie>
#include <QGraphicsView>
#include <QGraphicsProxyWidget>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap myPixmap(":/new/prefix1/backgroundc.jpg");

    // Set the image to a QLabel (assuming you have a QLabel in your UI)
    QPalette palette;
    palette.setBrush(QPalette::Background, myPixmap);

    // Set the palette for the central widget (assuming you have a central widget)
    this->centralWidget()->setPalette(palette);
    this->centralWidget()->setAutoFillBackground(true);

    this->resize(myPixmap.size());

}

MainWindow::~MainWindow()
{
    delete ui;
}
