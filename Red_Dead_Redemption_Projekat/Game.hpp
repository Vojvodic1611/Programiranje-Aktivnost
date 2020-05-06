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

    Game(Player p, List <Town> T, List <NPC> N, List <Camp> C, List <Enviorment> E, List <Carriage> C1, Story s){
        player = p;
        towns = T;
        npcs = N;
        camps = C;
        enviorments = E;
        carriages = C1;
        story = s;
    }

    List <Town> getGameTowns()const{
        return towns;
    }
    List <NPC> getGameNPCs()const{
        return npcs;
    }
    List <Camp> getGameCamps()const{
        return camps;
    }
    List <Carriage> getGameCarriages()const{
        return carriages;
    }

    void setGameTowns(const List <Town> T){
        towns = T;
    }
    void setGameNPCs(const List <NPC> N){
        npcs = N;
    }
    void setGameCamps(const List <Camp> C){
        camps = C;
    }
    void setGameCarriages(const List <Carriage> c){
        carriages = c;
    }

};


#endif // GAME_HPP_INCLUDED
