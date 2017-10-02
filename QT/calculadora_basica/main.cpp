#include <QtGui/QApplication>
#include "calculadora_basica.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calculadora_basica w;
    w.show();
    
    return a.exec();
}
