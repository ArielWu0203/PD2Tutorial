#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label = new QLabel(this);
    label->setGeometry(10,10,300,300);

    QPixmap pix(":/res/player_front.png");
    label->setPixmap(pix);
    label->setScaledContents(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
