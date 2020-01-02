// Jeff Hyle
// COP2272C-02 Computer Programming I
// Operator
// Date of last successful debugging: 8/29/19

#include <iostream>
using namespace std;

int main()
{
	// Input: Read a 3 digit positive integer from the keyboard (user) with proper prompt text and save it to a variable
	int integer;
		cout << "Please enter a 3 digit positve integer: ";
		cin >> integer;

	// Processing #1:  From the right most digit, extract every digit from the input integer using modular operator % then save digit to a separate variable
	// Processing #2:  Remove the right most digit from the integer using integer division operator /
	// Processing #3:  Repeat above two steps (i.e. #1 & #2) till all digits have been extracted
	int digit1, digit2, digit3;
		
		digit3 = integer % 10;
		digit2 = integer / 10 % 10;
		digit1 = integer / 100 % 10;

	// Output:  Print out all digits of the integer in the left-to-right or the right-to-left order with proper prompts
		cout << "The 3 digit integer (" << integer << ") in left-to-right order: " << digit1 << digit2 << digit3 <<endl;
		cout << "The 3 digit integer (" << integer << ") in right-to-left order: " << digit3 << digit2 << digit1 <<endl;
	return 0;
}
