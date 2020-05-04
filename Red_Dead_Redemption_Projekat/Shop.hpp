#include <iostream>
#include "List.hpp"
#include "Building.hpp"
#include "Weapon.hpp"
#include "Consumables.hpp"
#include "Interactions.hpp"
#ifndef SHOP_HPP_INCLUDED
#define SHOP_HPP_INCLUDED

class Shop : Building{
private:
    List <Weapon> weapons;
    List <Consumables> consumables;
    List <Interactions> interactions;
public:
    Shop() : Building(){
        weapons.add(1, Weapon());
        weapons.add(1, Weapon());
        weapons.add(1, Weapon());
        consumables.add(1, Consumables());
        consumables.add(1, Consumables());
        consumables.add(1, Consumables());
        interactions.add(1, Interactions(CUSTOM, "Let me buy this from you mister!"));
        interactions.add(2, Interactions(ROBBERY, "You are being robbed feller!"));
    }
    Shop(List <weapons> W, List <Consumables> C, List <interactions> I) : Building(a, b, c){
        weapons = W;
        consumables = C;
        interactions = I;
    }

};

#endif // SHOP_HPP_INCLUDED
