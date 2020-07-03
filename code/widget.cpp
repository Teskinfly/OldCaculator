#include "widget.h"
#include "ui_widget.h"
#include "QTimer"
#include "QDateTime"
#include "QString"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    timer->start(500);
    connect(timer,&QTimer::timeout,[=](){
       QDateTime time;
       time = QDateTime::currentDateTime();
       ui->l_time->setText(time.toString("yyyy-MM-dd hh:mm:ss"));
    });
    c = '.';
    connect(ui->b_00,&QPushButton::clicked,this,&Widget::add00);
    connect(ui->b_0,&QPushButton::clicked,this,&Widget::add0);
    connect(ui->b_1,&QPushButton::clicked,this,&Widget::add1);
    connect(ui->b_2,&QPushButton::clicked,this,&Widget::add2);
    connect(ui->b_3,&QPushButton::clicked,this,&Widget::add3);
    connect(ui->b_4,&QPushButton::clicked,this,&Widget::add4);
    connect(ui->b_5,&QPushButton::clicked,this,&Widget::add5);
    connect(ui->b_6,&QPushButton::clicked,this,&Widget::add6);
    connect(ui->b_7,&QPushButton::clicked,this,&Widget::add7);
    connect(ui->b_8,&QPushButton::clicked,this,&Widget::add8);
    connect(ui->b_9,&QPushButton::clicked,this,&Widget::add9);
    connect(ui->b_plus,&QPushButton::clicked,this,&Widget::plus);
    connect(ui->b_sub,&QPushButton::clicked,this,&Widget::sub);
    connect(ui->b_mul,&QPushButton::clicked,this,&Widget::mul);
    connect(ui->b_div,&QPushButton::clicked,this,&Widget::div);
    connect(ui->b_equal,&QPushButton::clicked,this,&Widget::equal);
    connect(ui->b_reset,&QPushButton::clicked,this,&Widget::reset);
    connect(ui->b_point,&QPushButton::clicked,this,&Widget::addPoint);
    ui->l_show->setStyleSheet("border:2px solid red;");

}
Widget::~Widget()
{
    delete ui;
}
void Widget::reset(){
    this->result.clear();
    c = '.';
    flushScreen();
}
void Widget::plus() {
//    qDebug("%c",c);
    if (c != '.'){//auto equal if multiply caculate
        equal();
    }
    c = '+';
    this->first = this->result;
    result.clear();
}
void Widget::sub() {
    if (c != '.'){
        equal();
    }
    this->first = this->result;
    c = '-';
    result.clear();
}
void Widget::mul() {
    if (c != '.'){
        equal();
    }
    this->first = this->result;
    c = '*';
    result.clear();
}
void Widget::div() {
    if (c != '.'){
        equal();
    }
    this->first = this->result;
    c = '/';
    result.clear();
}
void Widget::equal(){
    this->last = this->result;
    double x = first.toDouble();
    double y = last.toDouble();
    result.clear();
    switch (c) {
    case '+':
        result = QString::number(x+y);
        break;
    case '-':
        result = QString::number(x-y);
        break;
    case '*':
        result = QString::number(x*y);
        break;
    case '/':
        result = QString::number(x/y);
        break;
    default:
        result = "error";
        break;
    }
    c = '.';
    flushScreen();
    printf("hi");
}
void Widget::addPoint(){
    this->result.append('.');
    flushScreen();
}
void Widget::add0(){
    this->result.append('0');
    flushScreen();
}
void Widget::add00(){
    this->result.append('0');
    result.append('0');
    flushScreen();
}
void Widget::add1(){
    this->result.append('1');
    flushScreen();
}
void Widget::add2(){
    this->result.append('2');
    flushScreen();
}
void Widget::add3(){
    this->result.append('3');
    flushScreen();
}
void Widget::add4(){
    this->result.append('4');
    flushScreen();
}
void Widget::add5(){
    this->result.append('5');
    flushScreen();
}
void Widget::add6(){
    this->result.append('6');
    flushScreen();
}
void Widget::add7(){
    this->result.append('7');
    flushScreen();
}
void Widget::add8(){
    this->result.append('8');
    flushScreen();
}
void Widget::add9(){
    this->result.append('9');
    flushScreen();
}

void Widget::flushScreen(){
    ui->l_show->setText(this->result);
}
