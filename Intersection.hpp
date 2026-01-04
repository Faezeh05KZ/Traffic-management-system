#ifndef INTERSECTION_HPP
#define INTERSECTION_HPP

#include <iostream>
#include <vector>

#include "Vehicle.hpp"
#include "TrafficElement.hpp"

class Intersection 
{
    private :
        
        std::vector <Vehicle*> vehicles ;
        std::vector <TrafficElement*> rules ;

    public:

        void addVehicle(Vehicle* v) ;
        void addRule(TrafficElement* t) ;

        void evaluate() ;
        void printStatus() const ;
};

#endif