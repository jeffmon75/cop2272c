// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP3
// Time of last successful debugging: 10/30/19 7:30am

#include <iostream>
#include "Alligator.h"
using namespace std;

Alligator::Alligator()
{
	length = 1.0;
	bitingForce = 1.0;
}

Alligator::Alligator(double newLength, double newBitingForce)
{
	length = newLength;
	bitingForce = newBitingForce;
}

double Alligator::getLength()
{
	return length;
}

double Alligator::getBitingForce()
{
	return bitingForce;
}

void Alligator::setLength(double newLength)
{
	length = newLength;
}

void Alligator::setBitingForce(double newBitingForce)
{
	bitingForce = newBitingForce;
}

void Alligator::display()
{
	cout << "Length: " << length << " Biting Force: " << bitingForce << endl;
}
void Alligator::crawl()
{
	cout << "The Alligator crawls sideways!" << endl;
}