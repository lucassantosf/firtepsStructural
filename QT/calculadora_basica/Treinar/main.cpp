#include <QtGui/QApplication>
#include "treinar.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Treinar w;
    w.show();
    
    return a.exec();
}
