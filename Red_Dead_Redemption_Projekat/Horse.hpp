#ifndef HORSE_HPP_INCLUDED
#define HORSE_HPP_INCLUDED
#include "Interactions.hpp"
#include "List.hpp"
#include "Animal.hpp"

class Horse : public Animal{
private:
    List <Interactions> interactions;
    List <Weapon> weapons;
public:
    Horse() : Animal(){
        interactions.add(1, Interactions(CUSTOM, "What have you got there?"));//pokusaj simulacije necega sto bi rekao igrac da pristupa inventoriju konja
        interactions.add(2, Interactions(CUSTOM, "Where is my Shotgun?"));//pokusaj simulacije necega sto bi rekao igrac da trazi oruzije koje je sacuvao kdo konja
        interactions.add(3, Interactions(CUSTOM, "There you go boz"));//pokusaj simulacije necega sto bi rekao igrac da hrani konja
        weapons.add(1, Weapon());
    }
    Horse(List <Interactions> I, List <Weapon> W) : Animal(false, false){
        interactions = I;
        weapons = W;
    }

};


#endif // HORSE_HPP_INCLUDED
