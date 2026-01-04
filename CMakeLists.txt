cmake_minimum_required(VERSION 3.10)
project(traffic)
set(CMAKE_CXX_STANDARD 17)

add_executable(traffic
    main.cc
    Vehicle.cc
    Car.cc
    Bus.cc
    EmergencyVehicle.cc
    TrafficLight.cc
    StopSign.cc
    SpeedLimitZone.cc
    Intersection.cc
)