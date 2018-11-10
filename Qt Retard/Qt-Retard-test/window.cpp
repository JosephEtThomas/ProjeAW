#include "Window.h"

Window::Window() : QWidget()
{
    setFixedSize(500, 150);

    m_button = new QPushButton("Quit", this);
    m_button->setFont(QFont("Comic Sans MS", 12));
    m_button->setCursor(Qt::PointingHandCursor);
    m_button->move(10, 10);

     QObject::connect(m_button, SIGNAL(clicked()), qApp, SLOT(quit()));
}
