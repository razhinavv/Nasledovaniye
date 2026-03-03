#include "Truck.h"
Truck::Truck(const std::string& name, int year, int numWheels, int numDoors, double loadCapacity)
    : Car(name, year, numWheels, numDoors), loadCapacity(loadCapacity) {}
Truck::~Truck() {}
double Truck::getLoadCapacity() const {
    return loadCapacity;
}
double Truck::getMaxSpeed() const {
    return 120.0;
}

void Truck::print() const {
    Car::print();
    std::cout << ", Load capacity: " << loadCapacity << "t";
}
