#include "Tank.h"
#include <iostream>
Tank::Tank(const std::string& name, int year, int numWheels, int armourThickness)
    : GroundVehicle(name, year, numWheels), armourThickness(armourThickness) {}
Tank::~Tank() {}
int Tank::getArmourThickness() const {
    return armourThickness;
}
double Tank::getMaxSpeed() const {
    return 60.0;
}
void Tank::print() const {
    GroundVehicle::print();
    std::cout << ", Armour: " << armourThickness << "mm";
}
