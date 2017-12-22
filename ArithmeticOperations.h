#ifndef ARITHMETICOPERATIONS_H
#define ARITHMETICOPERATIONS_H
#include <QQuickItem>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQuickWindow>
#include <iostream>
#include <QString>

using namespace std;
class ArithmeticOperations : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double result READ getResult WRITE setResult NOTIFY resultChanged)

public:
    explicit ArithmeticOperations(QObject *parent = nullptr);

    void calculate(QVariant value);
    void setEngine(QQmlApplicationEngine *engine);
    void display();

public slots:
    double getResult()
    {
        return m_result;
    }
    void setResult(double result)
    {
        m_result=result;
        emit resultChanged();

    }

signals:
    double resultChanged();


public slots:
    void digitPressed(QVariant value);
    void onOperatorsPressed(QVariant value);



private:
           QQmlApplicationEngine* m_engine;
           QQuickWindow* m_window;
            QString numberEntered;
            QString next;
            int plusCounter=0;
            int minusCounter=0;
            int modCounter=0;
            int divideCounter=0;
            int multiplyCounter=0;
            int operations=0;
            int count=0;
            double m_result;

};

#endif // ARITHMETICOPERATIONS_H
