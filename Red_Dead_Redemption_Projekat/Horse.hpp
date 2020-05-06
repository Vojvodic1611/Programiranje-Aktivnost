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
        interactions.add(1, Interactions());
        interactions.add(2, Interactions());
        interactions.add(3, Interactions());
        weapons.add(1, Weapon());
    }
    Horse(List <Interactions> I, List <Weapon> W, bool a, bool b, int p, int q, List <Consumables> R) : Animal(a, b, p, q , R){
        if (a){
            a = false;
        }
        if (b){
            b = false;
        }
        interactions = I;
        weapons = W;
    }
    void pet_horse(){
        hp += 10;
        stamina += 10;
    }
    List <Interactions> getHorseInteractions()const{
        return interactions;
    }
    List <Weapon> getHorseWeapons()const{
        return weapons;
    }
    void setHorseInteractions(const List <Interactions> I){
        interactions = I;
    }
    void setHorseWeapons(const List <Weapon> W){
        weapons = W;
    }

};


#endif // HORSE_HPP_INCLUDED
