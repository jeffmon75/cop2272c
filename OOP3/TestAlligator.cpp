// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP3
// Time of last successful debugging: 10/30/19 7:30am

#include <iostream>
#include "Alligator.h"
using namespace std;

int main()
{
	{
		Alligator alligator;
		cout << "The length of the alligator: " << alligator.getLength() << endl << "The biting force of the alligator: " << alligator.getBitingForce() << endl;
		alligator.setLength(25);
		alligator.setBitingForce(50);
		alligator.display();
		alligator.crawl();
		cout << endl;

		double newLength;
		double newBitingForce;
		cout << "What is the length of your Alligator? ";
		cin >> newLength;
		cout << "How much biting force does your Alligator have? ";
		cin >> newBitingForce;
		cout << endl;

		
		Alligator alligator1(newLength, newBitingForce);
		alligator1.setLength(newLength);
		alligator1.setBitingForce(newBitingForce);

		cout << "The length of the alligator: " << alligator1.getLength() << endl << "The biting force of the alligator: " << alligator1.getBitingForce() << endl;
		alligator1.display();
		alligator1.crawl();
		return 0;
	}
}