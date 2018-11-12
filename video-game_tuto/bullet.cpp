#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "ennemy.h"


bullet::bullet()
{
    setRect(0,0,10,50);

    //connect
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this, SLOT(move()));
    timer->start(50);
}

void bullet::move()
{
    //if bullet collides ennemy,destroy both
    QList < QGraphicsItem *> colliding_items =collidingItems();
    for (int i=0, n=colliding_items.size(); i<n;++i){
        if (typeid(*(colliding_items[i])) ==typeid(ennemy)){
            //remove both
            scene()->removeItem(colliding_items[i]);
            scene()-> removeItem(this);
            // delete them

            delete colliding_items[i];
            delete this;
            return;
        }
    }

    //move bullet up
    setPos(x(),y()-10);
    if (pos().y()<-50)
    {
        scene()->removeItem(this);
        delete this;
        qDebug() << "bullet deleted";
    }
}
