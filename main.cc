#include <iostream>

#include "Intersection.hpp"
#include "Car.hpp"
#include "Bus.hpp"
#include "EmergencyVehicle.hpp"
#include "TrafficLight.hpp"
#include "SpeedLimitZone.hpp"
#include "StopSign.hpp"

using namespace std;

int main() 
{
    Intersection buali ;

    Car car1("IR-101", 90) ;
    Car car2("IR-202", 70) ;

    Bus bus1("BUS-33", 40);
    Bus bus2("BUS-88", 60);

    EmergencyVehicle ambulance("EMS-911", 90) ;
    EmergencyVehicle fireTruck("FIRE-112", 80) ;

    TrafficLight light (LightState:: RED )  ; 
    StopSign stopSign ;
    SpeedLimitZone limit (60) ;

    buali.addVehicle (&car1);
    buali.addVehicle (&car2);

    buali.addVehicle (&bus1);
    buali.addVehicle (&bus2);

    buali.addVehicle (&ambulance);
    buali.addVehicle (&fireTruck);

    buali.addRule (&light);
    buali.addRule (&limit);
    buali.addRule (&stopSign);

    if (light == LightState::RED)
    {
        cout << "\n\nTraffic light is RED\n";
    }

    else if (light == LightState::YELLOW)
    {
        cout << "\n\nTraffic light is YELLOW\n";
    }

    else if (light == LightState::GREEN)
    {
        cout << "\n\nTraffic light is GREEN\n";
    }

    cout << "Total vehicles: "<< Vehicle::getTotalVehicles() << "\n";
    buali.printStatus();
    

    cout << "\n\n<< Evaluating Vehicle Movements >>" <<endl;
    buali.evaluate();

    if (ambulance < car1)
    {
        cout << "Car has higher priority than ambulance !" << endl ;
    }
    else
    {
        cout << "Emergency vehicle has higher priority than car !" << endl;
    }

    return 0 ;
}