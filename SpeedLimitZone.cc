#include <iostream>

#include "SpeedLimitZone.hpp"
#include "Vehicle.hpp"

using namespace std;

SpeedLimitZone::SpeedLimitZone(int maxSpeed) 
: maxSpeed(maxSpeed) {}

bool SpeedLimitZone::allows(const Vehicle& vehicle) const 
{
    return vehicle.getSpeed() <= maxSpeed ;
}

void SpeedLimitZone::Rule() const 
{
    cout << "Speed limit: " << maxSpeed << "!!!" << endl;
}
