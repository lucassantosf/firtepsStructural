#include "re.h"
#include "ui_re.h"

Re::Re(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Re)
{
    ui->setupUi(this);
}

Re::~Re()
{
    delete ui;
}

void Re::on_goBtn_clicked()
{
    double n1,n2 , resultado ;
    n1 = ui->n1Edit->text().toDouble();
    n2 = ui->n2Edit->text().toDouble();
    resultado = n1+n2;

    ui->rEdit->setText(QString::number(resultado));

}
