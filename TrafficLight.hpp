#ifndef TRAFFICLIGHT_HPP
#define TRAFFICLIGHT_HPP

#include "TrafficElement.hpp"

enum class LightState { RED , GREEN };

class TrafficLight : public TrafficElement 
{
    private :
        LightState state;

    public :

        TrafficLight(LightState c) ;

        bool allows(const Vehicle& vehicle) const override ;
        void Rule() const override ;

        bool operator == (LightState c) const ;
};

#endif
