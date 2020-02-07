#include <iostream>

#include "Assignment1.h"

using namespace std;

Assignment1::Assignment1(string file){
	input = file;
}

void Assignment1::question1(){
	int state = 0;
	char letter = ' ';
	bool match = false;
	cout << "Question 1:";
	for(int i = 0; i < input.length(); ++i){
		letter = input.at(i);
		if(state == 0){
			if(letter == 'a'){
				state = 1;
			}
		}
		else if(state == 1){
			if(letter == 'b'){
				state = 2;
			}
			else if(letter != 'a'){
				state = 0;
			}
		}
		else if(state == 2){
			if(letter == 'a'){
				state = 3;
			}
			else{
				state = 0;
			}
		}
		else if(state == 3){
			if(letter == 'b'){
				state = 4;
				cout << " " << i + 1;
				match = true;
			}
			else if(letter == 'a'){
				state = 1;
			}
			else{
				state = 0;
			}
		}
		else if(state == 4){
			if(letter == 'a'){
				state = 3;
			}
			else{
				state = 0;
			}
		}
	}
	if(!match){
		cout << " No Matches";
	}
	cout << endl;
}

void Assignment1::question2(){
	int state = 0;
	char letter = ' ';
	bool match = false;
	cout << "Question 2:";
	for(int i = 0; i < input.length(); ++i){
		letter = input.at(i);
		if(state == 0){
			if(letter == 'a'){
				state = 1;
			}
		}
		else if(state == 1){
			if(letter == 'b'){
				state = 2;
			}
			else if(letter != 'a'){
				state = 0;
			}
		}
		else if(state == 2){
			if(letter == 'c'){
				state = 3;
			}
			else if(letter == 'a'){
				state = 1;
			}
			else{
				state = 0;
			}
		}
		else if(state == 3){
			if(letter == 'c'){
				state = 4;
			}
		}
		else if(state == 4){
			if(letter == 'b'){
				state = 5;
			}
			else if(letter != 'c')
			{
				state = 3;
			}
		}
		else if(state == 5)
		{
			if(letter == 'a'){
				state = 6;
				cout << " " << i + 1;
				match = true;
			}
			else if(letter == 'c'){
				state = 4;
			}
			else{
				state = 3;
			}
		}
		else if(state == 6){
			if(letter == 'c'){
				state = 4;
			}
			else{
				state = 3;
			}
		}
	}
	if(!match){
		cout << " No Matches";
	}
	cout << endl;
}

void Assignment1::question3(){
	int state = 0;
	char letter = ' ';
	bool match = false;
	cout << "Question 3:";
	for(int i = 0; i < input.length(); ++i){
		letter = input.at(i);
		if(state == 0){
			if(letter == 'a'){
				state = 1;
			}
		}
		else if(state == 1){ //a
			if(letter == 'a'){
				state = 2;
				cout << " " << i + 1;
				match = true;
			}
			else if(letter == 'b'){
				state = 3;
			}
			else{
				state = 0;
			}
		}
		else if(state == 2){
			if(letter == 'a'){
				cout << " " << i + 1;
				match = true;
			}
			else if(letter == 'b'){
				state = 3;
			}
			else{
				state = 0;
			}
		}
		else if(state == 3){
			if(letter == 'b'){
				state = 4;
				cout << " " << i + 1;
				match = true;
			}
			else if(letter == 'a'){
				state = 1;
			}
			else{
				state = 0;
			}
		}
		else if(state == 4){
			if(letter == 'a'){
				state = 1;
			}
			else{
				letter = 0;
			}
		}
	}
	if(!match){
		cout << " No Matches";
	}
	cout << endl;
}
