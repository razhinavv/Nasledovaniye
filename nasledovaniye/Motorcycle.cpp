#include "Motorcycle.h"
Motorcycle::Motorcycle(const std::string& name, int year, int numWheels, double engineVolume)
    : GroundVehicle(name, year, numWheels), engineVolume(engineVolume) {}
Motorcycle::~Motorcycle() {}
double Motorcycle::getEngineVolume() const {
    return engineVolume;
}

double Motorcycle::getMaxSpeed() const {
    return 80.0 + engineVolume * 50.0;
}

void Motorcycle::print() const {
    GroundVehicle::print();
    std::cout << ", Engine: " << engineVolume << "L";
}
