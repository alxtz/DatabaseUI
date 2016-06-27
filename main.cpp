#include <QApplication>
#include "MainWindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    MainWindow myMainWindow;
    myMainWindow.show();


    return a.exec();
}
