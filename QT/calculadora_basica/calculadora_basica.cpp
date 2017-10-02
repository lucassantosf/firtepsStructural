#include "calculadora_basica.h"
#include "ui_calculadora_basica.h"

calculadora_basica::calculadora_basica(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculadora_basica)
{
    ui->setupUi(this);
}

calculadora_basica::~calculadora_basica()
{
    delete ui;
}

void calculadora_basica::on_calculaButton_clicked()
{
    double n1, n2, result;
    int erro=0;
    n1 = ui->valor1Edit->text().toDouble();
    n2 = ui->valor2Edit->text().toDouble();
    if(ui->valor1Edit->text().isEmpty()&&ui->valor2Edit->text().isEmpty())
        erro=3;
    if(ui->somaRadioBtn->isChecked())
    {
        result= n1+n2;
    }
    else if(ui->subtraiRadioBtn->isChecked())
    {
        result= n1-n2;
    }
    else if(ui->subtraiRadioBtn->isChecked())
    {
        result= n1-n2;
    }
    else if(ui->multiplicaRadioBtn->isChecked())
    {
        result= n1*n2;
    }
    else if(ui->divideRadioBtn->isChecked())
    {
        if(n2==0)
        {
            erro=2;
        }
        else
        {
            result=n1/n2;
        }
    }
    else
    {
        erro=1;
    }
    if (erro==1)
    {
        ui->resultadoEdit->setText("Selecione uma operaçao!");
    }
    else if(erro==2)
    {
        ui->resultadoEdit->setText("Não existe divisão por zero!");
    }
    else if(erro==3)
    {
         ui->resultadoEdit->setText("Entre com um número!");
    }
    else
    {
         ui->resultadoEdit->setText(QString::number(result));
    }
}


void calculadora_basica::on_limpaButton_clicked()
{
    ui->valor1Edit->clear();
    ui->valor2Edit->clear();
    ui->resultadoEdit->clear();
    ui->somaRadioBtn->click();
}
