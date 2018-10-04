#include "source.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    source w;
    w.show();

    return a.exec();
}
