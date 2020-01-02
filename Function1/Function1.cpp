// Jeff Hyle
// COP2272C-02 Computer Programming I
// Function 1
// Last successful debugging: 9/18/19

#include <iostream>
using namespace std;

int gcd (int n1, int n2)
{
	// Return the greatest common divisor of two parameters
	if (n2 == 0)
		return n1;
	return gcd(n2, n1 % n2);
}

int lcm (int n1, int n2)
{
	// Return the least common multiple of two parameters
	int lcm;
	if (n1 > n2)
		lcm = n1;
	else
		lcm = n2;
	while (1)
	{
		if (lcm % n1 == 0 && lcm % n2 == 0)
		{
			return lcm;
		}
		lcm++;
	}
}

void printResult(int n1, int n2)
{
	// Receive two input numbers from main, then call both
	// gcd() and lcm() and pass received two numbers to gcd() and lcm()
	// Print received results of gcd() and lcm()
    int gcdresult = gcd(n1, n2);
	cout << "The GCD of " << n1 << " and " << n2 << " is " << gcdresult << endl;
    int lcmresult = lcm(n1, n2);
	cout << "The LCM of " << n1 << " and " << n2 << " is " << lcmresult << endl;
}

int main()
{
	// Call printResult ()
	int n1;
	int n2;

	cout << "Please enter your first non-zero integer: ";
	cin >> n1;
	cout << "Please enter your second non-zero integer: ";
	cin >> n2;

	while (n1 == 0 || n2 == 0)
	{
		cout << "Please use a non zero integer and retry!" << endl;
		return 0;
	}
	printResult(n1, n2);
		
	return 0;
}