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
protected:
    List <Dialogue> dialogue;
    List <Weapon> weapons;
    List <Outfit> clothes;
public:
    Character() : Being(){
        dialogue.add(1, Dialogue("Howdy partner!"));
        weapons.add(1, Weapon());
        clothes.add(1, Outfit());
    }
    Character(List <Dialogue> D, List <Weapon> W, List <Outfit> O, int p, int q, List <Consumables> r) : Being(p, q, r){
        dialogue = D;
        weapons = W;
        clothes = O;
    }
    Character(Character &C, Being &B) : Being(B){

        dialogue = C.dialogue;
        weapons = C.weapons;
        clothes = C.clothes;
    }
    List <Dialogue> getCharacterDialogues()const{
        return dialogue;
    }
    List <Weapon> getCharacterWeapons()const{
        return weapons;
    }
    List <Outfit> getCharacterClothes()const{
        return clothes;
    }
    void setCharacterWeapons(const List <Weapon> W){
        weapons = W;
    }
    void setCharacterDialogues(const List <Dialogue> D){
        dialogue = D;
    }
    void setCharacterOutfit(const List <Outfit> O){
        clothes = O;
    }
};

#endif // CHARACTER_HPP_INCLUDED
