#include "Helicopter.h"
Helicopter::Helicopter(const std::string& name, int year, double maxAltitude, int numBlades)
    : AirVehicle(name, year, maxAltitude), numBlades(numBlades) {}
Helicopter::~Helicopter() {}
int Helicopter::getNumBlades() const {
    return numBlades;
}
double Helicopter::getMaxSpeed() const {
    return 300.0;
}
void Helicopter::print() const {
    AirVehicle::print();
    std::cout << ", Blades: " << numBlades;
}
