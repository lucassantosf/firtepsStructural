#include "treinar.h"
#include "ui_treinar.h"

Treinar::Treinar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Treinar)
{
    ui->setupUi(this);
}

Treinar::~Treinar()
{
    delete ui;
}

void Treinar::on_goButton_clicked()
{

    double n1,n2 , resultado ;
    n1 = ui->n1Edit->text().toDouble();
    n2 = ui->n2Edit->text().toDouble();
    resultado = n1+n2;
    if(ui->goButton->clicked())
    {
        ui->REdit->setText(QString::number(resultado));
    }

}
