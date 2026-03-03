#ifndef SCOOTER_H
#define SCOOTER_H
#include "GroundVehicle.h"
class Scooter : public GroundVehicle {
private:
    double engineVolume; // объём двигателя в литрах
public:
    Scooter(const std::string& name, int year, int numWheels, double engineVolume);
    virtual ~Scooter();
    double getEngineVolume() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
