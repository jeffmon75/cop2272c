#include <iostream>
#include "permutation.h"
using namespace std;

Permutation::Permutation() {
	cout << "Calculations used in the Permutation Child Class." << endl;
}

Permutation::Permutation(int totalitemsUser, int chosenitemsUser) {
	totalitems = totalitemsUser;
	chosenitems = chosenitemsUser;
	permutationresult = (factorial(totalitems)) / (factorial(totalitems-chosenitems));
}

int Permutation::getTotalItems() {
	return totalitems;
}

void Permutation::setTotalItems(int totalitemsUser) {
	totalitems = totalitemsUser;
}

int Permutation::getChosenItems() {
	return chosenitems;
}

void Permutation::setChosenItems(int chosenitemsUser) {
	chosenitems = chosenitemsUser;
}

void Permutation::display() {
	cout << "Permutation Result: " << permutationresult << endl;
}