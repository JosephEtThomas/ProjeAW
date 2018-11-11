#include <QApplication>
#include <QPushButton>

#include "window.h"
#include "sliderlcd.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    sliderlcd sliderlcd;
    sliderlcd.show();

    return app.exec();
}

// comment faire pour avoir une fenetre avec un bouton quitter (window.cpp)
// avec la barre slider et le count jusque 100 en meme temps ?
