#include <iostream>

#include "Car.hpp"
#include "TrafficElement.hpp"

using namespace std;

Car::Car(const string& plate , int speed)
    : Vehicle(plate , speed) {}

bool Car::canMove(const TrafficElement& element) const 
{
    return element.allows(*this) ;
}