#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "GroundVehicle.h"
class Motorcycle : public GroundVehicle {
private:
    double engineVolume; // объём двигателя в литрах

public:
    Motorcycle(const std::string& name, int year, int numWheels, double engineVolume);
    virtual ~Motorcycle();

    double getEngineVolume() const;

    double getMaxSpeed() const override;
    void print() const override;
};

#endif
