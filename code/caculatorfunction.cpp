#include "caculatorfunction.h"

CaculatorFunction::CaculatorFunction(QObject *parent) : QObject(parent)
{

}
CaculatorFunction::addNumber(QString *s, int i){
    s->append(i);
}
