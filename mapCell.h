#ifndef MAPCELL_H
#define MAPCELL_H
#include <iostream>

using namespace std;


class mapCell
{
private:
    
public:
    mapCell();
    
    char id;

    bool isBlocked();

};

mapCell::mapCell()
{

    id = 0;

}

bool mapcell::isBlocked()

{

    if (id == '1')
    {
        return true;
    }

    else
    {
        return false;
    }
    

}

#endif 