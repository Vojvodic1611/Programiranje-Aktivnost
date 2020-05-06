#include <iostream>
#include "Building.hpp"
#include "List.hpp"
#include "NPC.hpp"
#include "Shop.hpp"
#include "Dinstring.hpp"
#ifndef TOWN_HPP_INCLUDED
#define TOWN_HPP_INCLUDED

class Town{
private:
    DinString Name;
    List <Building> buildings;
    List <Shop> shops;
    List <NPC> npcs;
public:
    Town(){
        Name = "Schopenchauen";
        buildings.add(1, Building());
        buildings.add(2, Building());
        buildings.add(3, Building());
        buildings.add(4, Building());
        buildings.add(5, Building());
        shops.add(1, Shop());
        shops.add(2, Shop());
        shops.add(3, Shop());
        npcs.add(1, NPC());
        npcs.add(2, NPC());
        npcs.add(3, NPC());
        npcs.add(4, NPC());
        npcs.add(5, NPC());
        npcs.add(6, NPC());
    }
    Town(DinString a, List <Building> B, List <Shop> S, List <NPC> N){
        Name = a;
        buildings = B;
        shops = S;
        npcs = N;
    }
    DinString getTownName()const{
        return Name;
    }
    List <Building> getTownBuilding()const{
        return buildings;
    }
    List <Shop> getTownShops()const{
        return shops;
    }
    List <NPC> getTownNPCS()const{
        return npcs;
    }
    void setTownName(const DinString N){
        Name = N;
    }
    void setTownBuildings(const List <Building> B){
        buildings = B;
    }
    void setTownShops(const List <Shop> S){
        shops = S;
    }
    void setTownNPCs(const List <NPC> N){
        npcs = N;
    }
};

#endif // TOWN_HPP_INCLUDED
