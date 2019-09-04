#include "tetriswin.h"
#include "ui_tetriswin.h"

#include <QDesktopWidget>

TetrisWin::TetrisWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TetrisWin)
{
    //Перемещние окна в центр экрана
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/4);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);

    ui->setupUi(this);
}

TetrisWin::~TetrisWin()
{
    delete ui;
}
