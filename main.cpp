#include "mainwindow.H"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    std::cout<<"123";
    w.show();
    return a.exec();
}
