#include <iostream>

#include "Bus.hpp"
#include "TrafficElement.hpp"

using namespace std;

Bus::Bus(const string& plate , int speed)
    : Vehicle(plate , speed) {}

bool Bus::canMove(const TrafficElement& element) const 
{
    return element.allows(*this) ;
}
