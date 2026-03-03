#ifndef TANK_H
#define TANK_H
#include "GroundVehicle.h"
class Tank : public GroundVehicle {
private:
    int armourThickness; // толщина брони в мм
public:
    Tank(const std::string& name, int year, int numWheels, int armourThickness);
    virtual ~Tank();
    int getArmourThickness() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
