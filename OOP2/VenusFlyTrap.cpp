// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP2
// Time of last successful debugging: 10/30/19 7:30am

#include <iostream>
#include "VenusFlyTrap.h"
using namespace std;

VenusFlyTrap::VenusFlyTrap()
{
	height = 1.0;
	mouthArea = 1.0;
}

VenusFlyTrap::VenusFlyTrap(double newHeight, double newMouthArea)
{
	height = newHeight;
	mouthArea = newMouthArea;
}

void VenusFlyTrap::display()
{
	cout << "Height: " << height << " Mouth Area: " << mouthArea << endl;
}
void VenusFlyTrap::trap()
{
	cout << "The Venus Fly Trap captures insects by closing the mouth!" << endl;
}