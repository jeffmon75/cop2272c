// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 11/6/2019

#include <iostream>
#include <string>
#include "Bird.h"

Bird::Bird()
{
	featherColor = "default color";
}

Bird::Bird(std::string featherColor)
{
	this->featherColor = featherColor;
}

Bird::Bird(std::string featherColor, double weight) : Animal(weight)
{
	this->featherColor = featherColor;
}

std::string Bird::getFeatherColor()
{
	return featherColor;
}

void Bird::setFeatherColor(std::string featherColor)
{
	this->featherColor = featherColor;
}

void Bird::display()
{
	std::cout << "Display Method Feather Color: " << featherColor << std::endl;
}

void Bird::fly()
{
	std::cout << "Fly Method:  This bird flies how it wants to!" << std::endl;
}