#include "WaterVehicle.h"
WaterVehicle::WaterVehicle(const std::string& name, int year, double displacement)
    : Vehicle(name, year), displacement(displacement) {}
WaterVehicle::~WaterVehicle() {}
double WaterVehicle::getDisplacement() const {
    return displacement;
}
void WaterVehicle::print() const {
    Vehicle::print();
    std::cout << ", Displacement: " << displacement << "t";
}
