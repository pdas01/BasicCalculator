#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QQuickWindow>
#include <QQuickItem>
#include <QQmlContext>
#include <QIcon>
#include <GetDigits.h>
#include <iostream>
#include <ArithmeticOperations.h>
using namespace std;

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setWindowIcon(QIcon("qrc:/Images/calci.ico"));

    QQmlApplicationEngine engine;
    ArithmeticOperations arithObj;
    GetDigits digitsObject;
    engine.rootContext()->setContextProperty("answer",&arithObj);
    engine.rootContext()->setContextProperty("digits",&digitsObject);

    qmlRegisterType<ArithmeticOperations>("calculations",1,0,"ArithmeticOperations");
    qmlRegisterType<GetDigits>("digits",1,0,"GetDigits");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;


       arithObj.setEngine(&engine);


       return app.exec();

    }

