#include <iostream>
#include "List.hpp"
#include "Actions.hpp"
#include "Character.hpp"
#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

class Player : public Character{
private:
    int LvL;
    int reputation;
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
    void Player_LvL_UP(){
        LvL += 1;
    }
    bool Shower(){
        if(smelly){
            return false;
        }
        else{
            return true;
        }
    }
    void Dobro_delo(){
        int a = actions.size();
        actions.add(a+1, Action("Dobro delo", 10));
    }
    void Lose_delo(){
        int a = actions.size();
        actions.add(a+1, Action("Lose delo", -10));
    }
    void Buy_Weapon(Weapon W){
        int a = weapons.size();
        weapons.add(a + 1, W);
    }

};


#endif // PLAYER_HPP_INCLUDED
