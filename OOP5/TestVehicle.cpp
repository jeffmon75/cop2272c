// Jeff Hyle
// COP 2272C-02 Computer Programming I
// OOP5
// Date of last successful debugging: 11/15/19

#include <iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle()
	{
		cout << "Constructor of Vehicle class." << endl;
	}

};

class InWater: public Vehicle
{
public:
	InWater()
	{
		cout << "Constructor of InWater class." << endl;
	}
};
	
class OnLand: public Vehicle
{
public:
	OnLand()
	{
		cout << "Constructor of OnLand class." << endl;
	}
};

class Ship: public InWater
{
public:
	Ship()
	{
		cout << "Constructor of Ship class." << endl;
	}
};

class Submarine: public InWater
{
public:
	Submarine()
	{
	cout << "Constructor of Submarine class." << endl;
	}
};

class Automobile: public OnLand
{
public:
	Automobile()
	{
		cout << "Constructor of Automobile class." << endl;
	}
};

class Sedan: public Automobile
{
public:
	Sedan()
	{
		cout << "Constructor of Sedan class." << endl;
	}
};

int main()
{
	Ship ship;
	cout << endl;
	Submarine submarine;
	cout << endl;
	Sedan sedan;
	return 0;
}