#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(released()), this, SLOT(buttonPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonPressed()
{
    // qDebug() << "Hello, world!";
    //QPushButton *button = (QPushButton*)sender();
    ui->label->setText("Hello, world!");
}
