#include "window.h"
#include "sliderlcd.h"

Window::Window() : QWidget()
{
    setFixedSize(500, 150);

    m_button = new QPushButton("Quitter", this);

    m_button ->setToolTip("Appuyer pour quitter");
    m_button->setFont(QFont("Comic Sans MS", 12));
    m_button->setCursor(Qt::PointingHandCursor);
    m_button->move(10, 10);

    // commande de fermeture de la fenetre quand on appuye sur "quitter"
    QObject::connect(m_button, SIGNAL(clicked()), qApp, SLOT(quit()));


}
