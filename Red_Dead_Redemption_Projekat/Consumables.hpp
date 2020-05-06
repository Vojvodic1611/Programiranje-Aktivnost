#include <iostream>
#include "Dinstring.hpp"
#include "List.hpp"
#ifndef CONSUMABLES_HPP_INCLUDED
#define CONSUMABLES_HPP_INCLUDED

class Consumables{
private:
    int HP_regen;
    int ST_regen;
    DinString Name;
public:
    Consumables(){
        HP_regen = 10;
        ST_regen = 5;
        Name = "Ivan";
    }
    Consumables(int a, int b, DinString c){
        HP_regen = a;
        ST_regen = b;
        Name = c;
    }
    int getHPregen()const{
        return HP_regen;
    }
    int getSTregen()const{
        return ST_regen;
    }
    DinString getConsumableName()const{
        return Name;
    }
    void setHPregen(const int H){
        HP_regen = H;
    }
    void setSTregen(const int S){
        ST_regen = S;
    }
    void setConsumableName(const DinString n){
        Name = n;
    }
};

#endif // CONSUMABLES_HPP_INCLUDED

