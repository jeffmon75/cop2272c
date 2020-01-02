// Jeff Hyle
// COP2272C-02 Computer Programming I
// Loop1Version1
// Date of last successful debugging: 10/12/19

#include <iostream>
using namespace std;

int main()
{
	// Initialize input variable
	int number;

	// Display input and store input variable
	cout << "Input: ";
	cin >> number;

	// Display Output
	cout << "Output: ";

	// Loop to determine which numbers are prime less than input
	for (int i = 2; i <= number; i++)
	{
		bool prime = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime) cout << i << " ";
	}

	// Format output and exit
	cout << endl;
	return 0;
}