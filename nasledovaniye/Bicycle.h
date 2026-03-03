#ifndef BICYCLE_H
#define BICYCLE_H
#include "GroundVehicle.h"
#include <string>
class Bicycle : public GroundVehicle {
private:
    std::string type;
public:
    Bicycle(const std::string& name, int year, int numWheels, const std::string& type);
    virtual ~Bicycle();
    std::string getType() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
