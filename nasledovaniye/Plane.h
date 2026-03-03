#ifndef PLANE_H
#define PLANE_H
#include "AirVehicle.h"
class Plane : public AirVehicle {
private:
    double wingspan; // размах крыльев (в метрах)
public:
    Plane(const std::string& name, int year, double maxAltitude, double wingspan);
    virtual ~Plane();
    double getWingspan() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
