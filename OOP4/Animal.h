#pragma once
#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream>

class Animal
{
public:
	Animal();
	Animal(double weight);
	double getWeight();
	void setWeight(double);
	void display();
	   
private:
	double weight;
};

#endif
