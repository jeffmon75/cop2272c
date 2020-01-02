// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 
#pragma once
#ifndef _BIRD_H_
#define _BIRD_H_
#include <string>
#include "Animal.h"
using namespace std;

class Bird : Animal
{
public:
	Bird();
	Bird(string);
	Bird(string featherColor, const double weight);
	string getFeatherColor() const;
	void setFeatherColor(const string);
	void display() const;
	void fly() const;

private:
	string featherColor;
};

#endif


