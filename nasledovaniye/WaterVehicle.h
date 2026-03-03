#ifndef WATERVECHICLE_H
#define WATERVECHICLE_H
#include "Vehicle.h"
// Абстрактный класс водного транспорта
class WaterVehicle : public Vehicle {
protected:
    double displacement; // водоизмещение в тоннах
public:
    WaterVehicle(const std::string& name, int year, double displacement);
    virtual ~WaterVehicle();
    double getDisplacement() const;
    void print() const override;
};

#endif
