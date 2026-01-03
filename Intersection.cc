#include <iostream>
#include "Intersection.hpp"

using namespace std;

void Intersection::addVehicle(Vehicle* v) 
{
    vehicles.push_back(v) ;
}

void Intersection::addRule(TrafficElement* t)
{
    rules.push_back(t) ;
}

void Intersection::evaluate() 
{
    for (auto v : vehicles) 
    {
        bool canMove = true ;

        for (auto t : rules) 
        {
            if ( !v->canMove(*t) ) 
            {
                canMove = false ;

                break;
            }
        }

        if (canMove)
        {
            v->move();
        }

        else
        {
            cout << "Vehicle with plete: " << v->getPlate() << " must stop !!!" <<endl ;
        }
    }
}

void Intersection::printStatus() const 
{
    cout <<  "Intersection Status : " << endl ;

    for (auto v : vehicles)
    {
        v->printStatus() ;
    }
}
