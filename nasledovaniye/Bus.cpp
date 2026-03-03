#include "Bus.h"
#include <iostream>
Bus::Bus(const std::string& name, int year, int numWheels, int numDoors, int passengerCapacity)
    : Car(name, year, numWheels, numDoors), passengerCapacity(passengerCapacity) {}
Bus::~Bus() {}
int Bus::getPassengerCapacity() const { return passengerCapacity; }
double Bus::getMaxSpeed() const { return 100.0; }
void Bus::print() const {
    Car::print();
    std::cout << ", Capacity: " << passengerCapacity << " passengers";
}
