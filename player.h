#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>


using namespace std;

class player
{
    private:
    

    public:
        player();
        void callInput();
        int x, y;


    protected:

    
};

player::player()
{

    x = 1;

    y = 1;

}

void player::callInput()
{
    
    char userInput;

    cin >> userInput;

    switch (userInput)
    {
    case 'd':

        x++;

        break;

        case 'a':

        x--;

        break;

        case 'w':

        y--;

        break;

        case 's':

        y++;

        break;
    
    default:
        break;

       

    }

 cout << "EL jugador se encuentra en las coordenadas: " << x << ',' << y << endl;

}



#endif 