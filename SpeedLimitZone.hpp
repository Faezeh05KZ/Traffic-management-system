#ifndef SPEEDLIMITZONE_HPP
#define SPEEDLIMITZONE_HPP

#include "TrafficElement.hpp"

class SpeedLimitZone : public TrafficElement 
{
    private :
        
        int maxSpeed;
    
    public:
        SpeedLimitZone(int maxSpeed) ;

        bool allows(const Vehicle& vehicle) const override ;
        void Rule() const override ;
};

#endif
