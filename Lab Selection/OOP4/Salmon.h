// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 
#pragma once
#ifndef _SALMON_H_
#define _SALMON_H_
#include <iostream>
#include <string>
#include "Animal.h"
#include "Fish.h"
using namespace std;

class Salmon : public Fish 
{
public:
	Salmon();
	Salmon(double);
	Salmon(const double eggNum, string scaleShape, const double weight);
	double getEggNum() const;
	void setEggNum(double);
	void display() const;
	void backStream() const;

private:
	double eggNum;
};

#endif


