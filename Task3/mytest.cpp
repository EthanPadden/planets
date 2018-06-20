#include <QtTest/QtTest>

class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void chop();
    void number();
};

void TestQString::chop()
{
    QString str = "Hello";
    str.chop(2);
    QCOMPARE(str, QString("Hel"));      //Removes 2 characters from end of string

    str = "A";
    str.chop(1);
    QCOMPARE(str, QString(""));         //Removes 1 character to make the string empty

    str = "";
    str.chop(1);
    QCOMPARE(str, QString(""));         //Has no effect on an empty string

    str = ";#@";
    str.chop(2);
    QCOMPARE(str, QString(";"));        //Has the same effect on characters such as ';', '#' and '@'

    str = "Hello";
    str.chop(-2);
    QCOMPARE(str, QString("Hello"));    //Negative numbers as arguments have no effect
}
void TestQString::number()
{
     QCOMPARE(QString::number(2,10), QString("2"));
     QCOMPARE(QString::number(0,10), QString("0"));
     QCOMPARE(QString::number(101,10), QString("101"));
}
QTEST_MAIN(TestQString)
#include "mytest.moc"
