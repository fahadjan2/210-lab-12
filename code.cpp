// COMSC-210 | Lab 11 | Fahad Fawad Ahmad
// IDE used: Visual Studio
//Program uses an array to read off a file containing student IDs. It will read off the file and display a bunch of information based on it
#include <iostream>
#include <fstream>
#include <algorithm>
#include <array>
using namespace std;

const int SIZE = 30;

int main() {
	cout << "test" << endl;
    //File Opening
	ifstream file;
	file.open("elements.txt");
	if (!file.is_open()) {
	    cout << "Failed to open file" << endl;
	    return 1;
	}
    file.close();

	//Array Initialization
	array<int, SIZE> studentIDs;
	string sID;
	int count = 0;
    while (getline(file, sID)) {
		studentIDs[count] = stoi(sID);
		cout << sID << endl;
		cout << studentIDs[count] << endl;
		count++;
    }

}

