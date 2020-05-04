#include <iostream>
#include "Dialogue.hpp"
#include "Weapon.hpp"
#include "Outfit.hpp"
#include "List.hpp"
#include "Consumables.hpp"
#include "Being.hpp"
#ifndef CHARACTER_HPP_INCLUDED
#define CHARACTER_HPP_INCLUDED

class Character : public Being{
private:
    List <Dialogue> dialogue;
    List <Weapon> weapons;
    List <Outfit> clothes;
public:
    Character() : Being(){
        dialogue.add(1, "Howdy partner!");
        weapons.add(1, Weapon());
        clothes.add(1, Outfit());
    }
    Character(List <Dialogue> D, List <Weapon> W, List <Outfit> O) : Being(p, q, r){
        dialogue = D;
        weapons = W;
        clothes = O;
    }
    Character(Character &C) : Being(&B){

        dialogue = C.dialogue;
        weapons = C.weapons;
        clothes = C.clothes;
    }
};

#endif // CHARACTER_HPP_INCLUDED
