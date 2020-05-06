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
    int getRepPoints()const{
        return rep_points;
    }
    DinString getDesc()const{
        return desc;
    }
    void setRepPoints(const int R){
        rep_points = R;
    }
    void setDesc(const DinString d){
        desc = d;
    }
};

#endif // ACTIONS_HPP_INCLUDED
