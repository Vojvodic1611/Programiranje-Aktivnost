#include <iostream>
#include "Player.hpp"
#include "List.hpp"
#include "Dinstring.hpp"
#include "Town.hpp"
#include "Camp.hpp"
#include "Enviorment.hpp"
#include "Story.hpp"
#include "NPC.hpp"
#include "Carriage.hpp"
#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

class Game{
private:
    Player player;
    List <Town> towns;
    List <NPC> npcs;
    List <Camp> camps;
    List <Enviorment> enviorments;
    List <Carriage> carriages;
    Story story;
public:
    Game(){
        player = Player();
        towns.add(1, Town());
        towns.add(2, Town());
        towns.add(3, Town());
        camps.add(1, Camp());
        enviorments.add(1, Enviorment());
        enviorments.add(2, Enviorment());
        enviorments.add(3, Enviorment());
        carriages.add(1, Carriage());
        story = Story();
    }

    Game(Player p, List <Towns> T, List <NPC> N, List <Camp> C, List <Enviorment> E, List <Carriage> C1, Story s){
        player = p;
        towns = T;
        npcs = N;
        camps = C;
        enviorments = E;
        carriages = C1;
        story = S;
    }
};

#endif // GAME_HPP_INCLUDED
