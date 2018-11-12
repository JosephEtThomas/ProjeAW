#include "sliderlcd.h"
#include "window.h"

sliderlcd::sliderlcd() : QWidget()
{
    setFixedSize(500,150);

    m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd ->move(20,20);

    m_slider = new QSlider(Qt::Horizontal,this);
    m_slider ->setRange(200,600);
    m_slider->setGeometry(50,50,150,20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int))) ;
}

// comment faire si je veux faire varier la taille de ma fenetre en plus avec le SLOT ?
// j'ai defini la range de grandeur, et ajouter le slot dans mon .h
