// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP3
// Time of last successful debugging: 10/30/19 7:30am

#pragma once

class Alligator
{
public:
	Alligator();
	Alligator(double, double);
	double getLength();
	double getBitingForce();
	void setLength(double);
	void setBitingForce(double);

	void display();
	void crawl();

private:
	double length;
	double bitingForce;
};


