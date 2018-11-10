#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class Window : public QWidget
{
    public:
    Window();

    private:
    QPushButton *m_button;
};

#endif
