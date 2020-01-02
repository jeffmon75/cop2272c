// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 11/6/2019

#include <iostream>
#include "Animal.h"

Animal::Animal()
{
	weight = 1.0;
}

Animal::Animal(double weight)
{
	this->weight = weight;
}

double Animal::getWeight()
{
	return weight;
}

void Animal::setWeight(double weight)
{
	this->weight = weight;
}

void Animal::display()
{
	std::cout << "Display Method Weight: " << weight << std::endl;
}


