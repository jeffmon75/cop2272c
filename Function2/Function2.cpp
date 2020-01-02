// Jeff Hyle
// COP 2272C-02 Computer Programming I
// Function 2
// Date of last successful debugging: 9/18/19

#include <iostream>
using namespace std;

void rShift(int& n1, int& n2, int& n3, int round, int& max, int& min, int& product)
{
	// Max value of the 3 integers
	if (n3 >= n1 && n3 >= n2)
		max = n3;
	else if (n2 >= n1 && n2 >= n3)
		max = n2;
	else if (n1 >= n2 && n1 >= n3)
		max = n1;

	// Min value of the 3 integers
	if (n3 <= n1 && n3 <= n2)
		min = n3;
	else if (n2 <= n1 && n2 <= n3)
		min = n2;
	else if (n1 <= n2 && n1 <= n3)
		min = n1;

	// Product of the 3 integers
	product = n1 * n2 * n3;

	// Swap integers 
	for (int r = 0; r < round; r++)
	{
		int swaptemp = n1;
		n1 = n3;
		n3 = n2;
		n2 = swaptemp;
	}
}

int main()
{
	// Gather user input of the integers and number of rounds
	cout << "Please enter three integers and chose how many rounds you would like to shift them." << endl;
	cout << "Please enter your first integer: ";
	int n1;
	cin >> n1;
	cout << "Please enter your second integer: ";
	int n2;
	cin >> n2;
	cout << "Please enter your third integer: ";
	int n3;
	cin >> n3;
	cout << "How many rounds would you like to shift the integers? ";
	int round;
	cin >> round;
	
	// Call rShift function
	int max = 0;
	int min = 0;
	int product = 0;
	rShift(n1, n2, n3, round, max, min, product);

	// Display output results
	cout << "After " << round << " rounds, the three integers are now in the following position: " << n1 << n2 << n3 << endl;
	cout << "The max value among the three integers is " << max << "." << endl;
	cout << "The min value among the three integers is " << min << "." << endl;
	cout << "The product of the three integers is " << product << "." << endl;

	return 0;
}