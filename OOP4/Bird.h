// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 11/6/2019

#pragma once
#ifndef _BIRD_H_
#define _BIRD_H_
#include <string>
#include "Animal.h"

class Bird : public Animal
{
public:
	Bird();
	Bird(std::string featherColor);
	Bird(std::string featherColor, double weight);
	std::string getFeatherColor();
	void setFeatherColor(std::string);
	void display();
	void fly();

private:
	std::string featherColor = "white";
};

#endif


