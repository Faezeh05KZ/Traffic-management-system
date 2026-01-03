#include <iostream>

#include "EmergencyVehicle.hpp"
#include "TrafficElement.hpp"
using namespace std;

EmergencyVehicle::EmergencyVehicle(const string& plate, int speed)
    : Vehicle(plate, speed) {}

bool EmergencyVehicle::canMove(const TrafficElement& element) const 
{
    return true ;
}
