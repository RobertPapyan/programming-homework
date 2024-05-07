#include "Car.h"


Car::Car() :Car(Engine(), "___", "__", 0, 0, 0, 0,0) {}

Car::Car(Engine engine, std::string manufactor, std::string model, int price, float weightTonne, int maxSpeed, int manucaftoringYear,int seatCount) {
	this->engine = engine;
	setManufactor(manufactor);
	setModel(model);
	setPrice(price);
	setWeight(weightTonne);
	setMaxSpeed(maxSpeed);
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
		<< ", Weight in Tonnes " << this->getWeight() << ", Max speed " << this->getMaxSpeed() <<", Seat count " << this->getSeatCount() << endl;
}