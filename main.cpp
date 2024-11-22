#include "screencontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScreenController controller;
    controller.show();
    return a.exec();
}
