#ifndef ENNEMY_H
#define ENNEMY_H


#include <QObject>//néc qd on travaille en signal et slots
#include <QGraphicsRectItem>
#include <QDebug>

class ennemy: public QObject //il faut faire heriter de qobj quand on connect
             ,public QGraphicsRectItem
{
    Q_OBJECT
public:
    ennemy();
public slots:
  void move();

};



#endif // ENNEMY_H
