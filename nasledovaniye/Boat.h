#ifndef BOAT_H
#define BOAT_H
#include "WaterVehicle.h"
class Boat : public WaterVehicle {
private:
    bool hasMotor; // наличие мотора
public:
    Boat(const std::string& name, int year, double displacement, bool hasMotor);
    virtual ~Boat();
    bool getHasMotor() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
