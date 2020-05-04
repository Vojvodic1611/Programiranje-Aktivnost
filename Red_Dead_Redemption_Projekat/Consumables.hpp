#include <iostream>
#include "Dinstring.hpp"
#ifndef CONSUMABLES_HPP_INCLUDED
#define CONSUMABLES_HPP_INCLUDED

class Consumables{
private:
    int HP_regen;
    int ST_regen;
    DinString Name;
public:
    Consumables(){
        HP_regen = 10;
        ST_regen = 5;
        Name = "Ivan"
    }
    Consumables(int a, int b, DinString c){
        HP_regen = a;
        ST_regen  b;
        Name = c;
    }
};

#endif // CONSUMABLES_HPP_INCLUDED
