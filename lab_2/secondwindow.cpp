#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow :: setname_account(QString Name, QString account)
{
    name = Name;
    acc = account;
    ui->clientname->setText(Name);
    ui->accountnumber->setText(account);
}



void SecondWindow::on_withdraw_clicked()
{
    ammount= ui->textbox->text().toDouble();
    if (ammount <= balance){
    balance= (balance-ammount);
    ui->balancelabel->setText(QString::number(balance));}

}


void SecondWindow::on_clearbutton_clicked()
{
    balance=0;
    ammount=0;
ui->balancelabel->setText("");
ui->textbox->setText("");


}


void SecondWindow::on_deposit_clicked()
{
    ammount= ui->textbox->text().toDouble();
    balance= (balance+ammount);
    ui->balancelabel->setText(QString::number(balance));
}

