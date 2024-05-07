#include "Engine.h"
#include <iostream>
using namespace std;

Engine::Engine() {
	setModel("No model");
	setManufactureYear(0);
	setEnginePower(0);
	setEngineType(Types::disel);
}
Engine::Engine(string model, int year, float power, Types type) {
	this->engineModel = model;
	this->manufactureYear = year;
	this->enginePower = power;
	this->engineType = type;
}

Engine::~Engine() {
	//cout << endl << this->getModel()<<": engine destroyed"<<endl;
}


void Engine::setModel(string newModel) {
	this->engineModel = newModel;
}

string Engine::getModel() {
	return this->engineModel;
}


void Engine::setManufactureYear(int newYear) {
	this->manufactureYear = newYear;
}

int Engine::getManufactureYear() {
	return this->manufactureYear;
}


void Engine::setEnginePower(float newPower) {
	this->enginePower = newPower;
}
float Engine::getEnginePower() {
	return this->enginePower;
}
void Engine::setEngineType(Types newType) {
	this->engineType = newType;
}
Types Engine::getEngineType() {
	return this->engineType;
}

string Engine::typeToString(Types type) {
	switch (type)
	{
	case disel:
		return "Disel";
	case petrol:
		return "Petrol";
	case gas:
		return "Gas";
	case electric:
		return "Electric";
	default:
		return "Engine type does not exist";
	}
}