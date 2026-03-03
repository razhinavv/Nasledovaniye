#include "Yacht.h"
#include <iostream>
Yacht::Yacht(const std::string& name, int year, double displacement, bool hasMotor, double length)
    : Boat(name, year, displacement, hasMotor), length(length) {}
Yacht::~Yacht() {}

double Yacht::getLength() const { return length; }

double Yacht::getMaxSpeed() const {
    return Boat::getMaxSpeed() + 10.0;
}
void Yacht::print() const {
    Boat::print();
    std::cout << ", Length: " << length << " m";
}
