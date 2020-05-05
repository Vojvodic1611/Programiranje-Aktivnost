#include <iostream>
#include "Consumables.hpp"
#include "List.hpp"
#ifndef BEING_HPP_INCLUDED
#define BEING_HPP_INCLUDED

class Being{
private:
    int hp;
    int stamina;
    List <Consumables> consumables;
public:
    Being(){
        hp = 100;
        stamina = 100;
        consumables.add(1, Consumables());
    }
    Being(int a, int b, List <Consumables> C){
        hp = a;
        stamina = b;
        consumables = C;
    }
    Being(Being &B){
        hp = B.hp;
        stamina = B.stamina;
        consumables = B.consumables;
    }
    void kill(){
        hp = 0;
        stamina = 0;
        ~Being();
    }
};

#endif // BEING_HPP_INCLUDED
