// Jeff Hyle
// COP 2272C-02 Computer Programming I
// Recursion 2
// Date of last successful debugging: 10/12/19

#include <iostream>
using namespace std;

void moveOne(int startT, int destT, int numDisk) {
	cout << "Move Disk" << numDisk << " from Tower" << startT << " to Tower" << destT << endl;
}

void moveMany(int destT, int numDisk, int bufferT, int startT) {
	if (numDisk == 1) {
		cout << startT << " " << destT << " " << numDisk << endl;
		moveOne(startT, destT, numDisk);
	}
	else {
		cout << startT << " " << bufferT << " " << destT << " " << numDisk - 1 << endl;
		moveMany(bufferT, numDisk-1, destT, startT);
		cout << startT << " " << destT << " " << numDisk << endl;
		moveOne(startT, destT, numDisk);
		cout << bufferT << " " << destT << " " << startT << " " << numDisk - 1 << endl;
		moveMany(destT, numDisk-1, startT, bufferT);
	}
}
int main() {
	moveMany(3, 4, 2, 1);
}