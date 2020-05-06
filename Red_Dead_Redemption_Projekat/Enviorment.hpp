#include <iostream>
#include "List.hpp"
#include "Animal.hpp"
#ifndef ENVIORMENT_HPP_INCLUDED
#define ENVIORMENT_HPP_INCLUDED

class Enviorment{
private:
    int temperature;
    List <Animal> animals;
public:
    Enviorment(){
        temperature = 20;
        animals.add(1, Animal());
        animals.add(2, Animal());
    }
    Enviorment(int t, List <Animal> A){
        temperature = t;
        animals = A;
    }
    int getTemperature()const{
        return temperature;
    }
    List <Animal> getEnviormentAnimals()const{
        return animals;
    }
    void setTemperature(const int T){
        temperature = T;
    }
    void setEnviormentAnimals(const List <Animal> A){
        animals = A;
    }
};

#endif // ENVIORMENT_HPP_INCLUDED
