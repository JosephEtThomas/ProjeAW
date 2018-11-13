#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPainter>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);

    painter.fillRect(50, 100, 20, 40, Qt::red);
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    std::cout << event->x() << "," << event->y() << std::endl;

}

void MainWindow::keyPressEvent(QKeyEvent *event) {
        qDebug() << event->key();
}
