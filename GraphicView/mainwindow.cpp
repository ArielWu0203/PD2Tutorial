#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene(0,0,500,500);
    ui->graphicsView->resize(300,300);
    ui->graphicsView->setScene(scene);

    player = new QGraphicsPixmapItem(QPixmap(":/res/player_front.png"));
    scene->addItem(player);
    player->setPos(100,0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
