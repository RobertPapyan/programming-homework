#pragma once
#include "Vehicle.h"
#include <iostream>
class Car :
    public Vehicle
{
public: 
    Car();
    Car(Engine, std::string, std::string, int, float, int, int, int);
    ~Car();
    void draw() override;
    void setSeatCount(int);
    int getSeatCount();
    friend std::ostream& operator<<(std::ostream&, Car&);
    friend std::istream& operator>>(std::istream&, Car&);
    int seatCount;
};

