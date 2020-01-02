// Jeff Hyle
// COP2272C-02 Computer Programming I
// Array1
// Date of last successful debugging: 9/26/19

#include <iostream>
using namespace std;

int main(){
	long long number;
	cout << "Number: " << endl;
	cin >> number;
	cout << "\nFor the number " << number << ".  Below is displayed how many times each integer is present:" << endl << endl;
	int counter[10]; 
	int index = 0;
	for (int i = 0; i < 10; i++) {
		counter[i] = 0;
		cout << "The integer " << i << " has a presence of ";
		long long j;
		for (j = number; j > 0; j = j / 10) {
			int remainder;
			remainder = j % 10;
			if (remainder == i) {
				counter[i]++;
			}
		}
		cout << counter[i] << "." << endl;
	}
	return 0;
}
