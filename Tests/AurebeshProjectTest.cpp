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
    void testMainWindow();
};

TestTest::TestTest()
{
}

void TestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void TestTest::testMainWindow()
{
    int zero = 0;

    char* arg[] = { nullptr };
    QApplication a(zero, arg);
     MainWindow window;
    window.initWindow("Title window");

    QTest::keyClicks(window.getLatin(), "hello world");

    QCOMPARE(600, window.size().height());
    QCOMPARE(800,  window.size().width());
    QCOMPARE(QString("Title window"), window.windowTitle());
    QCOMPARE(window.getLatin()->toPlainText(), QString("hello world"));
    QCOMPARE(window.getAurebesh()->toPlainText(), QString("hello world"));

}

QTEST_APPLESS_MAIN(TestTest)

#include "AurebeshProjectTest.moc"
