#ifndef BUS_H
#define BUS_H
#include "Car.h"
class Bus : public Car {
private:
    int passengerCapacity;
public:
    Bus(const std::string& name, int year, int numWheels, int numDoors, int passengerCapacity);
    virtual ~Bus();
    int getPassengerCapacity() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
