#include "mainwindow.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *grid = new QGridLayout(this);
    grid->setSpacing(10);

    QTextEdit *latin = new QTextEdit(this);
    QTextEdit *aurebesh = new QTextEdit(this);

    QLabel *latinLabel = new QLabel(this);
    latinLabel->setText("Latin alphabet");


    QLabel *aurebeshLabel = new QLabel(this);
    aurebeshLabel->setText("AureBesh alphabet");

    grid->addWidget(latinLabel, 0, 0);
    grid->addWidget(aurebeshLabel, 0, 1);
    grid->addWidget(latin, 1, 0);
    grid->addWidget(aurebesh, 1, 1);

    setLayout(grid);

    this->
}

MainWindow::~MainWindow()
{

}

void MainWindow::initWindow(const QString title)
{
    this->resize(800, 600);
    this->setWindowTitle(title);
}
