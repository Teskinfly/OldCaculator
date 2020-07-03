#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void add0();
    void add1();
    void add2();
    void add3();
    void add4();
    void add5();
    void add6();
    void add7();
    void add8();
    void add9();
    void add00();
    void plus();
    void sub();
    void mul();
    void div();
    void equal();
    void addPoint();
    void flushScreen();
    void reset();

private:
   QString result;
   QString first;
   QString last;
   char c;
    Ui::Widget *ui;
};

#endif // WIDGET_H
