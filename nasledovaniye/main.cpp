#include <iostream>
#include <memory>
#include <vector>
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Bicycle.h"
#include "Bus.h"
#include "Scooter.h"
#include "Tank.h"
#include "Boat.h"
#include "Yacht.h"
#include "Submarine.h"
#include "Plane.h"
#include "Helicopter.h"
using namespace std;
int main() {
    std::vector<std::unique_ptr<Vehicle>> vehicles;

    vehicles.push_back(std::make_unique<Car>("Toyota Camry", 2020, 4, 4));
    vehicles.push_back(std::make_unique<Motorcycle>("Yamaha R1", 2019, 2, 1.0));
    vehicles.push_back(std::make_unique<Truck>("Volvo FH", 2018, 6, 2, 20.0));
    vehicles.push_back(std::make_unique<Bicycle>("Trek", 2022, 2, "mountain"));
    vehicles.push_back(std::make_unique<Bus>("Mercedes Citaro", 2021, 6, 3, 50));
    vehicles.push_back(std::make_unique<Scooter>("Vespa", 2023, 2, 0.15));
    vehicles.push_back(std::make_unique<Tank>("T-90", 2020, 16, 500)); // 16 опорных катков условно
    vehicles.push_back(std::make_unique<Boat>("Buster", 2021, 2.5, true));
    vehicles.push_back(std::make_unique<Yacht>("Sunseeker", 2023, 30.0, true, 25.0));
    vehicles.push_back(std::make_unique<Submarine>("Nautilus", 2010, 2000.0, 500.0));
    vehicles.push_back(std::make_unique<Plane>("Boeing 737", 2015, 2, 180));
    vehicles.push_back(std::make_unique<Helicopter>("Robinson R22", 2020, 2, 2));

    for (const auto& v : vehicles) {
        v->print();
        std::cout << ", Max speed: " << v->getMaxSpeed() << " km/h" << std::endl;
    }

    return 0;
}
