#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(0,0,800,600);
    view = new QGraphicsView(scene, this);
    view->setGeometry(100,100,300,300);

    Player = new player();
    Player->setPixmap(QPixmap(":/res/player_front.png"));
    Player->set_pos(100);
    Player->setPos(Player->get_pos(), 0);
    scene->addItem(Player);
}

MainWindow::~MainWindow()
{
    delete ui;
}
