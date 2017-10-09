#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtMath"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_txtInput_textChanged()
{
    QString text = ui->txtInput->toPlainText();
    double output = text.toDouble() * 1.428571;
    ui->txtOutput->setText(QString::number(qCeil(output)));
    ui->CardLabel->setText(QString::number(qCeil(output / 10) * 10));
}
