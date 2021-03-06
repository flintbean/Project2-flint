#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_4_clicked();

    void on_commandLinkButton_clicked();

    void on_okay1_clicked();

    void on_guestButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
