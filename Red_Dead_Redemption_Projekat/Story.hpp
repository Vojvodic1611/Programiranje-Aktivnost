#include <iostream>
#include "Mission.hpp"
#include "List.hpp"
#ifndef STORY_HPP_INCLUDED
#define STORY_HPP_INCLUDED

class Story{
private:
    int progress;
    int chapter;
    int xp_reward;
    List <Mission> misije;
public:
    Story(){
        progress = 0;
        chapter = 1;
        xp_reward = 0;
        misije.add(1, Mission());
    }
    Story(int p, int c, int x, List <Mission> M){
        progress = p;
        chapter = c;
        xp_reward = x;
        misije = M;
    }
};

#endif // STORY_HPP_INCLUDED
