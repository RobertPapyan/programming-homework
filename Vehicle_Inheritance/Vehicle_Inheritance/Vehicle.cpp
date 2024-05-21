#include "Vehicle.h"

Vehicle::Vehicle():Vehicle(Engine(), "___", "__", 0, 0, 0, 0){}
Vehicle::Vehicle(Engine engine, std::string manufactor, std::string model, int price, float weightTonne, int maxSpeed, int manucaftoringYear) {
	this->engine = engine;
	this->isRuning = false;
	setManufactor(manufactor);
	setModel(model);
	setPrice(price);
	setWeight(weightTonne);
	setMaxVelocity(maxSpeed);
	setManufactoringYear(manucaftoringYear);
}
Vehicle::~Vehicle() {
	//cout << endl<< getModel() << "vehicle destroyed" << endl;
}
void Vehicle::setManufactor(std::string newValue) {
	this->manufactor = newValue;
}
std::string Vehicle::getManufactor() {
	return this->manufactor;
}
void Vehicle::setModel(std::string newValue) {
	this->model = newValue;
}
std::string Vehicle::getModel() {
	return this->model;
}
void Vehicle::setPrice(int newValue) {
	this->price = newValue;
}
int Vehicle::getPrice() {
	return this->price;
}
void Vehicle::setWeight(float newValue){
	this->weightTonne = newValue;
}
float Vehicle::getWeight() {
	return this->weightTonne;
}
void Vehicle::setMaxVelocity(int newValue) {
	this->maxVelocity = newValue;
}
int Vehicle::getMaxVelocity(){
	return this->maxVelocity;
}
void Vehicle::setManufactoringYear(int newValue) {
	this->manufactoringYear = newValue;
}
int Vehicle::getManufactorYear() {
	return this->manufactoringYear;
}
void Vehicle::draw() {
	cout << endl << "Vehicle: " << this->getModel() << endl;
	cout << "Engine: " << this->engine.engineModel << ' ' << this->engine.enginePower << ' ' << Engine::typeToString(this->engine.getEngineType()) << endl;
	cout << "Stats: " << "Manufactor " << this->getManufactor() << ", Year " << this->getManufactorYear() << ", Price " << this->getPrice() << ", Weight in Tonnes " << this->getWeight() << ", Max speed " << this->getMaxVelocity() << endl;
}

void Vehicle::run(int tillVelocity) {
	if (tillVelocity == 0) {
		this->stop();
		return;
	}
	this->start();
	this->accelerate(tillVelocity);
}