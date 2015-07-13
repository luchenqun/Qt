#include "QtExcel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtExcel w;
    w.show();

    return a.exec();
}
