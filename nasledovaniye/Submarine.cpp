#include "Submarine.h"
#include <iostream>
Submarine::Submarine(const std::string& name, int year, double displacement, double maxDepth)
    : WaterVehicle(name, year, displacement), maxDepth(maxDepth) {}
Submarine::~Submarine() {}
double Submarine::getMaxDepth() const {
    return maxDepth;
}
double Submarine::getMaxSpeed() const {
    return 30.0;
}
void Submarine::print() const {
    WaterVehicle::print();
    std::cout << ", Max depth: " << maxDepth << " m";
}
