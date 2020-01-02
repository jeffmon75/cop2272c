// Jeff Hyle
// COP2272C-02 Computer Programming I
// Bonus
// Date of last successful debugging: 12/1/19

#include <iostream>
#include "numbers.h"
#include "combination.h"
#include "permutation.h"
using namespace std;

int main() {
	cout << "Number of items in the set: " << endl;
	int totalitemsUser=0;
	cin >> totalitemsUser;
	cout << "Number of chosen elements: " << endl;
	int chosenitemsUser=0;
	cin >> chosenitemsUser;
	cout << endl;

	Numbers numbers1(totalitemsUser,chosenitemsUser);
	numbers1.faultchecking(totalitemsUser, chosenitemsUser);

	Combination combination;
	Combination combination1(totalitemsUser, chosenitemsUser);
	combination1.setTotalItems(totalitemsUser);
	combination1.setChosenItems(chosenitemsUser);
	combination1.display();
	cout << endl;

	Permutation permutation;
	Permutation permutation1(totalitemsUser, chosenitemsUser);
	permutation1.setTotalItems(totalitemsUser);
	permutation1.setChosenItems(chosenitemsUser);
	permutation1.display();
	cout << endl;
		
	return 0;
}