#ifndef TRAFFICELEMENT_H
#define TRAFFICELEMENT_H

#include <iostream>

class Vehicle;

class TrafficElement 
{
    public:

        virtual bool allows(const Vehicle& vehicle) const = 0 ;
        virtual void Rule() const = 0 ;

        virtual ~TrafficElement() = default ;
};

#endif
