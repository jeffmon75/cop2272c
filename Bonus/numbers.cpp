// Jeff Hyle
// COP 2272C-02 Computer Programming I
// Bonus
// Date of last successful debugging: 11/27/19 

#include <iostream>
#include "numbers.h"
using namespace std;

Numbers::Numbers() {
	cout << "Calculations Used in the Numbers Parent Class." << endl;
}

Numbers::Numbers(int totalitemsUser, int chosenitemsUser) {
	totalitems = totalitemsUser;
	chosenitems = chosenitemsUser;
}

int Numbers::getTotalItems() {
	return totalitems;
}

void Numbers::setTotalItems(int totalitemsUser) {
	totalitems = totalitemsUser;
}

int Numbers::getChosenItems() {
	return chosenitems;
}

void Numbers::setChosenItems(int chosenitemsUser) {
	chosenitems = chosenitemsUser;
}

int Numbers::getNumber() {
	return number;
}

void Numbers::setNumber(int number) {
	number = number;
}
int Numbers::factorial(int number) {
	if ((number == 0) || (number == 1))
		return 1;
	else 
		return number*factorial(number-1);
}
int Numbers::faultchecking(int totalitemsUser, int chosenitemsUser) {
	if (totalitemsUser <= 0 || chosenitemsUser <= 0) {
		cout << "Please enter positive integers only and try again.  Thank You" << endl;
		exit(0);
	}
	else
		return 0;
}
