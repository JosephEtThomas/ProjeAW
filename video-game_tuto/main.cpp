#include "mainwindow.h"
#include "myrect.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //create a scene
    QGraphicsScene * scene = new QGraphicsScene();
    //creat item to add to scene
    MyRect * player = new MyRect();
    player->setRect(0,0,100,100);
    //add item to scene
    scene->addItem(player);

    //make rect facusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);

    player->setFocus();
    // create view to visualise the scene
    QGraphicsView * view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    player -> setPos((view->width()/2)-50,view->height() - player->rect().height());//on soustrait la hauteur du carre pour qu'il apparaisse das le vue 'voir coord'


    //spawn ennemys
    QTimer * timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()),player, SLOT(spawn()));
    timer->start(2000);

    return a.exec();

}
