#include <QApplication>
#include <QtGui>
#include<QGraphicsView>
#include<QPixmap>
#include<QPainter>


int main(int argc, char *argv[])
{
        QApplication app(argc, argv);

        QGraphicsScene scene;

        QPixmap monPixmap("1_Plain.png");

/*PQ CETTE ****** D IMAGE CE MET PAS DEDANS AHAH
Je refais la mm chose que dans le tuto openclassroom */

        scene.addPixmap(monPixmap);

        QRect rectangle(-8, -4, 100, 100);
        QPen pen(Qt::blue, 1, Qt::SolidLine);
        scene.addRect(rectangle, pen);
        scene.setBackgroundBrush(Qt::white);

        QGraphicsView vue(&scene);
        vue.setFixedSize(250, 250);
        vue.show();

        QPixmap pixmap(vue.width(), vue.height());

        QPainter painter(&pixmap);
        painter.setRenderHint(QPainter::Antialiasing);
        vue.render(&painter);

        pixmap.save("image.png");

        painter.end();

        return app.exec();
}
