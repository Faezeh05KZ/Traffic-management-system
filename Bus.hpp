#ifndef BUS_HPP
#define BUS_HPP

#include <iostream>
#include "Vehicle.hpp"

class Bus : public Vehicle 
{
    public:

        Bus(const std::string& plate , int speed) ;
        bool canMove(const TrafficElement& element) const override ;
};

#endif