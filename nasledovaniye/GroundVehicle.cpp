#include "GroundVehicle.h"
GroundVehicle::GroundVehicle(const std::string& name, int year, int numWheels)
    : Vehicle(name, year), numWheels(numWheels) {}
GroundVehicle::~GroundVehicle() {}
int GroundVehicle::getNumWheels() const {
    return numWheels;
}
void GroundVehicle::print() const {
    Vehicle::print();
    std::cout << ", Wheels: " << numWheels;
}
