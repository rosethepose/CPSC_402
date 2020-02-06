#include <iostream>

#include "Assignment1.h"

using namespace std;

Assignment1::Assignment1(string file)
{
	input = file;
}

void Assignment1::question1()
{
	int state = 0;
	int size = 10;
	if(input.length() > 0)
	{
		size = input.length();
	}
	int indices[20] = {};
	char letter = ' ';
	int index = 0;
	for(int i = 0; i < input.length(); ++i)
	{
		letter = input.at(i);
		if(state == 0 && letter == 'a')
		{
			state = 1;
		}
		else if(state == 1)
		{
			if(letter == 'b')
			{
				state = 2;
			}
			else if(letter != 'a')
			{
				state = 0;
			}
		}
		else if(state == 2)
		{
			if(letter == 'a')
			{
				state = 3;
			}
			else
			{
				state = 0;
			}
		}
		else if(state == 3)
		{
			if(letter == 'b')
			{
				state = 4;
				indices[index] = i + 1;
				index++;
			}
			else if(letter == 'a')
			{
				state = 1;
			}
			else
			{
				state = 0;
			}
		}
		else if(state == 4)
		{
			if(letter == 'a')
			{
				state = 3;
			}
			else
			{
				state = 0;
			}
		}
	}
	cout << "Question 1:";
	for(int i = 0; i < 20; i++)
	{
		cout << " " << indices[i];
	}
	cout << endl;
}
