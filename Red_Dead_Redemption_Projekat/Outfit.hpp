#include <iostream>
#include "Dinstring.hpp"
#ifndef OUTFIT_HPP_INCLUDED
#define OUTFIT_HPP_INCLUDED

enum outfitPart {HAT = 1, VEST, SHIRT, PANTS, SHOES};

class Outfit{
private:
    outfitPart type;
    DinString name;
public:
    Outfit(){
        type = HAT;
        name = "Beautiful hat";
    }
    Outfit(outfitPart a, DinString b){
        type = a;
        name = b;
    }
    outfitPart getOutfitType()const{
        return type;
    }
    DinString getOutfitName()const{
        return name;
    }
    void setOutfitType(const outfitPart O){
        type = O;
    }
    void setOutfitName(const DinString N){
        name = N;
    }
};

#endif // OUTFIT_HPP_INCLUDED
