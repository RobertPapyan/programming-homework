#include "Car.h"


Car::Car() :Car(Engine(), "___", "__", 0, 0, 0, 0,0) {}

Car::Car(Engine engine, std::string manufactor, std::string model, int price, float weightTonne, int maxSpeed, int manucaftoringYear,int seatCount) {
	this->engine = engine;
	this->isRuning = false;
	this->_velocity = 0;
	setManufactor(manufactor);
	setModel(model);
	setPrice(price);
	setWeight(weightTonne);
	setMaxVelocity(maxSpeed);
	setManufactoringYear(manucaftoringYear);
	setSeatCount(seatCount);
}
Car::~Car() {

}
void Car::setSeatCount(int newValue) {
	this->seatCount = newValue;
}

int Car::getSeatCount() {
	return this->seatCount;
}

void Car::draw() {
	cout << endl << "Car: " << this->getModel() << endl;
	cout << "Engine: " << this->engine.engineModel << ' ' << this->engine.enginePower << ' ' << Engine::typeToString(this->engine.getEngineType()) << endl;
	cout << "Stats: " << "Manufactor " << this->getManufactor() << ", Year " << this->getManufactorYear() << ", Price " << this->getPrice() 
		<< ", Weight in Tonnes " << this->getWeight() << ", Max speed " << this->getMaxVelocity() <<", Seat count " << this->getSeatCount() << endl;
}

void Car::start() {
	this->isRuning = true;
	cout <<"Car: "<< this->getModel() << ' ' << "is runing" << endl;
}

void Car::stop() {
	if (!isRuning)return;
	this->_velocity = 0;
	this->isRuning = false;
	cout << "Car: " << this->getModel() << ' ' << "stoped" << endl;

}

void Car::accelerate(int tillVelocity) {
	if (tillVelocity < 0 || tillVelocity>this->getMaxVelocity())return;
	this->_velocity = tillVelocity;
	cout << "Car: " << this->getModel() << ' ' << "accelerated till "<< this->_velocity << endl;

}