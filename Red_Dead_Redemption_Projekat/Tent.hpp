#include <iostream>
#include "NPC.hpp"
#ifndef TENT_HPP_INCLUDED
#define TENT_HPP_INCLUDED

class Tent{
private:
    int level;
    NPC owner;
public:
    Tent(){
        level = 1;
        owner = NPC();
    }
    Tent(int i, NPC bojan){
        level = i;
        owner = bojan;
    }
};

#endif // TENT_HPP_INCLUDED
