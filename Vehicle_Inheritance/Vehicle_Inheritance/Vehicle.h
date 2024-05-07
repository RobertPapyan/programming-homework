#pragma once
#include "Engine.h"
#include <iostream>
class Vehicle
{
public:
	Vehicle();
	Vehicle(Engine, std::string,std::string,int,float,int,int);
	~Vehicle();
	void setManufactor(std::string);
	std::string getManufactor();
	void setModel(std::string);
	std::string getModel();
	void setPrice(int);
	int getPrice();
	void setWeight(float);
	float getWeight();
	void setMaxSpeed(int);
	int getMaxSpeed();
	void setManufactoringYear(int);
	int getManufactorYear();
	virtual void draw();
	friend std::ostream& operator<<(std::ostream&, Vehicle&);
	friend std::istream& operator>>(std::istream&, Vehicle&);
	//Variables
	Engine engine;
	std::string manufactor;
	std::string model;
	int price;
	float weightTonne;
	int maxSpeed;
	int manufactoringYear;
};

