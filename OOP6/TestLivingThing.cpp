// Jeff Hyle
// COP 2272C-02 Computer Programming I
// OOP6
// Date of last successful debugging: 11/18/19

#include <iostream>
using namespace std;

class LivingThing
{
public:
	LivingThing()
	{
		cout << "Constructor of LivingThing class." << endl;
	}
	virtual void grow()
	{
		cout << "Method grow of LivingThing class" << endl;
	}
};

class Animal : public LivingThing
{
public:
	Animal()
	{
		cout << "Constructor of Animal class." << endl;
	}
	virtual void eat()
	{
		cout << "Method eat of Animal class" << endl;
	}
	void grow()
	{
		cout << "Method grow of Animal class" << endl;
	}
};

class Bird: public Animal
{
public:
	Bird()
	{
		cout << "Constructor of Bird class." << endl;
	}
	void grow()
	{
		cout << "Method grow of Bird class" << endl;
	}
};

class Fish : public Animal
{
public:
	Fish()
	{
		cout << "Constructor of Fish class." << endl;
	}
};

class Bass : public Fish
{
public:
	Bass()
	{
		cout << "Constructor of Bass class." << endl;
	}
	void eat()
	{
		cout << "Method eat of Bass class" << endl;
	}
};

class Plant : public LivingThing
{
public:
	Plant()
	{
		cout << "Constructor of Plant class." << endl;
	}
	virtual void photosyn()
	{
		cout << "Method photosyn of Plant class" << endl;
	}
};

class Grass : public Plant
{
public:
	Grass()
	{
		cout << "Constructor of Grass class." << endl;
	}
};

class Tree : public Plant
{
public:
	Tree()
	{
		cout << "Constructor of Tree class." << endl;
	}
	void grow()
	{
		cout << "Method grow of Tree class" << endl;
	}
};

class Wheat: public Grass
{
public:
	Wheat()
	{
		cout << "Constructor of Wheat class." << endl;
	}
	void photosyn()
	{
		cout << "Method photosyn of Wheat class" << endl;
	}
};

class Pine : public Tree
{
public:
	Pine()
	{
		cout << "Constructor of Pine class." << endl;
	}
};

void display(LivingThing& lv)
{
	lv.grow();
}

int main()
{
	Bird b1;
	b1.grow();
	b1.eat();
	cout << endl;
	Bass ba1;
	ba1.grow();
	ba1.eat();
	cout << endl;
	Wheat w1;
	w1.grow();
	w1.photosyn();
	cout << endl;
	Pine p1;
	p1.grow();
	p1.photosyn();
	cout << endl;
	display(b1);
	cout << endl;
	display(ba1);
	cout << endl;
	display(w1);
	cout << endl;
	display(p1);
	cout << endl;
	return 0;
}