#include "myrect.h"
#include <QKeyEvent>
#include "bullet.h"
#include<QDebug>
#include <QGraphicsScene>
#include <QObject>
#include "ennemy.h"
void MyRect::keyPressEvent(QKeyEvent *event)
{
 if(event->key()==Qt::Key_Left)
 {
     if (pos().x()>0)
     setPos (x()-10,y());
 }

 else if(event->key()==Qt::Key_Right)
 {
     if (pos().x()+100 <800)
     setPos (x()+10,y());
 }

// else if(event->key()==Qt::Key_Up)
// {
//     setPos (x(),y()-10);
// }

// else if(event->key()==Qt::Key_Down)
// {
//     setPos (x(),y()+10);
// }
 else if (event->key()==Qt::Key_Space)
 {
     //creat a bullet
     bullet *Bullet = new bullet();
     Bullet->setPos(x(),y());
     scene() -> addItem(Bullet);
 }
}

void MyRect::spawn()
{
 //create an ennemy
    ennemy * Enemy =new ennemy();
    scene()->addItem(Enemy);
}
