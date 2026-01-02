#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>

class TrafficElement ;

class Vehicle
{
  private:

    int ID ;
    std::string Plate ;
    float Speed ;
    static int vehicleCount;


  public:

  Vehicle(const std :: string& plate , int speed) ;
  virtual ~Vehicle() = default ;

  int getSpeed() const ;
  std:: string gerPlate() const ;

  virtual bool canMove(const TrafficElement&) const = 0 ;
  virtual void move() ;
  virtual void printStatus() ;

  Vehicle& operator+ (int vla) ;
  bool operator < (const Vehicle& other ) const ;

  static int getTotalVehicles() ;




};

#endif