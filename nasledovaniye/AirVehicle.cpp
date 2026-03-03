#include "AirVehicle.h"
AirVehicle::AirVehicle(const std::string& name, int year, double maxAltitude)
    : Vehicle(name, year), maxAltitude(maxAltitude) {}

AirVehicle::~AirVehicle() {}

double AirVehicle::getMaxAltitude() const {
    return maxAltitude;
}

void AirVehicle::print() const {
    Vehicle::print();
    std::cout << ", Max altitude: " << maxAltitude << " m";
}
