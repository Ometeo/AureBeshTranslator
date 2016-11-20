#include "mainwindow.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QFontDatabase>



MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setStyleSheet("QWidget { background-color : #212121; color : white; }");

    QGridLayout *grid = new QGridLayout(this);
    grid->setSpacing(10);

    this->latin = new QTextEdit("Hello world", this);
    this->aurebesh = new QTextEdit(this);



    QLabel *latinLabel = new QLabel(this);
    latinLabel->setText("LATIN ALPHABET");


    QLabel *aurebeshLabel = new QLabel(this);
    aurebeshLabel->setText("AUREBESH ALPHABET");

    int id = QFontDatabase::addApplicationFont(":/font/Aurek-Besh.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    this->aurebesh->setFontFamily(family);
    this->aurebesh->setText("Hello World");

    connect(latin, &QTextEdit::textChanged, this, &MainWindow::readData);
    connect(aurebesh, &QTextEdit::textChanged, this, &MainWindow::readDataAurebesh);

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
    this->resize(1200, 800);
    this->setWindowTitle(title);
}

void MainWindow::readData()
{
    this->aurebesh->blockSignals(true);
    this->aurebesh->setText(this->latin->toPlainText());
    this->aurebesh->blockSignals(false);
}

void MainWindow::readDataAurebesh()
{
    this->latin->blockSignals(true);
    this->latin->setText(this->aurebesh->toPlainText());
    this->latin->blockSignals(false);
}
