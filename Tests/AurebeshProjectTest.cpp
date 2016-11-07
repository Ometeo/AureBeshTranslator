#include <QString>
#include <QtTest>
#include <mainWindow.h>

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void testCase1();
    void testInit();
};

TestTest::TestTest()
{
}

void TestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void TestTest::testInit()
{
    MainWindow window;
    window.initWindow("Title window");

    QCOMPARE(600, window.size().height());
    QCOMPARE(800,  window.size().width());
    QCOMPARE(QString("Title window"), window.windowTitle());

}

QTEST_APPLESS_MAIN(TestTest)

#include "AurebeshProjectTest.moc"
