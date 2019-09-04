#include "tetriswin.h"
#include <QApplication>
#include <QPainter>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TetrisWin w;
    QPainter *painter = new QPainter();

    w.show();

    return a.exec();
}
