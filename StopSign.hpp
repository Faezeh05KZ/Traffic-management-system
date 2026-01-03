#ifndef STOPSIGN_HPP
#define STOPSIGN_HPP

#include <iostream>

#include "TrafficElement.hpp"

class StopSign : public TrafficElement 
{
    public:

        bool allows(const Vehicle& vehicle) const override ;
        void Rule() const override ;
};

#endif
