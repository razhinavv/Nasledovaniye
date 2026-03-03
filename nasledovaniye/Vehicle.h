#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
class Vehicle {
protected:
    std::string name;  // название
    int year;          // год выпуска

public:
    Vehicle(const std::string& name, int year);
    virtual ~Vehicle();
    std::string getName() const;
    int getYear() const;
    void setYear(int year);
    virtual double getMaxSpeed() const = 0;
    virtual void print() const;
};

#endif
