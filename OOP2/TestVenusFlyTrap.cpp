// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP2
// Time of last successful debugging: 10/30/19 7:30am

#include <iostream>
#include "VenusFlyTrap.h"
using namespace std;

int main()
{
	{
		VenusFlyTrap venusflytrap;
		venusflytrap.display();
		venusflytrap.trap();
		cout << endl;

		double newHeight;
		double newMouthArea;
		cout << "What is the height of your Venus Fly Trap? ";
		cin >> newHeight;
		cout << "What is the mouth area of your Venus Fly Trap? ";
		cin >> newMouthArea;
		cout << endl;

		VenusFlyTrap venusflytrap1(newHeight, newMouthArea);
		venusflytrap1.display();
		venusflytrap1.trap();
		return 0;
	}
}