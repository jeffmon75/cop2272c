// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 
#pragma once
#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal();
	Animal(const double);
	double getWeight() const;
	void setWeight(const double);
	void display() const;
	   
private:
	double weight;
};

#endif
