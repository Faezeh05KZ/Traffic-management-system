#include <iostream>
#include <string>

#include "Vehicle.hpp"

using namespace std;

int Vehicle :: vehicleCount = 0 ;

Vehicle :: Vehicle(const std :: string& p , int s) :
Plate(p) , Speed(s)
{
    ID = vehicleCount++ ;
}

int Vehicle :: getSpeed() const 
{
    return Speed ;
}

string Vehicle:: gerPlate() const 
{
    return Plate ;
}

void Vehicle :: move()
{
    cout << "Vehicle with plate : " << Plate 
    << " is moving at speed : " << Speed << endl ; 
}

void Vehicle:: printStatus() const
{
    cout << "Vehicle plate : " << Plate << '\n' << "Vehicle Speed : " << Speed << '\n ';
}

Vehicle& Vehicle::operator+(int val) 
{
    Speed += val ;
    if (Speed < 0) 
    {
        Speed = 0 ;
    }

    return *this ;
}

bool Vehicle::operator<(const Vehicle& other) const 
{
    return Speed < other.Speed ;
}

int Vehicle::getTotalVehicles() 
{
    return vehicleCount ;
}
