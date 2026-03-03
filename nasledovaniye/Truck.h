#ifndef TRUCK_H
#define TRUCK_H
#include "Car.h"
class Truck : public Car {
private:
    double loadCapacity; // грузоподъёмность в тоннах
public:
    Truck(const std::string& name, int year, int numWheels, int numDoors, double loadCapacity);
    virtual ~Truck();
    double getLoadCapacity() const;
    double getMaxSpeed() const override;
    void print() const override;
};
#endif
