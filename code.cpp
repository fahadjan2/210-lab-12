// COMSC-210 | Lab 11 | Fahad Fawad Ahmad
// IDE used: Visual Studio
#include <iostream>
#include <fstream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    //File Opening
	ifstream file;
	file.open("elements.txt");

	if (!file.is_open()) {
	    cout << "Failed to open file" << endl;
	    return 1;
	}

    int studentID;

    while (getline(file, studentID)) {

    }

    file.close();
}