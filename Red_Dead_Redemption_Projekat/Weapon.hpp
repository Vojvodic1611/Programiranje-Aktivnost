#include <iostream>
#ifndef WEAPON_HPP_INCLUDED
#define WEAPON_HPP_INCLUDED
#include "Dinstring.hpp"
#include "List.hpp"

class Weapon{
public:
    int Damage;
    int Accuracy;
    int Range;
    DinString Name;
private:
    Weapon(){
        Damage = 70;
        Accuracy = 60;
        Range = 70;
        Name = "Revolver";
    }
    Weapon(int a, int b, int c, DinString d){
        Damage = a;
        Accuracy = b;
        Range = 70;
        Name = d;
    }
    Weapon(const Weapon &W){
        Damage = W.Damage;
        Accuracy = W.Accuracy;
        Rang = W.Range;
        Name = W.Name
    }
};

#endif // WEAPON_HPP_INCLUDED
