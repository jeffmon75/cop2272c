#include <iostream>
#include "combination.h"
using namespace std;

Combination::Combination(){
	cout << "Calculations Used in the Combination Child Class." << endl;
}

Combination::Combination(int totalitemsUser, int chosenitemsUser) {
	totalitems = totalitemsUser;
	chosenitems = chosenitemsUser;
	combinationresult = (factorial(totalitems)) / (factorial(chosenitems) * factorial(totalitems-chosenitems));
}

int Combination::getTotalItems() {
	return totalitems;
}

void Combination::setTotalItems(int totalitemsUser) {
	totalitems = totalitemsUser;
}

int Combination::getChosenItems() {
	return chosenitems;
}

void Combination::setChosenItems(int chosenitemsUser) {
	chosenitems = chosenitemsUser;
}

void Combination::display() {
	cout << "Combination Result: " << combinationresult << endl;
}

