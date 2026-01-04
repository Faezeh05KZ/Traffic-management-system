#include <iostream>

#include "TrafficLight.hpp"
#include "Vehicle.hpp"

using namespace std;

TrafficLight::TrafficLight(LightState s) : state(s) {}

bool TrafficLight::allows(const Vehicle&) const 
{
    return state == LightState::GREEN;
}

void TrafficLight::Rule() const 
{
    std::cout << "Traffic Light is "
              << (state == LightState::GREEN ? "GREEN" : "RED") << "\n";
}

bool TrafficLight::operator==(LightState s) const 
{
    return state == s ;
}
