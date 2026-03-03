#ifndef CAR_H
#define CAR_H
#include "GroundVehicle.h"

// автомобиль
class Car : public GroundVehicle {
private:
    int numDoors;  // количество дверей
public:
    Car(const std::string& name, int year, int numWheels, int numDoors);
    virtual ~Car();
    int getNumDoors() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
