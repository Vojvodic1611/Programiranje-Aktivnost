#include <iostream>
#include "List.hpp"
#include "NPC.hpp"
#include "Weapon.hpp"
#include "Consumables.hpp"
#ifndef MISSION_HPP_INCLUDED
#define MISSION_HPP_INCLUDED

class Mission{
private:
    List <NPC> npcs;
    List <Weapon> weapon_reward;
    List <Consumables> consumable_reward;
public:
    Mission(){
        npcs.add(1, NPC());
        weapon_reward.add(1, Weapon());
        consumable_reward.add(1, Consumables());
    }

    Mission(List <NPC> N, List <Weapon> W, List <Consumables> C){
        npcs = N;
        weapon_reward = W;
        consumable_reward = C;
    }
    List <NPC> getMissionNPCs()const{
        return npcs;
    }
    List <Weapon> getMissionWeapons()const{
        return weapon_reward;
    }
    List <Consumables> getMissionConsumables()const{
        return consumable_reward;
    }
    void setMissionNPCs(const List <NPC> N){
        npcs =  N;
    }
    void setMissionWeapons(const List <Weapon> W){
        weapon_reward = W;
    }
    void setMissionConsumables(const List <Consumables> C){
        consumable_reward = C;
    }
};

#endif // MISSION_HPP_INCLUDED
