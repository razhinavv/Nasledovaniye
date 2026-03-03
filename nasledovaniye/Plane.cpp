#include "Plane.h"
Plane::Plane(const std::string& name, int year, double maxAltitude, double wingspan)
    : AirVehicle(name, year, maxAltitude), wingspan(wingspan) {}
Plane::~Plane() {}
double Plane::getWingspan() const {
    return wingspan;
}
double Plane::getMaxSpeed() const {
    return 900.0;
}
void Plane::print() const {
    AirVehicle::print();
    std::cout << ", Wingspan: " << wingspan << " m";
}
