#ifndef BUILDING_HPP_INCLUDED
#define BUILDING_HPP_INCLUDED
#include <iostream>
#include "Dinstring.hpp"
#include "List.hpp"

enum BuildingType {PUB = 1, HOTEL, STABLE, GENERAL_STORE};

class Building{
private:
    BuildingType type;
    DinString Name;
    List <NPC> npc;
public:
    Building(){
        BuildingType = PUB;
        Name = "Birtija";
        npc.add(1, NPC());
    }
    Building(BuildingType a, Dinstring b, List<NPC> c){
        BuildingType = a;

    }
};

#endif // BUILDING_HPP_INCLUDED
