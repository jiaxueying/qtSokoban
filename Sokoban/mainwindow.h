#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class mainWindow; }
QT_END_NAMESPACE

class gameMap;
class mapData;
class stageDialog;

class mainWindow : public QWidget
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

private:
    Ui::mainWindow *ui;
    gameMap *m;
    mapData *data;
    stageDialog *s;
    int stage;
    int steps;

protected:
    void keyPressEvent(QKeyEvent *event);

};
#endif // MAINWINDOW_H
