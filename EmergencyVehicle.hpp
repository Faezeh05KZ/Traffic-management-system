#ifndef EMERGENCY_VEHICLE_HPP
#define EMERGENCY_VEHICLE_HPP

#include <iostream> 

#include "Vehicle.hpp"

class EmergencyVehicle : public Vehicle 
{
    public:

        EmergencyVehicle(const std::string& plate , int speed) ;
        
        bool canMove(const TrafficElement& element) const override ;
};

#endif
