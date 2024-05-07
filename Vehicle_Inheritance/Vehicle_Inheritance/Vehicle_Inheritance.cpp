#include <iostream>
#include <string>
#include "Engine.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

ostream& operator<<(ostream& output, Vehicle& v1) {
	output << endl <<"Vehicle: "<< v1.getModel() << endl;
	output << "Engine: " << v1.engine.engineModel << ' ' << v1.engine.enginePower << ' ' << Engine::typeToString(v1.engine.getEngineType()) << endl;
	output << "Stats: " << "Manufactor " << v1.getManufactor() << ", Year " << v1.getManufactorYear() << ", Price " << v1.getPrice() << ", Weight in Tonnes " << v1.getWeight() << ", Max speed " << v1.getMaxSpeed() << endl;
	return output;
}
istream& operator>>(istream& input, Vehicle& v1) {
	cout << endl << "Enter cars new model`";
	input >> v1.model;
	return input;
}
istream& operator>>(istream& input, Car& v1) {
	cout << endl << "Enter cars new model`";
	input >> v1.model;
	return input;
}
ostream& operator<<(ostream& output, Car& v1) {
	output << endl << "Car: " << v1.getModel() << endl;
	output << "Engine: " << v1.engine.engineModel << ' ' << v1.engine.enginePower << ' ' << Engine::typeToString(v1.engine.getEngineType()) << endl;
	output << "Stats: " << "Manufactor " << v1.getManufactor() << ", Year " << v1.getManufactorYear() << ", Price " << v1.getPrice() 
		<< ", Weight in Tonnes " << v1.getWeight() << ", Max speed " << v1.getMaxSpeed() <<", Seat count " << v1.getSeatCount() << endl;
	return output;
}
istream& operator>>(istream& input, Truck& v1) {
	cout << endl << "Enter trucks new model`";
	input >> v1.model;
	return input;
}
ostream& operator<<(ostream& output, Truck& v1) {
	output << endl << "Truck: " << v1.getModel() << endl;
	output << "Engine: " << v1.engine.engineModel << ' ' << v1.engine.enginePower << ' ' << Engine::typeToString(v1.engine.getEngineType()) << endl;
	output << "Stats: " << "Manufactor " << v1.getManufactor() << ", Year " << v1.getManufactorYear() << ", Price " << v1.getPrice()
		<< ", Weight in Tonnes " << v1.getWeight() << ", Max speed " << v1.getMaxSpeed() << ", Capacity " << v1.getCapacity() << endl;
	return output;
}
void sortCarsList(Car list[5]) {
	for (int i = 4; i >=0; i--) {
		for (int j = 0; j < i; j++) {
			if (list[j].engine.getEnginePower() > list[j + 1].engine.getEnginePower()) {
				swap(list[j], list[j + 1]);
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		if (list[i].getSeatCount() <= 5) {
			cout << list[i];
		}
	}
	
}

int main()
{
	/*
	Car carsList[5];
	carsList[0] = Car (Engine("V-8", 2005, 2.2, Types::petrol), "BMW", "X-5", 25000, 2.5, 220, 2005, 5);
	carsList[1] = Car(Engine("V-8", 2003, 2.0, Types::gas), "BMW", "X-3", 20000, 2.5, 220, 2003, 2);
	carsList[2] = Car(Engine("V-8", 2009, 3.6, Types::petrol), "BMW", "X-6", 40000, 2.5, 220, 2010, 5);
	carsList[3] = Car(Engine("V-8", 2016, 4.0, Types::petrol), "BMW", "X-7", 50000, 2.5, 220, 2018, 7);
	carsList[4] = Car(Engine("V-8", 2020, 8, Types::electric), "BMW", "I8", 70000, 2.5, 220, 2021, 6);
	sortCarsList(carsList);
	*/

	Vehicle* testVehicle = new Vehicle(Engine("V-4", 180, 2.0, Types::petrol), "Mercedes", "C", 25000, 2.5, 220, 2005);
	Car* testCar = new Car(Engine("V-8", 200, 2.2, Types::petrol), "BMW", "X-5", 25000, 2.5, 220, 2005,4);
	Truck* testTruck = new Truck(Engine("V-12", 2003, 5.6, Types::disel), "Volvo", "Volvo-FMX", 38000, 5.5, 180, 2003, 38);

	Vehicle* vehicleList[3];
	vehicleList[0] = testVehicle;
	vehicleList[1] = testCar;
	vehicleList[2] = testTruck;

	for (int i = 0; i < 3; i++) {
		vehicleList[i]->draw();
	}
	
	/*Car bmwX5(Engine("V-8", 2004, 2.2, Types::gas), "BMW", "X-5", 25000, 2.5, 220, 2005,5);
	cin >> bmwX5;
	cout << bmwX5 <<bmwX5;
	Truck volvoTruck(Engine("V-12", 2003, 5.6, Types::disel), "Volvo", "Volvo-FMX", 38000, 5.5, 180, 2003, 38);
	cout << volvoTruck;*/
}
