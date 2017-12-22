#ifndef GETDIGITS_H
#define GETDIGITS_H

#include <QObject>

class GetDigits : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double one READ getOne WRITE setOne NOTIFY oneChanged)
    Q_PROPERTY(int two2 READ getTwo WRITE setTwo NOTIFY twoChanged)
    Q_PROPERTY(int three3 READ getThree WRITE setThree NOTIFY threeChanged)
    Q_PROPERTY(int four4 READ getFour WRITE setFour NOTIFY fourChanged)
    Q_PROPERTY(int five5 READ getFive WRITE setFive NOTIFY fiveChanged)
    Q_PROPERTY(int six6 READ getThree WRITE setSix NOTIFY sixChanged)
    Q_PROPERTY(int seven7 READ getSeven WRITE setSeven NOTIFY sevenChanged)
    Q_PROPERTY(int eight8 READ getEight WRITE setEight NOTIFY eightChanged)
    Q_PROPERTY(int nine9 READ getNine WRITE setNine NOTIFY nineChanged)
    Q_PROPERTY(int zero0 READ getThree WRITE setZero NOTIFY zeroChanged)

public:
    explicit GetDigits(QObject *parent = nullptr);

signals:
    double oneChanged();
    int twoChanged();
    int threeChanged();
    int fourChanged();
    int fiveChanged();
    int sixChanged();
    int sevenChanged();
    int eightChanged();
    int nineChanged();
    int zeroChanged();


public slots:
    int getOne()
    {
        return m_one;
    }
    void setOne(double one)
    {
        m_one=one;
        emit oneChanged();

    }
    int getTwo()
    {
        return m_two;
    }
    void setTwo(int two2)
    {
        m_two=two2;
        emit twoChanged();

    }
    int getThree()
    {
        return m_three;
    }
    void setThree(int three3)
    {
        m_three=three3;
        emit threeChanged();

    }
    int getFour()
    {
        return m_four;
    }
    void setFour(int four4)
    {
        m_four=four4;
        emit fourChanged();

    }
    int getFive()
    {
        return m_five;
    }
    void setFive(int five5)
    {
        m_five=five5;
        emit fiveChanged();

    }
    int getSix()
    {
        return m_six;
    }
    void setSix(int six6)
    {
        m_six=six6;
        emit sixChanged();

    }
    int getSeven()
    {
        return m_seven;
    }
    void setSeven(int seven7)
    {
        m_seven=seven7;
        emit sevenChanged();

    }
    int getEight()
    {
        return m_eight;
    }
    void setEight(int eight8)
    {
        m_eight=eight8;
        emit eightChanged();

    }
    int getNine()
    {
        return m_nine;
    }
    void setNine(int nine9)
    {
        m_nine=nine9;
        emit nineChanged();

    }
    int getZero()
    {
        return m_zero;
    }
    void setZero(int zero0)
    {
        m_zero=zero0;
        emit zeroChanged();

    }
private:
    double m_one;
    int m_two;
    int m_three;
    int m_four;
    int m_five;
    int m_six;
    int m_seven;
    int m_eight;
    int m_nine;
    int m_zero;

};

#endif // GETDIGITS_H
