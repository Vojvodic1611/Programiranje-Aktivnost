#include <iostream>
#include "List.hpp"
#include "Horse.hpp"
#include "Consumables.hpp"
#ifndef CARRIAGE_HPP_INCLUDED
#define CARRIAGE_HPP_INCLUDED

class Carriage{
private:
    List <Horse> horses;
    List <Consumables> consumables;
public:
    Carriage(){
        horses.add(1, Horse());
        consumables(1, Consumables());
        consumables(2, Consumables());
    }
    Carriage(List <Horse> H, List <Consumables> C){
        horses = H;
        consumables = C;
    }
};

#endif // CARRIAGE_HPP_INCLUDED
