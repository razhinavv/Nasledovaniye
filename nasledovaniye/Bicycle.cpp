#include "Bicycle.h"
#include <iostream>
Bicycle::Bicycle(const std::string& name, int year, int numWheels, const std::string& type)
    : GroundVehicle(name, year, numWheels), type(type) {}
Bicycle::~Bicycle() {}
std::string Bicycle::getType() const { return type; }
double Bicycle::getMaxSpeed() const {
    if (type == "road") return 40.0;
    else if (type == "mountain") return 25.0;
    else return 30.0;
}
void Bicycle::print() const {
    GroundVehicle::print();
    std::cout << ", Type: " << type;
}
