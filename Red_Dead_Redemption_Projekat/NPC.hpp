#include <iostream>
#include "Character.hpp"
#include "Interactions.hpp"
#include "List.hpp"
#ifndef NPC_HPP_INCLUDED
#define NPC_HPP_INCLUDED

class NPC : public Character{
private:
    DinString Name;
    List <Interactions> interactions;
public:
    NPC() : Character(){
        Name = "Goran Krkut";
        interactions.add(1, Interactions(GREETING, "Howdy feller!"));
        interactions.add(2, Interactions(ANTAGONIZATION, "You are a scumbag!"));
        interactions.add(3, Interactions(ROBBERY, "You are being robbed!"));
    }
    NPC(DinString a, List <Interactions> b) : Character( k, l , D, W, C){
        Name = a;
        interactions = b;
    }

};

#endif // NPC_HPP_INCLUDED
