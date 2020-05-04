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
    Animal(bool a, bool b) : Being(p, q, R){
        aggresive = a;
        legendary = b;
    }

};


#endif // ANIMAL_HPP_INCLUDED
