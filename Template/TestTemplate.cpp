// Jeff Hyle
// COP2272C-02 Computer Programming I
// Template
// Date of last successful debugging: 12/1/19

#include <iostream>
using namespace std;

template < typename T1 >
class Creature
{
private:
	T1 age;
public:
	Creature<T1>();
	Creature<T1>(T1 age);
	T1 getAge();
	void setAge(T1 age);
	void display();
};

template < typename T1, typename T2 >
class Plant : public Creature<T1>
{
private:
	T2 height;
public:
	Plant<T1,T2>();
	Plant<T1, T2>(T1 age, T2 height);
	T2 getHeight();
	void setHeight(T2 height);
	void display();
};

template < typename T1>
Creature<T1>::Creature(){
	age = 1;
}
template < typename T1>
Creature<T1>::Creature(T1 age) {
	this->age = age;
}
template < typename T1>
T1 Creature<T1>::getAge() {
	return age;
}
template < typename T1>
void Creature<T1>::setAge(T1 age) {
	this->age = age;
}
template < typename T1>
void Creature<T1>::display() {
	cout << "Age of the Creature Class: " << age << endl;
}

template < typename T1, typename T2>
Plant<T1, T2>::Plant() : Creature<T1>(){
	height = 2;
}
template < typename T1, typename T2>
Plant<T1, T2>::Plant(T1 age, T2 height) : Creature<T1>(age) {
	this->age = age;
	this->height = height;
}
template < typename T1, typename T2>
T2 Plant<T1,T2>::getHeight() {
	return height;
}
template < typename T1, typename T2>
void Plant<T1,T2>::setHeight(T2 height) {
	this->height = height;
}
template < typename T1, typename T2>
void Plant<T1,T2>::display() {
	cout << "Height of the Plant Class: " << height << endl;
}

template < typename T>
T minV(T v1, T v2) {
	if (v1 <= v2)
		return v1;
	if (v2 <= v1)
		return v2;
}

int main()
{
	Creature<int> c1;
	Plant<int, int> p1;
	cout << "**Before setAge and setHeight implemented**" << endl;
	cout << "Age of the Creature Object: " << c1.getAge() << endl;
	cout << "Age of the Plant Object: " << p1.getAge() << endl;
	cout << "Height of the Plant Object: " << p1.getHeight() << endl << endl;
	c1.setAge(3);
	p1.setAge(4);
	p1.setHeight(4);
	cout << "**After setAge and setHeight implemented**" << endl;
	cout << "Age of the Creature Object: " << c1.getAge() << endl;
	cout << "Age of the Plant Object: " << p1.getAge() << endl;
	cout << "Height of the Plant Object: " << p1.getHeight() << endl << endl;
	cout << "**Result of display function calls**" << endl;
	c1.display();
	p1.display();
	cout << "The least age between the objects: " << minV(p1.getAge(), c1.getAge()) << endl;
	return 0;
}