#include "gamemap.h"

gameMap::gameMap(QWidget *parent) :
    QWidget(parent)
{
    resize(720,720);
    gameData[10][10]={0};
    player=nullptr;
    boxes.clear();

}

void gameMap::left()
{

    if(player->x>=1){

        switch (gameData[player->x-1][player->y])
        {
            case role::SPACE:
            case role::KEY:{
                            gameData[player->x][player->y]=role::SPACE;
                            gameData[player->x-1][player->y]=role::PLAYER;
                            player->moveleft();
                            //key取消显示
                            break;
                            }

            case role::ENDBOX:{
                            bool keyInMap=false;
                            for(int i=0;i<10;i++){
                                for(int j=0;j<10;j++){
                                    if(gameData[i][j]==role::KEY)
                                    {
                                        keyInMap=true;
                                        i=9;
                                        break;
                                    }
                                }
                            }
                            if(!keyInMap){

                                player->moveleft();
                                emit success();

                            }
                            break;
                           }

            case role::BOX:{
                            if(player->x>=2)
                                {
                                    if(gameData[player->x-2][player->y]==role::SPACE)
                                    {
                                        for(int i=0;i<boxes.size();i++)
                                            {
                                                if(boxes[i]->x==player->x-1&&boxes[i]->y==player->y)
                                                 {
                                                    boxes[i]->moveleft();
                                                    player->moveleft();
                                                    break;
                                                 }
                                            }
                                        gameData[player->x][player->y]=role::SPACE;
                                        gameData[player->x-1][player->y]=role::PLAYER;
                                        gameData[player->x-2][player->y]=role::BOX;

                                    }

                                }


                        }

    }
    }
}

void gameMap::right()
{
    if(player->x<=8){

        switch (gameData[player->x+1][player->y])
        {

            case role::SPACE:
            case role::KEY:{
                            gameData[player->x][player->y]=role::SPACE;
                            gameData[player->x+1][player->y]=role::PLAYER;
                            player->moveright();
                            //key取消显示
                            break;
                            }

            case role::ENDBOX:{
                            bool keyInMap=false;
                            for(int i=0;i<10;i++){
                                for(int j=0;j<10;j++){
                                    if(gameData[i][j]==3)
                                    {
                                        keyInMap=true;
                                        i=9;
                                        break;
                                    }
                                }
                            }
                            if(!keyInMap){

                                player->moveright();
                                emit success();

                            }
                            break;
                           }

            case role::BOX:{
                            if(player->x<=7)
                                {
                                    if(gameData[player->x+2][player->y]==role::SPACE)
                                    {
                                        for(int i=0;i<boxes.size();i++)
                                            {
                                                if(boxes[i]->x==player->x+1&&boxes[i]->y==player->y)
                                                 {
                                                    boxes[i]->moveright();
                                                    player->moveright();
                                                    break;
                                                 }
                                            }
                                        gameData[player->x][player->y]=role::SPACE;
                                        gameData[player->x+1][player->y]=role::PLAYER;
                                        gameData[player->x+2][player->y]=role::BOX;

                                    }

                                }


                        }

        }
    }


}

void gameMap::up()
{
    if(player->y>=1){

        switch (gameData[player->x][player->y-1])
        {
            case role::SPACE:
            case role::KEY:{
            gameData[player->x][player->y-1]=role::PLAYER;
            gameData[player->x][player->y]=role::SPACE;
            player->moveup();
            //key取消显示
            break;
        }

            case role::ENDBOX:{
            bool keyInMap=false;
            for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    if(gameData[i][j]==3)
                    {
                        keyInMap=true;
                        i=9;
                        break;
                    }
                }
            }
            if(!keyInMap){
                player->moveup();
                emit success();
            }
            break;
        }

            case role::BOX:{

            if(player->y>=2)
            {
                if(gameData[player->x][player->y-2]==role::SPACE)
                {
                     for(int i=0;i<boxes.size();i++)
                     {
                         if(boxes[i]->x==player->x&&boxes[i]->y==player->y-1)
                         {
                            boxes[i]->moveup();
                            player->moveup();
                            break;
                        }
                    }
                    gameData[player->x][player->y]=role::SPACE;
                    gameData[player->x][player->y-1]=role::PLAYER;
                    gameData[player->x][player->y-2]=role::BOX;
                }
            }


        }
        }

    }
}

void gameMap::down()
{
    if(player->y<=8){

        switch (gameData[player->x][player->y+1])
        {
        case role::SPACE:
        case role::KEY:{
            gameData[player->x][player->y+1]=role::PLAYER;
            gameData[player->x][player->y]=role::SPACE;
            player->movedown();
            //key取消显示
            break;
        }

        case role::ENDBOX:{
            bool keyInMap=false;
            for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    if(gameData[i][j]==3)
                    {
                        keyInMap=true;
                        i=9;
                        break;
                    }
                }
            }
            if(!keyInMap){

                player->movedown();
                emit success();
            }
            break;
        }

        case role::BOX:{

            if(player->y<=7)
            {
                if(gameData[player->x][player->y+2]==role::SPACE)
                {
                     for(int i=0;i<boxes.size();i++)
                     {
                         if(boxes[i]->x==player->x&&boxes[i]->y==player->y+1)
                         {
                            boxes[i]->movedown();
                            player->movedown();
                            break;
                        }
                    }
                    gameData[player->x][player->y]=role::SPACE;
                    gameData[player->x][player->y+1]=role::PLAYER;
                    gameData[player->x][player->y+2]=role::BOX;
                }
            }


        }
        }

    }

}

void gameMap::initialize()
{

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            switch (gameData[i][j])
            {
            case role::WALL:{
                //
                break;
            }
            case role::BOX:{
                Box *b=new Box(i,j,this);
                b->move(i*72,j*72);
                boxes.append(b);
                b->show();
                break;
            }
            case role::KEY:{
                //
                break;
            }
            case role::ENDBOX:{
                //
                break;
            }
            case role::PLAYER:{
                player=new Player(i,j,this);
                player->move(i*72,j*72);
                player->show();
                break;
            }
            }
        }
    }
}
