#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <QWidget>
#include <QLabel>

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

class character : public QLabel
{
    int x;
    int y;
    enum posture
    {
        standing,
        kicking
    } pos;
    enum direction
    {
        left,
        right
    } dir;

public:
    character(int x, int y);
    void face_left();
    void face_right();
    void stand();
    void kick();
    void moveleft();
    void moveright();
    void moveup();
    void movedown();
    int getx();
    int gety();
};

class box : public QLabel
{
    int x;
    int y;

public:
    box(int x, int y);
    void left();
    void right();
    void up();
    void down();
    int getx();
    int gety();
};

class wall : public QLabel
{
public:
    wall(int x, int y);
};

class key : public QLabel
{
public:
    key(int x, int y);
};

class chest : public QLabel
{
public:
    chest(int x, int y);
};

class trap : public QLabel
{
public:
    trap(int x, int y);
};

#endif // GAMEMAP_H
