#include <iostream>
#include "Dinstring.hpp"
#ifndef DIALOGUE_HPP_INCLUDED
#define DIALOGUE_HPP_INCLUDED

class Dialogue{
private:
    DinString dialogue;
public:
    Dialogue(){
        dialogue = "Good day to you feller!";
    }
    Dialogue(DinString a){
        dialogue = a;
    }
    Dialogue(Dialogue &D){
        dialogue = D.dialogue;
    }
    DinString getDialogue()const{
        return dialogue;
    }

};

#endif // DIALOGUE_HPP_INCLUDED
