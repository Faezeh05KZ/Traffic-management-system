#include <iostream>

#include "StopSign.hpp"

using namespace std;

bool StopSign::allows(const Vehicle&) const 
{
    return false ;
}

void StopSign::Rule() const 
{
    cout << "Stop Sign! Vehicles must stop !!!" << endl ;
}
