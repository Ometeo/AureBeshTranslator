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

    QTest::keyClicks(window.getLatin(), "!");

    QCOMPARE(800, window.size().height());
    QCOMPARE(1200,  window.size().width());
    QCOMPARE(QString("Title window"), window.windowTitle());
    QCOMPARE(window.getLatin()->toPlainText(), QString("!Hello world"));
    QCOMPARE(window.getAurebesh()->toPlainText(), QString("!Hello world"));

}

QTEST_APPLESS_MAIN(TestTest)

#include "AurebeshProjectTest.moc"
