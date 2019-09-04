#ifndef TETRISWIN_H
#define TETRISWIN_H

#include <QMainWindow>

namespace Ui {
class TetrisWin;
}

class TetrisWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit TetrisWin(QWidget *parent = nullptr);
    ~TetrisWin();

private:
    Ui::TetrisWin *ui;
};

#endif // TETRISWIN_H
