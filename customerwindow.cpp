#include "customerwindow.h"
#include "ui_customerwindow.h"

CustomerWindow::CustomerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->tabWidget->setCurrentIndex(0);

    QString pageNum;
    int num;

    num = ui->stackedWidget->currentIndex() + 1;
    pageNum = QString::number(num);
    ui->pageLabel->setText(pageNum + "/3");
}

CustomerWindow::~CustomerWindow()
{
    delete ui;
}

void CustomerWindow::on_pushButton_2_clicked()
{
    if(ui->stackedWidget->currentIndex() < 3)
    {
        ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() + 1);
        QString pageNum;
        int num;

        num = ui->stackedWidget->currentIndex() + 1;
        pageNum = QString::number(num);
        ui->pageLabel->setText(pageNum + "/3");
    }
}

void CustomerWindow::on_pushButton_clicked()
{
    if(ui->stackedWidget->currentIndex() > 0)
    {
        ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() - 1);
        QString pageNum;
        int num;

        num = ui->stackedWidget->currentIndex() + 1;
        pageNum = QString::number(num);
        ui->pageLabel->setText(pageNum + "/3");
    }
}
