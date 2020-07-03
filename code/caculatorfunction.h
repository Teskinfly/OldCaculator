#ifndef CACULATORFUNCTION_H
#define CACULATORFUNCTION_H

#include <QObject>
#include <QString>
class CaculatorFunction : public QObject
{
    Q_OBJECT
public:
    explicit CaculatorFunction(QObject *parent = nullptr);

signals:

public slots:
    void addNumber(QString *s,int i);
};

#endif // CACULATORFUNCTION_H
