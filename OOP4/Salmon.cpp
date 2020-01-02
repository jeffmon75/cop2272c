// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 11/6/2019

#include <iostream>
#include <string>
#include "Salmon.h"


Salmon::Salmon()
{
	eggNum = 1;
}

Salmon::Salmon(double eggNum)
{
	this->eggNum = eggNum;
}

Salmon::Salmon(double eggNum, std::string scaleShape, double weight) : Fish(scaleShape) 
{
	this->eggNum = eggNum;
}

double Salmon::getEggNum()
{
	return eggNum;
}

void Salmon::setEggNum(double eggNum)
{
	this->eggNum = eggNum;
}

void Salmon::display()
{
	std::cout << "Display Method Egg Number: " << eggNum << std::endl;
}

void Salmon::backStream()
{
	std::cout << "BackStream Method:  This salmon swims back stream really hard!" << std::endl;
}