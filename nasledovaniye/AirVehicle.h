#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
#include "Vehicle.h"
// Абстрактный класс воздушного транспорта
class AirVehicle : public Vehicle {
protected:
    double maxAltitude; // максимальная высота полёта (в метрах)
public:
    AirVehicle(const std::string& name, int year, double maxAltitude);
    virtual ~AirVehicle();
    double getMaxAltitude() const;
    void print() const override;
};

#endif
