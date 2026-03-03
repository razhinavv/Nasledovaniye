#ifndef GROUNDVEHICLE_H
#define GROUNDVEHICLE_H
#include "Vehicle.h"

// наземный транспорт
class GroundVehicle : public Vehicle {
protected:
    int numWheels; // количество колёс

public:
    GroundVehicle(const std::string& name, int year, int numWheels);
    virtual ~GroundVehicle();
    int getNumWheels() const;
    void print() const override;
};

#endif
