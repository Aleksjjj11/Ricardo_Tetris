#include "tetriswin.h"
#include "ui_tetriswin.h"

TetrisWin::TetrisWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TetrisWin)
{
    ui->setupUi(this);
}

TetrisWin::~TetrisWin()
{
    delete ui;
}
