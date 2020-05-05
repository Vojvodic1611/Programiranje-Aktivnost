#include <iostream>
#include "List.hpp"
#include "Tent.hpp"
#include "Dinstring.hpp"
#ifndef CAMP_HPP_INCLUDED
#define CAMP_HPP_INCLUDED

class Camp{
private:
    DinString LocationName;
    List <Tent> tents;
public:
    Camp(){
        LocationName = "Horseshoe Overlook";
        tents.add(1, Tent());
        tents.add(2, Tent());
        tents.add(3, Tent());
    }
    Camp(Dinstring name1, List <Tent> T){
        LocationName = name1;
        tents = T;
    }
};

#endif // CAMP_HPP_INCLUDED
