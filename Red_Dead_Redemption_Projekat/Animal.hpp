#ifndef ANIMAL_HPP_INCLUDED
#define ANIMAL_HPP_INCLUDED
#include "Character.hpp"


class Animal : public Being{
private:
    bool aggresive;
    bool legendary;
public:
    Animal() : Being(){
        aggresive = false;
        legendary =  false;
    }
    Animal(bool a, bool b, int p, int q, List <Consumables> R) : Being(p, q, R){
        aggresive = a;
        legendary = b;
    }
    bool getAggresive()const{
        return aggresive;
    }
    bool getLegendary()const{
        return legendary;
    }
    void setLegendary(const bool L){
        legendary = L;
    }
    void setAggresive(const bool A){
        aggresive = A;
    }
};


#endif // ANIMAL_HPP_INCLUDED
