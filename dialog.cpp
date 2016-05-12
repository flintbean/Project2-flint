#include "dialog.h"
#include "ui_dialog.h"
#include "customerwindow.h"
#include <QtGui>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->zipEdit->setValidator( new QIntValidator(0, 99999, this) );
    ui->zipEdit->setMaxLength(5);
	ui->comboBox->addItems({ "AK","AL","AR","AZ","CA","CO","CT","DC","DE","FL","GA","GU","HI","IA","ID", "IL","IN","KS","KY","LA","MA","MD","ME","MH","MI","MN","MO","MS","MT","NC","ND","NE","NH","NJ","NM","NV","NY", "OH","OK","OR","PA","PR","PW","RI","SC","SD","TN","TX","UT","VA","VI","VT","WA","WI","WV","WY"});

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Dialog::on_commandLinkButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_okay1_clicked()
{
    bool valid = true;

    QPalette palette;
    palette.setColor(QPalette::Base, Qt::white);
    palette.setColor(QPalette::Background, Qt::white);

    QPalette paletteTwo;
    paletteTwo.setColor(QPalette::Base, QColor::fromRgb(255,192,203));
    paletteTwo.setColor(QPalette::Background, QColor::fromRgb(255,192,203));

    ui->nameEdit->setPalette(palette);
    ui->addressEdit->setPalette(palette);
    ui->cityEdit->setPalette(palette);
    ui->zipEdit->setPalette(palette);

    if(ui->nameEdit->text().isEmpty())
    {
        ui->nameEdit->setPalette(paletteTwo);
        valid = false;
    }
    if(ui->addressEdit->text().isEmpty())
    {
        ui->addressEdit->setPalette(paletteTwo);
        valid = false;
    }
    if(ui->cityEdit->text().isEmpty())
    {
        ui->cityEdit->setPalette(paletteTwo);
        valid = false;
    }
    if(ui->zipEdit->text().isEmpty())
    {
        ui->zipEdit->setPalette(paletteTwo);
        valid = false;
    }

    if(valid == true)
    {
        CustomerWindow *clientWindow = new CustomerWindow;

        clientWindow->show();
        this->close();

    }
}

void Dialog::on_guestButton_clicked()
{
    CustomerWindow *clientWindow = new CustomerWindow;

    clientWindow->show();
    this->close();
}
