#include "Boat.h"
Boat::Boat(const std::string& name, int year, double displacement, bool hasMotor)
    : WaterVehicle(name, year, displacement), hasMotor(hasMotor) {}
Boat::~Boat() {}
bool Boat::getHasMotor() const {
    return hasMotor;
}
double Boat::getMaxSpeed() const {
    return hasMotor ? 50.0 : 10.0;
}

void Boat::print() const {
    WaterVehicle::print();
    std::cout << ", Motor: " << (hasMotor ? "yes" : "no");
}
