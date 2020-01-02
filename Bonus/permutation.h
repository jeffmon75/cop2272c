#pragma once
#include "numbers.h"

class Permutation : Numbers {
private:
	int totalitems=0;
	int chosenitems=0;
	int permutationresult=0;
public:
	Permutation();
	Permutation(int, int);
	int getTotalItems();
	void setTotalItems(int);
	int getChosenItems();
	void setChosenItems(int);
	void display();
};
