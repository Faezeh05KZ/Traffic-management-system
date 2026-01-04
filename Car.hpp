#ifndef CAR_HPP
#define CAR_HPP

#include "Vehicle.hpp"

class Car : public Vehicle 
{
    public:
    
        Car(const std::string& plate , int speed) ;
        bool canMove(const TrafficElement& element) const override ;
};

#endif
