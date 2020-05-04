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
};

#endif // OUTFIT_HPP_INCLUDED
