#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    void initWindow(const QString title);
    ~MainWindow();

private:

};

#endif // MAINWINDOW_H
