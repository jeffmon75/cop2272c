// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 
#pragma once
#ifndef _FISH_H_
#define _FISH_H_
#include <string>
#include "Animal.h"
using namespace std;

class Fish : public Animal
{
public:
	Fish();
	Fish(string);
	Fish(string scaleShape, const double weight);
	string getScaleShape() const;
	void setScaleShape(string);
	void display() const;
	void swim() const;

private:
	string scaleShape;
};

#endif


