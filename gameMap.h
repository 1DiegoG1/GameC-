#ifndef GAMEMAP_H

#define GAMEMAP_H

#include <iostream>

#include <fstream>
#include "mapCell.h"
#include "player.h"

using namespace std;


 
class gameMap

{

    protected:

        void loadMapFromFile();

    private:
    
    public:

        gameMap();

        mapCell* playerCell;
    

        mapCell cells[15][10];
    
        void draw();

        void setPlayerCell(int playerx, int playery);

       
};

gameMap::gameMap()

{

    playerCell = NULL;
    loadMapFromFile();
    
}

void gameMap::draw()

{

    for (int i = 0; i < 15; i++)
    
    {
        for (int p = 0; p < 10; p++)

        {

            cout << cells[i][p].id;
            
        }

        cout << endl;
        
    }
    



}


void gameMap::setPlayerCell(int playerx, int playery)

{
    if (cells[playerx][playery].isBlocked() == false)
    {
         if (playerCell != NULL)
        {
            playerCell->id = 0;
        }
    

        playerCell = &cells[playery][playerx];
    
        playerCell->id = '3';

    } else
    
    {

    }
    
   
}

void gameMap::loadMapFromFile()

{

    /*ofstream FileCreated("map.txt");
    if (FileCreated.is_open())
    {
        
    } 
    else
        cout << "Fatal error" << endl;    
    
    */
    string line;

    int row = 0;

    ifstream myFile("map.txt");

    if (myFile.is_open())
    {


        while (getline(myFile, line))
        {
            for (int p = 0; p < line.length(); p++)
                {
                    
                    if (line[p] == '0')
                    {
                        cells[row][p].id = 0;
                    }
                    
                    else
                    {
                        cells[row][p].id = line[p];
                    }

                }
            
            row++;
            
        }
        
    
    }
    else
        cout << "Fatal error" << endl;

}


#endif 
