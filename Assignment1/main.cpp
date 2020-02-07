#include <iostream>
#include "Assignment1.h"
using namespace std;

int main(int argc, char** argv)
{
	string input = "";
	cout << "Input: ";
	cin >> input;
	Assignment1 a1(input);
	a1.question1();
	a1.question2();
	a1.question3();
	return 0;
}
