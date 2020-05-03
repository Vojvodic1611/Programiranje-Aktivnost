#include <iostream>
#include "Interactions.hpp"
#include "List.hpp"
#ifndef NPC_HPP_INCLUDED
#define NPC_HPP_INCLUDED

class NPC{
private:
    DinString name;
    int hp;
    int st;
    List <Interactions> interactions;
public:
    NPC(){
        Name = "Bole Zanetic";
        hp = 100;
        st = 100;
        interactions.add(1, Interactions(GREETING, Dialogue("Hey there Mister!")));
        interactions.add(2, Interactions(ANTAGONIZATION, Dialogue("I hate you!")));
        interactions.add(3, Interactions(ROBBERY, Dialogue("You are being robbed!")));
    }
    NPC(DinString a, int b, int c, List<interactions> d){
        name = a;
        hp = b;
        st =c;
        interactions = d;
    }

};

#endif // NPC_HPP_INCLUDED
