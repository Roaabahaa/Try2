#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{


}


void MainWindow::on_trycharacter_clicked()
{
    QChar character;
   character = ui->userinput-> text()[0];// k2no array
   if (THEWORD.contains(character)){
       for (int i=0;i<7;i++){
           if (THEWORD[i]== character){
               empty[i] = character;
           }

       }

   }
   else {
       chances= chances-1;
       if (chances==0){
           ui->result -> setText("you lost");
   }

}

 if (empty== THEWORD){
         ui->result -> setText("you won");
    }


ui-> displayedword -> setText(empty);
ui-> chances -> setText(QString ::number(chances));


}

