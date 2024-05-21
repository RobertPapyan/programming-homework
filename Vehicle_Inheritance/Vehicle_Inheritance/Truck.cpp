#include "Truck.h"

Truck::Truck(Engine engine, std::string manufactor, std::string model, int price, float weightTonne, int maxSpeed, int manucaftoringYear, int capacity) {
	this->engine = engine;
	this->isRuning = false;
	this->_velocity = 0;
	setManufactor(manufactor);
	setModel(model);
	setPrice(price);
	setWeight(weightTonne);
	setMaxVelocity(maxSpeed);
	setManufactoringYear(manucaftoringYear);
	setCapacity(capacity);
}
Truck::~Truck() {

}
void Truck::setCapacity(int newValue) {
	this->capacity = newValue;
}

int Truck::getCapacity() {
	return this->capacity;
}

void Truck::draw() {
	cout << endl << "Truck: " << this->getModel() << endl;
	cout << "Engine: " << this->engine.engineModel << ' ' << this->engine.enginePower << ' ' << Engine::typeToString(this->engine.getEngineType()) << endl;
	cout << "Stats: " << "Manufactor " << this->getManufactor() << ", Year " << this->getManufactorYear() << ", Price " << this->getPrice()
		<< ", Weight in Tonnes " << this->getWeight() << ", Max speed " << this->getMaxVelocity() << ", Capacity " << this->getCapacity() << endl;
}

void Truck::start() {
	if (this->_currentLoad > 10000) {
		cout << "Truck cant move" << endl;
		return;
	}
	this->isRuning = true;
	cout << "Truck: " << this->getModel() << ' ' << "is runing" << endl;
}

void Truck::stop() {
	if (this->_currentLoad > 10000) {
		cout << "Truck cant move" << endl;
		return;
	}
	if (!isRuning)return;
	this->_velocity = 0;
	this->isRuning = false;
	cout << "Truck: " << this->getModel() << ' ' << "stoped" << endl;

}

void Truck::accelerate(int tillVelocity) {
	if (this->_currentLoad > 10000) {
		return;
	}
	if (tillVelocity < 0 || tillVelocity>this->getMaxVelocity())return;
	this->_velocity = tillVelocity;
	cout << "Truck: " << this->getModel() << ' ' << "accelerated till " << this->_velocity << endl;

}