#ifndef BUILDING_HPP_INCLUDED
#define BUILDING_HPP_INCLUDED
#include <iostream>
#include "Dinstring.hpp"
#include "NPC.hpp"
#include "List.hpp"

enum BuildingType {PUB = 1, HOTEL, STABLE, GENERAL_STORE};

class Building{
private:
    BuildingType type;
    DinString Name;
    List <NPC> npc;
public:
    Building(){
        type = PUB;
        Name = "Random PUB";
        npc.add(1, NPC());
    }
    Building(BuildingType a, DinString b, List<NPC> c){
        type = a;
        Name = b;
        npc = c;
    }
    BuildingType getBuildingType()const{
        return type;
    }
    DinString getBUildingName()const{
        return Name;
    }
    List <NPC> getBuildingNPC()const{
        return npc;
    }
    void setBuildingType(const BuildingType T){
        type = T;
    }
    void setBuildingName(const DinString n){
        Name = n;
    }
    void setBuildingNPC(const List <NPC> N){
        npc =N;
    }
};

#endif // BUILDING_HPP_INCLUDED
