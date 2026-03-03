#ifndef YACHT_H
#define YACHT_H
#include "Boat.h"
class Yacht : public Boat {
private:
    double length; // длина в метрах
public:
    Yacht(const std::string& name, int year, double displacement, bool hasMotor, double length);
    virtual ~Yacht();
    double getLength() const;
    double getMaxSpeed() const override;
    void print() const override;
};

#endif
