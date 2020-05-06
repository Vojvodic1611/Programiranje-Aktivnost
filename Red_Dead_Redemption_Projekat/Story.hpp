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
    int getStoryProgress()const{
        return progress;
    }
    int getStoryChapter()const{
        return chapter;
    }
    int getStoryXP()const{
        return xp_reward;
    }
    List <Mission> getStoryMissions()const{
        return misije;
    }
    void setStoryProgress(const int P){
        progress = P;
    }
    void setStoryChapter(const int C){
        chapter = C;
    }
    void setStroyXP(const int X){
        xp_reward = X;
    }
    void setStoryMission(const List <Mission> M){
        misije = M;
    }
};

#endif // STORY_HPP_INCLUDED
