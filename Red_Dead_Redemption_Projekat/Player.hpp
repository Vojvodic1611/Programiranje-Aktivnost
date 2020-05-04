#include <iostream>
#include "List.hpp"
#include "Actions.hpp"
#include "Character.hpp"
#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

class Player : public Character{
private:
    int LvL;
    List <Action> actions;
    bool smelly;//ovo postoji zato sto u igrici bukvalno ima mogucnost da se kupate i onda ako se ne kupate dovoljno dugo ljudi pored kojih prolazite komentarisu kako smrdite i meni je to bilo interesantno
public:
    Player() : Character(){
        LvL = 0;
        smelly = false;
        actions.add(1, Action());
    }
    Player(int a, bool b, List <Action> A) : Character( k, l , D, W, C){
        LvL = a;
        smelly = b;
        actions = A;
    }

};


#endif // PLAYER_HPP_INCLUDED
