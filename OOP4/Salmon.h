// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 11/6/2019

#pragma once
#ifndef _SALMON_H_
#define _SALMON_H_
#include <iostream>
#include <string>
#include "Animal.h"
#include "Fish.h"

class Salmon : public Fish 
{
public:
	Salmon();
	Salmon(double eggNum);
	Salmon(double eggNum, std::string scaleShape, double weight);
	double getEggNum();
	void setEggNum(double);
	void display();
	void backStream();

private:
	double eggNum;
};

#endif


