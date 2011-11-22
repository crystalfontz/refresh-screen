#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setContextMenuPolicy(Qt::NoContextMenu);
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setAttribute(Qt::WA_TranslucentBackground ,true );
    w.showFullScreen();
    w.show();

    return a.exec();
}
