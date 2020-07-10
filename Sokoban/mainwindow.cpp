#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"stagedialog.h"
#include"gamemap.h"
#include"mapdata.h"
#include<QKeyEvent>

mainWindow::mainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainWindow)
    , m(new gameMap(this))
    , s(new stageDialog(this))
    , data(new mapData)
{
    ui->setupUi(this);
    data->setData(this,m,1);
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::keyPressEvent(QKeyEvent *event)
{
    if(steps<1)
        return;

    if(event->key()==Qt::Key_Left)
        m->left();
    else if(event->key()==Qt::Key_Right)
        m->right();
    else if(event->key()==Qt::Key_Up)
        m->up();
    else if(event->key()==Qt::Key_Down)
        m->down();

    steps--;
}

