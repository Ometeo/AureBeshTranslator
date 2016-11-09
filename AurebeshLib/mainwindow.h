#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    void initWindow(const QString title);
    ~MainWindow();

    QTextEdit *getLatin() const;
    //void setLatin(QTextEdit *value);

    QTextEdit *getAurebesh() const;
    //void setAurebesh(QTextEdit *value);

private:
    QTextEdit *latin;
    QTextEdit *aurebesh;

    void readData();

};

#endif // MAINWINDOW_H
