// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 

#include <iostream>
#include <string>
#include "Bird.h"
using namespace std;

Bird::Bird()
{
	featherColor = "white";
}

Bird::Bird(string featherColor)
{
	this->featherColor = featherColor;
}

Bird::Bird(string featherColor, const double weight) : Animal(weight)
{
	this->featherColor = featherColor;
}

string Bird::getFeatherColor() const
{
	return featherColor;
}

void Bird::setFeatherColor(string featherColor)
{
	this->featherColor = featherColor;
}

void Bird::display() const
{
	cout << "Feather Color: " << featherColor << endl;
}

void Bird::fly() const
{
	cout << "This bird flies how it wants to!" << endl;
}