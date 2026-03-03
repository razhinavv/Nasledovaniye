# Транспортные средства (OOP проект)

## Иерархия классов
- Vehicle (абстрактный)
  - GroundVehicle
    - Car
    - Motorcycle
    - Truck
    - Bicycle
    - Bus
    - Scooter
    - Tank
  - WaterVehicle
    - Boat
    - Yacht
    - Submarine
  - AirVehicle
    - Plane
    - Helicopter

## Сборка
### Вручную
g++ -std=c++17 -o transport *.cpp main.cpp

### Через CMake
mkdir build && cd build
cmake ..
make

## Запуск
./transport

## Доработки
См. FUTURE.md
