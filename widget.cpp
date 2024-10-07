#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->button1,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button2,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button3,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button4,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button5,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button6,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button7,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button8,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button9,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->button0,&QPushButton::clicked,this,&Widget::buttonClicked);
    connect(ui->buttondiv,&QPushButton::clicked,this,&Widget::operatorClicked);
    connect(ui->buttoneq,&QPushButton::clicked,this,&Widget::equalsClicked);
    connect(ui->buttonminus,&QPushButton::clicked,this,&Widget::operatorClicked);
    connect(ui->buttonmulti,&QPushButton::clicked,this,&Widget::operatorClicked);
    connect(ui->buttonreset,&QPushButton::clicked,this,&Widget::resetClicked);
    connect(ui->buttonplus,&QPushButton::clicked,this,&Widget::operatorClicked);
    connect(ui->DeleteHistoryButton,&QPushButton::clicked,this,&Widget::deleteHistory);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::buttonClicked(){
    QPushButton *button=qobject_cast<QPushButton *>(sender());//Hangi butona basıldığını buluyoruz)

    if(button){
    QString buttonText=button->text();
    ui->resultLine->setText(ui->resultLine->text()+buttonText);
}
}
void Widget::operatorClicked(){
    firstNumber=ui->resultLine->text().toInt();
    QPushButton *button = qobject_cast<QPushButton *>(sender());
     currentOperator = button->text();
    ui->resultLine->clear();
}
void Widget::resetClicked(){
    ui->resultLine->clear();
}

void Widget::equalsClicked(){
    int secondNumber=ui->resultLine->text().toInt();
    double result=0;
    if (currentOperator == "+") {
        result = firstNumber + secondNumber;
    } else if (currentOperator == "-") {
        result = firstNumber - secondNumber;
    } else if (currentOperator == "*") {
        result = firstNumber * secondNumber;
    } else if (currentOperator == "/") {
        if (secondNumber != 0.0) {
            result = firstNumber / secondNumber;
        } else {
            ui->resultLine->setText("Error: Division by Zero");
            return;
        }


    }
    QString calculate=QString::number(firstNumber) +currentOperator+QString::number(secondNumber)+"="+QString::number(result);
    ui->resultLine->setText(QString::number(result));
    ui->listWidget->addItem(calculate);
}
void Widget::deleteHistory(){
    ui->listWidget->clear();
}
