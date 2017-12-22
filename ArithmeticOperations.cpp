#include "ArithmeticOperations.h"
#include <iostream>
#include <QDebug>
#include <string>
#include <sstream>
using namespace std;
ArithmeticOperations::ArithmeticOperations(QObject *parent) : QObject(parent)
{

}
void ArithmeticOperations::setEngine(QQmlApplicationEngine* engine)
{
    m_engine = engine;
    QObject *object = engine->rootObjects().at(0);
    m_window = qobject_cast <QQuickWindow*> (object);
    if (m_window != nullptr){
        cout<<"Window found"<<endl;
        display();
    }
    else{
        cout<<"Window is null";

    }

}

void ArithmeticOperations::display()
{    QQuickItem* one1= m_window->findChild<QQuickItem*>("one");
     if(one1 !=nullptr)
     {    QObject::connect(one1, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
     else
     {
         cout<<"button not found"<<endl;
     }
    QQuickItem* two= m_window->findChild<QQuickItem*>("two");
     if(two !=nullptr)
     {    QObject::connect(two, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* three= m_window->findChild<QQuickItem*>("three");
     if(three !=nullptr)
     {    QObject::connect(three, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* four= m_window->findChild<QQuickItem*>("four");
     if(four !=nullptr)
     {    QObject::connect(four, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* five= m_window->findChild<QQuickItem*>("five");
     if(five !=nullptr)
     {    QObject::connect(five, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* six= m_window->findChild<QQuickItem*>("six");
     if(six !=nullptr)
     {    QObject::connect(six, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* seven= m_window->findChild<QQuickItem*>("seven");
     if(seven !=nullptr)
     {    QObject::connect(seven, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* eight= m_window->findChild<QQuickItem*>("eight");
     if(eight !=nullptr)
     {    QObject::connect(eight, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* nine= m_window->findChild<QQuickItem*>("nine");
     if(nine !=nullptr)
     {    QObject::connect(nine, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* zero= m_window->findChild<QQuickItem*>("zero");
     if(zero !=nullptr)
     {    QObject::connect(zero, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }

     QQuickItem* equal= m_window->findChild<QQuickItem*>("equal");

      if(equal !=nullptr)
      {    QObject::connect(equal, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

      }
     QQuickItem* dot= m_window->findChild<QQuickItem*>("dot");
      if(dot !=nullptr)
      {    QObject::connect(dot, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

      }
     QQuickItem* plus= m_window->findChild<QQuickItem*>("plus");
      if(plus !=nullptr)
      {    QObject::connect(plus, SIGNAL(refresh(QVariant)), this, SLOT(onOperatorsPressed(QVariant)));

      }
     QQuickItem* minus= m_window->findChild<QQuickItem*>("minus");
      if(minus !=nullptr)
      {
          QObject::connect(minus, SIGNAL(refresh(QVariant)), this, SLOT(onOperatorsPressed(QVariant)));

          cout<<"Minus found"<<endl;
      }
      else{
          cout<<"Minus not found"<<endl;
      }
     QQuickItem* divide= m_window->findChild<QQuickItem*>("divide");
      if(divide !=nullptr)
      {   cout<<"divide found"<<endl;
          QObject::connect(divide, SIGNAL(refresh(QVariant)), this, SLOT(onOperatorsPressed(QVariant)));

      }
     QQuickItem* multiply= m_window->findChild<QQuickItem*>("multiply");
      if(multiply !=nullptr)
      {    QObject::connect(multiply, SIGNAL(refresh(QVariant)), this, SLOT(onOperatorsPressed(QVariant)));
            cout<<"multiply found"<<endl;
      }
     QQuickItem* modulo= m_window->findChild<QQuickItem*>("modulo");
      if(modulo !=nullptr)
      {    QObject::connect(modulo, SIGNAL(refresh(QVariant)), this, SLOT(onOperatorsPressed(QVariant)));

      }
    QQuickItem* squareRoot= m_window->findChild<QQuickItem*>("squareRoot");
     if(squareRoot !=nullptr)
     {    QObject::connect(squareRoot, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }
    QQuickItem* cancel= m_window->findChild<QQuickItem*>("cancel");
     if(cancel !=nullptr)
     {    QObject::connect(cancel, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }

    QQuickItem* cancelAll= m_window->findChild<QQuickItem*>("cancelAll");
     if(cancelAll !=nullptr)
     {    QObject::connect(cancelAll, SIGNAL(refresh(QVariant)), this, SLOT(digitPressed(QVariant)));

     }

}

void ArithmeticOperations::digitPressed(QVariant value)
  {
        if(value == "one")
      {
         numberEntered = numberEntered.append("1");
          cout<<numberEntered.toStdString()<<endl;
       }
       if(value == "two")
        {
          numberEntered.append("2");
          cout<<numberEntered.toStdString()<<endl;
        }
      if(value == "three")
      {
        numberEntered.append("3");
        cout<<numberEntered.toStdString()<<endl;
      }
     if(value == "four")
      {
        numberEntered.append("4");
        cout<<numberEntered.toStdString()<<endl;
      }
    if(value == "five")
     {
        numberEntered.append("5");
        cout<<numberEntered.toStdString()<<endl;
    }
    if(value == "six")
     {
        numberEntered.append("6");
        cout<<numberEntered.toStdString()<<endl;
    }
    if(value == "seven")
    {
        numberEntered.append("7");
        cout<<numberEntered.toStdString()<<endl;

    }
    if(value == "eight")
      {
        numberEntered.append("8");
        cout<<numberEntered.toStdString()<<endl;
      }
    if(value == "nine")
    {
        numberEntered.append("9");
        cout<<numberEntered.toStdString()<<endl;
    }
    if(value == "zero")
      {
        numberEntered.append("0");
        cout<<numberEntered.toStdString()<<endl;
    }
    if(value=="dot")
    {
        numberEntered.append(".");
        cout<<numberEntered.toStdString()<<endl;
    }
    if(value=="cancel")
    {
        numberEntered.remove(numberEntered.length()-1,numberEntered.length());
        cout<<numberEntered.toStdString()<<endl;
    }
    if(value=="cancelAll")
    {
        numberEntered.clear();
    }
    if(value=="squareRoot")
    {
        if(count==0)
       {
            numberEntered.insert(numberEntered.size()-numberEntered.size(),"-");
            count=1;
            cout <<numberEntered.toStdString()<<endl;
        }
        else
        {
            numberEntered.remove(0,1);
            numberEntered.insert(numberEntered.size()-numberEntered.size(),"");
            count=0;
            cout <<numberEntered.toStdString()<<endl;
        }
    }

cout <<"Length of the numbers is: "<<(numberEntered.size())<<endl;

if(value == "divide" || value == "multiply" || value =="plus" || value =="minus" || value =="modulo")
{
  onOperatorsPressed(value);
}
if(value=="equal")
{
    calculate(value);
}

}

void ArithmeticOperations::onOperatorsPressed(QVariant value)
{
    QString number;
   number=numberEntered;
   if(value == "divide")
   {
       next=numberEntered;
       cout << "The first number=" << next.toStdString()<< endl;
       numberEntered="";
       divideCounter++;
       operations=1;
   }
   if( value == "multiply")
   {
       next=numberEntered;
       numberEntered="";
       multiplyCounter++;
       operations=2;

  }
   if( value =="plus")
   {
       next=numberEntered;
       numberEntered="";
       operations=3;
       plusCounter++;

  }
   if( value =="minus")
   {
       next=numberEntered;
       numberEntered="";
       operations=4;
       minusCounter++;

   }
   if(value =="modulo")
   {
       next=numberEntered;
       numberEntered="";
       operations=5;
       modCounter++;

   }
}

void ArithmeticOperations::calculate(QVariant value)
{
    if((value=="equal" && operations==1) || divideCounter>1)
    {
       m_result=next.toDouble() / numberEntered.toDouble();
       cout<< "Total= " << m_result <<endl;
    }
    if((value=="equal" && operations==2) || multiplyCounter>1)
    {
       m_result=next.toDouble() * numberEntered.toDouble();
       cout<< "Total= " << m_result <<endl;

    }
    if((value=="equal" && operations==3) || plusCounter>1)
    {
       m_result=next.toDouble() + numberEntered.toDouble();
       cout<< "Total= " << m_result <<endl;

    }
    if((value=="equal" && operations==4) || minusCounter>1)
    {
       m_result=next.toDouble() - numberEntered.toDouble();
       cout<< "Total= " << m_result <<endl;
    }
    if((value=="equal" && operations==5) || modCounter>1)
    {
       m_result=fmod(next.toDouble(),numberEntered.toDouble());
       cout<< "Total= " << m_result <<endl;
    }


}

