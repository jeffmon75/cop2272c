// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 

#include <iostream>
#include <string>
#include "Salmon.h"
using namespace std;

Salmon::Salmon()
{
	eggNum = 1;
}

Salmon::Salmon(const double eggNum)
{
	this->eggNum = eggNum;
}

Salmon::Salmon(const double eggNum, string scaleShape, const double weight) : Fish(scaleShape)
{
	this->eggNum = eggNum;
}

double Salmon::getEggNum() const 
{
	return eggNum;
}

void Salmon::setEggNum(double eggNum)
{
	this->eggNum = eggNum;
}

void Salmon::display() const
{
	cout << "Egg Number: " << eggNum << endl;
}

void Salmon::backStream() const
{
	cout << "This salmon swims back stream really hard!" << endl;
}