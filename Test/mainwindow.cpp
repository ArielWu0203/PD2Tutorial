#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num=0;
    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(add()));
    connect(this, SIGNAL(add_signal()), this, SLOT(add()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add() {
    num++;
    ui->label->setNum(num);
}

void MainWindow::keyPressEvent(QKeyEvent *e) {
    if(e->key() == Qt::Key_A) {
        emit add_signal();
    }
}
