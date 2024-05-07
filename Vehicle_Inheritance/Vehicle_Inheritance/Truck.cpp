#include "Truck.h"

Truck::Truck(Engine engine, std::string manufactor, std::string model, int price, float weightTonne, int maxSpeed, int manucaftoringYear, int capacity) {
	this->engine = engine;
	setManufactor(manufactor);
	setModel(model);
	setPrice(price);
	setWeight(weightTonne);
	setMaxSpeed(maxSpeed);
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
		<< ", Weight in Tonnes " << this->getWeight() << ", Max speed " << this->getMaxSpeed() << ", Capacity " << this->getCapacity() << endl;
}