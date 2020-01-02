// Jeff Hyle
// COP2272C - 02 Computer Programming 1
// Recursion1
// Date of Last Debugging: 10/12/19

#include <iostream>
using namespace std;

bool isPrime(int k)
{
	bool prime = true;
	for (int j = 2; j * j <= k; j++)
	{
		if (k % j == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

int myPrime(int k) {
	if (k == 1) {
		return 2;
	}
	isPrime(k);
	while (true) {
		int prev = myPrime(k - 1);
		prev++;
		if (isPrime(k) == true) {
			cout << k << " ";
			break;
		}
		return k;
	}
}

int main()
{
	cout << "Please input a positive integer to display the nth prime number tree: ";
	int k;
	cin >> k;
	cout << "Prime numbers from 1 to " << k << ": ";
	myPrime(k);
	return 0;
}
