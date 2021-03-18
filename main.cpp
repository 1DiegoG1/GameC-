#include <iostream>
#include "player.h"
#include "mapCell.h"
#include "gameMap.h"

using namespace std;

int main()

{

    bool isGamerOver = false;

    gameMap map;

    player Hero;


    cout << "inicia el juego" << endl;

    while (isGamerOver == false)
    {
        
        Hero.callInput();

        map.setPlayerCell(Hero.x, Hero.y);

        map.draw();
        

    }
    

    

    return 0;
}