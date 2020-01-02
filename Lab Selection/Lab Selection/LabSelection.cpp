// Jeff Hyle
// COP2272C-02 Computer Programming I
// Selection
// Date of last successful debugging: 8/31/19

#include <iostream>
using namespace std;

int main()
{
	// Read a six digit positive integer from the keyboard with proper prompt.
	// Assume that the integer does not start with 0.
	int d1,d2,d3,d4,d5,d6;
	int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
	int number;
	    cout << "Enter a 6 Digit Number: ";
		cin	>> number;
	// Count the number of occurrence of digits 0 - 9.
		// Single out all digits and save to different variables.
		d6 = number % 10;
		d5 = number / 10 % 10;
		d4 = number / 100 % 10;
		d3 = number / 1000 % 10;
		d2 = number / 10000 % 10;
		d1 = number / 100000 % 10;

		c0 = 0;
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		c9 = 0;
			// Count the occurrence by incrementing corresponding counters.
			// The switch statement must be used.
			switch (d6)
			{
			case 0: c0++; break;
			case 1: c1++; break;
			case 2: c2++; break;
			case 3: c3++; break;
			case 4: c4++; break;
			case 5: c5++; break;
			case 6: c6++; break;
			case 7: c7++; break;
			case 8: c8++; break;
			case 9: c9++; break;
			}
			switch (d5)
			{
			case 0: c0++; break;
			case 1: c1++; break;
			case 2: c2++; break;
			case 3: c3++; break;
			case 4: c4++; break;
			case 5: c5++; break;
			case 6: c6++; break;
			case 7: c7++; break;
			case 8: c8++; break;
			case 9: c9++; break;
			}
			switch (d4)
			{
			case 0: c0++; break;
			case 1: c1++; break;
			case 2: c2++; break;
			case 3: c3++; break;
			case 4: c4++; break;
			case 5: c5++; break;
			case 6: c6++; break;
			case 7: c7++; break;
			case 8: c8++; break;
			case 9: c9++; break;
			}
			switch (d3)
			{
			case 0: c0++; break;
			case 1: c1++; break;
			case 2: c2++; break;
			case 3: c3++; break;
			case 4: c4++; break;
			case 5: c5++; break;
			case 6: c6++; break;
			case 7: c7++; break;
			case 8: c8++; break;
			case 9: c9++; break;
			}
			switch (d2)
			{
			case 0: c0++; break;
			case 1: c1++; break;
			case 2: c2++; break;
			case 3: c3++; break;
			case 4: c4++; break;
			case 5: c5++; break;
			case 6: c6++; break;
			case 7: c7++; break;
			case 8: c8++; break;
			case 9: c9++; break;
			}
			switch (d1)
			{
			case 0: c0++; break;
			case 1: c1++; break;
			case 2: c2++; break;
			case 3: c3++; break;
			case 4: c4++; break;
			case 5: c5++; break;
			case 6: c6++; break;
			case 7: c7++; break;
			case 8: c8++; break;
			case 9: c9++; break;
			}
			// Print the count of all digits in the input integer in ascending order with proper
			// and adequate prompt, one digit a line.  Do NOT print digits that does not show in 
			// the input integer.
			// cout << "Digits " << d1 << d2 << d3 << d4 << d5 << d6 << endl; Used to test if digits were extracted properly.
			cout << "Quantity of Digits: " << endl;
			if (c0 > 0)
			{
				cout << "0: " << c0 << endl;
			}
			if (c1 > 0)
			{
				cout << "1: " << c1 << endl;
			}
			if (c2 > 0)
			{
				cout << "2: " << c2 << endl;
			}
			if (c3 > 0)
			{
				cout << "3: " << c3 << endl;
			}
			if (c4 > 0)
			{
				cout << "4: " << c4 << endl;
			}
			if (c5 > 0)
			{
				cout << "5: " << c5 << endl;
			}
			if (c6 > 0)
			{
				cout << "6: " << c6 << endl;
			}
			if (c7 > 0)
			{
				cout << "7: " << c7 << endl;
			}
			if (c8 > 0)
			{
				cout << "8: " << c8 << endl;
			}
			if (c9 > 0)
			{
				cout << "9: " << c9 << endl;
			}
	return 0;
}

