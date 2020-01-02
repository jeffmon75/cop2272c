// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 

#include <iostream>
#include <string>
#include "Fish.h"
using namespace std;

Fish::Fish()
{
	scaleShape = "triangle";
}

Fish::Fish(string scaleShape)
{
	this->scaleShape = scaleShape;
}

Fish::Fish(string scaleShape, const double weight) : Animal(weight)
{
	this->scaleShape = scaleShape;
}

string Fish::getScaleShape() const
{
	return scaleShape;
}

void Fish::setScaleShape(string scaleShape)
{
	this->scaleShape = scaleShape;
}

void Fish::display() const
{
	cout << "Scale Shape: " << scaleShape << endl;
}

void Fish::swim() const
{
	cout << "This swims when it wants to!" << endl;
}