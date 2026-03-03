#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirVehicle.h"
class Helicopter : public AirVehicle {
private:
    int numBlades; // количество лопастей несущего винта
public:
    Helicopter(const std::string& name, int year, double maxAltitude, int numBlades);
    virtual ~Helicopter();
    int getNumBlades() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
