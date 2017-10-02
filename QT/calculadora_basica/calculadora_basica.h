#ifndef CALCULADORA_BASICA_H
#define CALCULADORA_BASICA_H

#include <QMainWindow>

namespace Ui {
class calculadora_basica;
}

class calculadora_basica : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit calculadora_basica(QWidget *parent = 0);
    ~calculadora_basica();
    
private slots:
    void on_calculaButton_clicked();

    void on_limpaButton_clicked();

private:
    Ui::calculadora_basica *ui;
};

#endif // CALCULADORA_BASICA_H
