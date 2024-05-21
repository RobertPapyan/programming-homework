#pragma once
#include "Vehicle.h"
#include <iostream>
class Truck :
    public Vehicle
{
public:
    Truck(Engine, std::string, std::string, int, float, int, int, int);
    ~Truck();
    void setCapacity(int);
    int getCapacity();
    void draw() override;
    friend std::ostream& operator<<(std::ostream&, Truck&);
    friend std::istream& operator>>(std::istream&, Truck&);
    int _currentLoad;
    int capacity;
private:
    void start()override;
    void accelerate(int)override;
    void stop()override;
};

