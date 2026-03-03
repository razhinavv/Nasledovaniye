#include "Vehicle.h"

Vehicle::Vehicle(const std::string& name, int year)
    : name(name), year(year) {}
Vehicle::~Vehicle() {}
    std::string Vehicle::getName() const {
    return name;
}
int Vehicle::getYear() const {
    return year;
}
void Vehicle::setYear(int year) {
    this->year = year;
}
void Vehicle::print() const {
    std::cout << "Name: " << name << ", Year: " << year;
}
