// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 11/6/2019

#include <iostream>
#include <string>
#include "Fish.h"

Fish::Fish()
{
	scaleShape = "default shape";
}

Fish::Fish(std::string scaleShape)
{
	this->scaleShape = scaleShape;
}

Fish::Fish(std::string scaleShape, double weight) : Animal(weight)
{
	this->scaleShape = scaleShape;
}

std::string Fish::getScaleShape()
{
	return scaleShape;
}

void Fish::setScaleShape(std::string scaleShape)
{
	this->scaleShape = scaleShape;
}

void Fish::display()
{
	std::cout << "Display Method Scale Shape: " << scaleShape << std::endl;
}

void Fish::swim()
{
	std::cout << "Swim Method:  This fish swims when it wants to!" << std::endl;
}