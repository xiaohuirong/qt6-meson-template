#include "mainwindow.h"
#include "qpushbutton.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->clickButton, &QPushButton::clicked, this, &MainWindow::handleClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    ui->logOutput->append("Hello world!");
}
