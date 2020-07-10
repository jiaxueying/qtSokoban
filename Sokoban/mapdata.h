#ifndef MAPDATA_H
#define MAPDATA_H

class mainWindow;
class gameMap;

class mapData
{
public:
    mapData();
    void setData(mainWindow *w,gameMap *m,int stage);
};

#endif // MAPDATA_H
