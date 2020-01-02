#pragma once
#include "numbers.h"

class Combination : Numbers {
private:
	int totalitems=0;
	int chosenitems=0;
	int combinationresult=0;
public:
	Combination();
	Combination(int,int);
	int getTotalItems();
	void setTotalItems(int);
	int getChosenItems();
	void setChosenItems(int);
	void display();
};
