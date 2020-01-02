// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 

#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal()
{
	weight = 1.0;
}

Animal::Animal(const double weight)
{
	this->weight = weight;
}

double Animal::getWeight() const
{
	return weight;
}

void Animal::setWeight(const double weight)
{
	this->weight = weight;
}

void Animal::display() const
{
	cout << "Weight: " << weight << endl;
}


