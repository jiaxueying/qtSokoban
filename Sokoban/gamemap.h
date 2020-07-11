#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <QWidget>
#include<QList>

enum role {SPACE,WALL,BOX,KEY,ENDBOX,PLAYER};
//当前的游戏数据,没有东西0，墙壁1，箱子2，钥匙3，宝箱4，玩家5


class Player:public QWidget{
public:
    int x;
    int y;
    int direction;
    void moveleft(){}
    void moveright(){}
    void moveup(){}
    void movedown(){}
    Player(int x,int y,QWidget* parent=nullptr){}
};

class Box:public QWidget{
public:
    int x;
    int y;
    void moveleft(){}
    void moveright(){}
    void moveup(){}
    void movedown(){}
    Box(int x,int y,QWidget* parent=nullptr){}
};



class gameMap : public QWidget
{
    Q_OBJECT
public:
    explicit gameMap(QWidget *parent = nullptr);
    void left();
    void right();
    void up();
    void down();
    void initialize();
    int gameData[10][10];

signals:
    void success();//当通关即无3情况下到4时触发，发送给mainwindow

private:
    Player *player;
    QList<Box*> boxes;
};

#endif // GAMEMAP_H
