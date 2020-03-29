#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *e) {
    switch (e->key()) {
        case Qt::Key_Right:
            num++;
            break;
        case Qt::Key_Left:
            num--;
            break;
        default:
            break;

    }
    ui->label->setNum(num);
}
