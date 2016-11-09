#include "mainwindow.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>



MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *grid = new QGridLayout(this);
    grid->setSpacing(10);

    this->latin = new QTextEdit(this);
    this->aurebesh = new QTextEdit(this);

    connect(latin, &QTextEdit::textChanged, this, &MainWindow::readData);

    QLabel *latinLabel = new QLabel(this);
    latinLabel->setText("Latin alphabet");


    QLabel *aurebeshLabel = new QLabel(this);
    aurebeshLabel->setText("AureBesh alphabet");

    grid->addWidget(latinLabel, 0, 0);
    grid->addWidget(aurebeshLabel, 0, 1);
    grid->addWidget(this->latin, 1, 0);
    grid->addWidget(this->aurebesh, 1, 1);

    setLayout(grid);
}

MainWindow::~MainWindow()
{

}

QTextEdit *MainWindow::getLatin() const
{
    return latin;
}

QTextEdit *MainWindow::getAurebesh() const
{
    return aurebesh;
}

void MainWindow::initWindow(const QString title)
{
    this->resize(800, 600);
    this->setWindowTitle(title);
}

void MainWindow::readData()
{
    this->aurebesh->setText(this->latin->toPlainText());
}
