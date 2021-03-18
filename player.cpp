#include <iostream>

using namespace std;


player::player()

{

 x = 1;
 y = 1;

}

void player::CallInput()

{
    char userInput = ' ';

    cin >> userInput;

    switch (userInput)
    {
    case 'w':

        y++;
        
        cout << "el jugador se mueve hacia arriba" << endl;

        break;
    
    case 's':
        
        y--

        cout << "EL jugador se mueve hacia abajo" << endl;

        break;
    
    case 'd':
        
        x++

        cout << "el jugador se mueve a la derecha" << endl;

        break;

    case 'a':
        
        x--;

        cout << "el jugador se mueve a la izquierda" << endl;

        break;    
    
    default:
        break;

    
    cout << "Mi jugador esta en las cordenadas: " << x << ',' << y << endl;
    }

}