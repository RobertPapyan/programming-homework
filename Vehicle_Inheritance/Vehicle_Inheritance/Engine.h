#pragma once
#include <string>
using namespace std;
enum Types
{
	disel, petrol, gas, electric
};

class Engine
{
	
public:
	Engine();
	Engine(string,int,float, Types);
	~Engine();
	void setModel(string);
	string getModel();
	void setManufactureYear(int);
	int getManufactureYear();
	void setEnginePower(float);
	float getEnginePower();
	void setEngineType(Types);
	Types getEngineType();
	static string typeToString(Types);
	//Variables
	string engineModel;
	int manufactureYear;
	float enginePower;
	Types engineType;
};

