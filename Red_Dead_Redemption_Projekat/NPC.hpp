#include <iostream>
#include "Character.hpp"
#include "Interactions.hpp"
#include "List.hpp"
#ifndef NPC_HPP_INCLUDED
#define NPC_HPP_INCLUDED

class NPC : public Character{
private:
    DinString Name;
    List <Interactions> interactions;
public:
    NPC() : Character(){
        Name = "Goran Krkut";
        interactions.add(1, Interactions());
        interactions.add(2, Interactions());
        interactions.add(3, Interactions());
    }
    NPC(DinString a, List <Interactions> b, List <Dialogue> k, List <Weapon> l, List <Outfit> D, int W, int C, List <Consumables> J) : Character( k, l , D, W, C, J){
        Name = a;
        interactions = b;
    }
    DinString getNPCName()const{
        return Name;
    }
    List <Interactions> getNPCInteractions()const{
        return interactions;
    }
    void setNPCName(const DinString N){
        Name = N;
    }
    void setNPCInteractions(const List <Interactions> I){
        interactions = I;
    }

};

#endif // NPC_HPP_INCLUDED
