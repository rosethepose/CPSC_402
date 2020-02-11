#include <iostream>
#include <fstream>

#include "Assignment1.h"

using namespace std;

int main() {
    string filename = "";
		cout << "Please enter file name: ";
		cin >> filename;

		ifstream inputFile;
		inputFile.open(filename, ios::in);
    while (!inputFile.is_open()) {
			cout << "File not found, please enter a valid file name: ";
			cin >> filename;
			inputFile.open(filename, ios::in);
    }
		inputFile.close();
		Assignment1 a1(filename);
		a1.question1();
		a1.question2();
		a1.question3();

    return 0;
}
