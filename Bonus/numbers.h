#pragma once

class Numbers {
private:
	int totalitems=0;
	int chosenitems=0;
	int number=0;
public:
	Numbers();
	Numbers(int, int);
	int getTotalItems();
	void setTotalItems(int);
	int getChosenItems();
	void setChosenItems(int);
	int getNumber();
	void setNumber(int);

	int factorial(int);
	int faultchecking(int,int);
};
