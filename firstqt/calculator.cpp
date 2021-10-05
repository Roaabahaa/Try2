#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}
void calculator:: managcalc (QString buttontext){
    if (operation == ""){
        firstnumber= buttontext;
        ui-> display -> setText(firstnumber);

    }
//bhbd 34an ashof hyhsl eh

    else // it's the second number
    {
        secondnumber = buttontext;
        Number2exist= true;
        ui-> display -> setText(ui-> display -> text()+ secondnumber);// set text writes the text
    }
}





void calculator::on_button0_clicked()
{
    managcalc(ui ->button0 ->text());

}


void calculator::on_button1_clicked()
{
    managcalc(ui ->button1 ->text());
}


void calculator::on_button2_clicked()
{
    managcalc(ui ->button2 ->text());
}


void calculator::on_button3_clicked()
{
managcalc(ui ->button3 ->text());
}


void calculator::on_button4_clicked()
{
    managcalc(ui ->button4 ->text());
}


void calculator::on_button5_clicked()
{
    managcalc(ui ->button5 ->text());
}


void calculator::on_button6_clicked()
{
    managcalc(ui ->button6 ->text());
}


void calculator::on_button7_clicked()
{
    managcalc(ui ->button7 ->text());
}


void calculator::on_button8_clicked()
{
    managcalc(ui ->button8 ->text());
}


void calculator::on_button9_clicked()
{
    managcalc(ui ->button9 ->text());
}


void calculator::on_plus_clicked()
{
    if (operation== "" && firstnumber!= "")// no previous operations and u have a first number is the condition
    {
        operation = ui-> plus -> text();
        ui-> display -> setText(ui->display->text()+ operation);
    }
    else if (operation != "")
    {
       ui -> display -> setText("Error: No multiple operations allowed");
       firstnumber= "";// to start over which means clearing the variables
       secondnumber= "";// to start over which means clearing the variables
       operation= "";// to start over which means clearing the variables
       Number2exist= false;// to start over which means clearing the variables
    }
    else //no firstnumber
    {
        ui -> display -> setText("Error: No first number is entered");
        firstnumber= "";// to start over which means clearing the variables
        secondnumber= "";// to start over which means clearing the variables
        operation= "";// to start over which means clearing the variables
        Number2exist= false;// to start over which means clearing the variables

    }
}


void calculator::on_minus_clicked()
{
    if (operation== "" && firstnumber!= "")// no previous operations and u have a first number is the condition
    {
        operation = ui-> minus -> text();
        ui-> display -> setText(ui->display->text()+ operation);
    }
    else if (operation != "")
    {
       ui -> display -> setText("Error: No multiple operations allowed");
       firstnumber= "";// to start over which means clearing the variables
       secondnumber= "";// to start over which means clearing the variables
       operation= "";// to start over which means clearing the variables
       Number2exist= false;// to start over which means clearing the variables
    }
    else //no firstnumber
    {
        ui -> display -> setText("Error: No first number is entered");
        firstnumber= "";// to start over which means clearing the variables
        secondnumber= "";// to start over which means clearing the variables
        operation= "";// to start over which means clearing the variables
        Number2exist= false;// to start over which means clearing the variables

    }
}


void calculator::on_divide_clicked()
{
    if (operation== "" && firstnumber!= "")// no previous operations and u have a first number is the condition
    {
        operation = ui-> divide -> text();
        ui-> display -> setText(ui->display->text()+ operation);
    }
    else if (operation != "")
    {
       ui -> display -> setText("Error: No multiple operations allowed");
       firstnumber= "";// to start over which means clearing the variables
       secondnumber= "";// to start over which means clearing the variables
       operation= "";// to start over which means clearing the variables
       Number2exist= false;// to start over which means clearing the variables
    }
    else //no firstnumber
    {
        ui -> display -> setText("Error: No first number is entered");
        firstnumber= "";// to start over which means clearing the variables
        secondnumber= "";// to start over which means clearing the variables
        operation= "";// to start over which means clearing the variables
        Number2exist= false;// to start over which means clearing the variables

    }
}


void calculator::on_multiply_clicked()
{
    if (operation== "" && firstnumber!= "")// no previous operations and u have a first number is the condition
    {
        operation = ui-> multiply -> text();
        ui-> display -> setText(ui->display->text()+ operation);
    }
    else if (operation != "")
    {
       ui -> display -> setText("Error: No multiple operations allowed");
       firstnumber= "";// to start over which means clearing the variables
       secondnumber= "";// to start over which means clearing the variables
       operation= "";// to start over which means clearing the variables
       Number2exist= false;// to start over which means clearing the variables
    }
    else //no firstnumber
    {
        ui -> display -> setText("Error: No first number is entered");
        firstnumber= "";// to start over which means clearing the variables
        secondnumber= "";// to start over which means clearing the variables
        operation= "";// to start over which means clearing the variables
        Number2exist= false;// to start over which means clearing the variables

    }
}


void calculator::on_equals_clicked()
{
   if (!Number2exist)// number2exist == false
   {
   ui ->display -> setText("Error: second number doesn't exist");
   firstnumber= "";// to start over which means clearing the variables
   secondnumber= "";// to start over which means clearing the variables
   operation= "";// to start over which means clearing the variables
   Number2exist= false;// to start over which means clearing the variables
   }
   else if (operation== ""){
       ui ->display -> setText("Error: No operation is entered");
       firstnumber= "";// to start over which means clearing the variables
       secondnumber= "";// to start over which means clearing the variables
       operation= "";// to start over which means clearing the variables
       Number2exist= false;// to start over which means clearing the variables
   }
   else if (operation == "+")
   {
       ui -> display -> setText(QString ::number (firstnumber.toInt()+secondnumber.toInt()));// to convert into int
       operation= "";
   }
   else if (operation == "-")
   {
       ui -> display -> setText(QString ::number (firstnumber.toInt()-secondnumber.toInt()));// to convert into int
       operation= "";
   }
   else if (operation == "*")
   {
       ui -> display -> setText(QString ::number (firstnumber.toInt()*secondnumber.toInt()));// to convert into int // q string to return the number to string
       operation= "";
   }
   else if (operation == "/")
   {
       ui -> display -> setText(QString ::number (firstnumber.toDouble()/secondnumber.toDouble()));// to convert into int
       operation= "";
   }
}


void calculator::on_allclear_clicked()
{
   ui -> display -> setText("");
   firstnumber= "";// to start over which means clearing the variables
   secondnumber= "";// to start over which means clearing the variables
   operation= "";// to start over which means clearing the variables
   Number2exist= false;// to start over which means clearing the variables

}
// bhbd 34an ashof hyhsl eh 



