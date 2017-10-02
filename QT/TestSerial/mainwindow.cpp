#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtSerialPort/QSerialPort"
#include "QThread"

QSerialPort *serial;
QThread *escreve;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

        serial = new QSerialPort;
        serial->setPortName("COM5");
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        serial->setParity(QSerialPort::NoParity);

        serial->RequestToSendSignal;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    serial->open(QSerialPort::ReadWrite);
    serial->putChar('a');
    ui->label_4->setText(serial->readAll());
}

void MainWindow::on_pushButton_2_clicked()
{
    serial->open(QSerialPort::ReadWrite);
    serial->putChar('b');
    ui->label_5->setText(serial->readAll());
}

void MainWindow::on_pushButton_3_clicked()
{
    serial->open(QSerialPort::ReadWrite);
    serial->putChar('c');
    ui->label_6->setText(serial->readAll());
}

void MainWindow::on_pushButton_4_clicked()
{
    serial->open(QSerialPort::ReadWrite);
    serial->putChar('A');
    ui->label_4->setText(serial->readAll());

}

void MainWindow::on_pushButton_5_clicked()
{
    serial->open(QSerialPort::ReadWrite);
    serial->putChar('B');
    ui->label_5->setText(serial->readAll());
}

void MainWindow::on_pushButton_6_clicked()
{
    serial->open(QSerialPort::ReadWrite);
    serial->putChar('C');
    ui->label_6->setText(serial->readAll());
}

void MainWindow::init()
{
    serial->putChar('A');
    serial->waitForReadyRead(1000);
    ui->label_4->setText(serial->readAll());
    serial->clear();
    serial->putChar('B');
    serial->waitForReadyRead(1000);
    ui->label_5->setText(serial->readAll());
    serial->clear();
    serial->putChar('C');
    serial->waitForReadyRead(1000);
    ui->label_6->setText(serial->readAll());
    serial->clear();
}

