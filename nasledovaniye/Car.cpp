#include "Car.h"

Car::Car(const std::string& name, int year, int numWheels, int numDoors)
    : GroundVehicle(name, year, numWheels), numDoors(numDoors) {}
Car::~Car() {}
int Car::getNumDoors() const {
    return numDoors;
}
double Car::getMaxSpeed() const {
    return 180.0;
}
void Car::print() const {
    GroundVehicle::print();
    std::cout << ", Doors: " << numDoors;
}
