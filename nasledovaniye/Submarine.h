#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "WaterVehicle.h"
class Submarine : public WaterVehicle {
private:
    double maxDepth; // максимальная глубина погружения в метрах
public:
    Submarine(const std::string& name, int year, double displacement, double maxDepth);
    virtual ~Submarine();
    double getMaxDepth() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
