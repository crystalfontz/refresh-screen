#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QTimer *timer = new QTimer(this);
       //  connect(timer, SIGNAL(timeout()), this, SLOT(updateCaption()));
     QTimer::singleShot(500, this, SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
