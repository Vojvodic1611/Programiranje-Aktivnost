#include <iostream>
#include "List.hpp"
#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

class Player{
private:
    int hp;
    int max_hp;
    int health_core;
    int max_health_core;
    int st;
    int max_st;
    int stamina_core;
    int max_stamina_core;
    int hair_length;
    bool smelly;
    List<Dialogue> dialogues;


};


#endif // PLAYER_HPP_INCLUDED
