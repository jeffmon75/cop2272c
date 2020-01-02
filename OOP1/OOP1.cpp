// Jeff Hyle
// COP 2272C-02 Computer Programming I
// OOP1
// Date of last successful debugging: 10/18/19 

#include <iostream>
#include <string>
using namespace std;

class Building
{
public:
	string shape;
	string color;
	int RoomNum;

	Building()
	{
		shape = "Square";
		color = "Brown";
		RoomNum = 10;
	}

	Building(string NewShape, string NewColor, int NewRoomNum)
	{
		shape = NewShape;
		color = NewColor;
		RoomNum = NewRoomNum;
	}

	void raiseRoof()
	{
		cout << endl << "Yes, We raise the roof by singing `Fly Phoenix, Fly!`" <<endl;
	}

	void display()
	{
		cout << "Shape: " << shape << endl << "Color: " << color << endl << "RoomNum: " << RoomNum << endl <<endl;
	}
};
int main()
{
	string usershape;
	string usercolor;
	int userRoomNum;

	Building buildingdefault;
	buildingdefault.raiseRoof();
	buildingdefault.display();
		
	cout << "What shape is this building?" << endl;
	cin >> usershape;
	cout << "What color is this building?" << endl;
	cin >> usercolor;
	cout << "How many rooms does your building have?" << endl;
	cin >> userRoomNum;

	Building building1(usershape, usercolor, userRoomNum);
	building1.raiseRoof();
	building1.display();

	return 0;
}