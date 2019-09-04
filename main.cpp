#include "tetriswin.h"
#include <QApplication>
#include <QPainter>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TetrisWin w;
    w.show();

    return a.exec();
}
