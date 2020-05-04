#include <iostream>
#include "Dinstring.hpp"
#ifndef ACTIONS_HPP_INCLUDED
#define ACTIONS_HPP_INCLUDED

class Action{
private:
    DinString desc;
    int rep_points;
public:
    Action(){
        desc = "Udario si coveka na ulici";
        rep_points = -10;
    }
    Action(DinString a, int b){
        desc = a;
        rep_points = b;
    }
};

#endif // ACTIONS_HPP_INCLUDED
