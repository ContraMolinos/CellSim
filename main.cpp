#include "cellsimmw.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cellSimMW w;
    w.show();

    return a.exec();
}
