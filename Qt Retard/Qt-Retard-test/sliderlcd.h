#ifndef SLIDERLCD_H
#define SLIDERLCD_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>


class sliderlcd : public QWidget
{
    Q_OBJECT

    public:
    sliderlcd();

    public slots:
    void widthvary(int width);

    private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
};

#endif // WINDOW_SLIDERLCD_H

// ne fonctionne plus depuis l'ajouter de la commande Q_Object et du rajout des slots
