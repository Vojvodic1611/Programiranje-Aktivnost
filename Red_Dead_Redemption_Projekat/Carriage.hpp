#include <iostream>
#include "List.hpp"
#include "Horse.hpp"
#include "Consumables.hpp"
#ifndef CARRIAGE_HPP_INCLUDED
#define CARRIAGE_HPP_INCLUDED

class Carriage{
private:
    List <Horse> horses;
    List <Consumables> consumables;
public:
    Carriage(){
        horses.add(1, Horse());
        consumables.add(1, Consumables());
        consumables.add(2, Consumables());
    }
    Carriage(List <Horse> H, List <Consumables> C){
        horses = H;
        consumables = C;
    }
    List <Horse> getCarriageHorses()const{
        return horses;
    }
    List <Consumables> getCarriageConsumables()const{
        return consumables;
    }
    void setCarriageHorses(const List <Horse> H){
        horses = H;
    }
    void setCarriageConsumables(const List <Consumables> C){
        consumables = C;
    }
};

#endif // CARRIAGE_HPP_INCLUDED
