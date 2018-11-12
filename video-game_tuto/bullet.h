#ifndef BULLET_H
#define BULLET_H

#include <QObject>//néc qd on travaille en signal et slots
#include <QGraphicsRectItem>
#include <QDebug>

class bullet: public QObject //il faut faire heriter de qobj quand on connect
             ,public QGraphicsRectItem
{
    Q_OBJECT
public:
    bullet();
public slots:
  void move();

};

#endif // BULLET_H
