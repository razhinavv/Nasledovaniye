#include "Scooter.h"
#include <iostream>
Scooter::Scooter(const std::string& name, int year, int numWheels, double engineVolume)
    : GroundVehicle(name, year, numWheels), engineVolume(engineVolume) {}
Scooter::~Scooter() {}
double Scooter::getEngineVolume() const {
    return engineVolume;
}
double Scooter::getMaxSpeed() const {
    return 60.0 + engineVolume * 30.0;
}
void Scooter::print() const {
    GroundVehicle::print();
    std::cout << ", Engine: " << engineVolume << "L";
}
