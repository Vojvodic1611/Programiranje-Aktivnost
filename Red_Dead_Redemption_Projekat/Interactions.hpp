#include <iostream>
#include "List.hpp"
#include "Dialogue.hpp"
#ifndef INTERACTIONS_HPP_INCLUDED
#define INTERACTIONS_HPP_INCLUDED

enum InteractionType{GREETING = 1, ANTAGONIZATION, ROBBERY, CUSTOM};

class Interactions{
private:
    InteractionType type;
    List<Dialogue> Possible_Dialogue;
public:
    Interactions(){
        type = GREETING;
        Dialogue HELP("Hey there mister!");
        Possible_Dialogue.add(1, HELP);
    }
    Interactions(InteractionType a, List<Dialogue> b){
        type = a;
        Possible_Dialogue = b;
    }
    Interactions(Interactions &I){
        type = I.type;
        Possible_Dialogue = I.Possible_Dialogue;
    }
};

#endif // INTERACTIONS_HPP_INCLUDED
