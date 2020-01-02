// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 11/6/2019

#pragma once
#ifndef _FISH_H_
#define _FISH_H_
#include <string>
#include "Animal.h"

class Fish : public Animal
{
public:
	Fish();
	Fish(std::string scaleShape);
	Fish(std::string scaleShape, double weight);
	std::string getScaleShape();
	void setScaleShape(std::string);
	void display();
	void swim();

private:
	std::string scaleShape;
};

#endif


