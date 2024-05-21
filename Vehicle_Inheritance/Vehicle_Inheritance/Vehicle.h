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
	void setMaxVelocity(int);
	int getMaxVelocity();
	void setManufactoringYear(int);
	int getManufactorYear();
	virtual void draw();
	void run(int);
	friend std::ostream& operator<<(std::ostream&, Vehicle&);
	friend std::istream& operator>>(std::istream&, Vehicle&);
	//Variables
	Engine engine;
	std::string manufactor;
	std::string model;
	int price;
	float weightTonne;
	int maxVelocity;
	int _velocity;
	bool isRuning;
	int manufactoringYear;

private:
	virtual void start() = 0;
	virtual void accelerate(int) = 0;
	virtual void stop() = 0;
};

