#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <QWidget>

class gameMap : public QWidget
{
    Q_OBJECT
public:
    explicit gameMap(QWidget *parent = nullptr);
    void left();
    void right();
    void up();
    void down();

signals:

};

#endif // GAMEMAP_H
