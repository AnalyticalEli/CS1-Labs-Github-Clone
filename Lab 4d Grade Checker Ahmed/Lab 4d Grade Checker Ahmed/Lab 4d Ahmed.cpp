//Eli Ahmed
//Lab 4d  /Holding Cntrl + mouse zooms in and out

#include<iostream>

using namespace std;

//Function Prototype:

bool checkForA(int x);

int main(void) {

	int x, A;

	//Prompt: We're creating a relatively simple boolean grade checker.

	cout << "This program checks whether you received an A or not.\n" << endl;

	//User inputs: 

	cout << "Enter your current grade (%): ";
	cin >> x;


	if (checkForA(x)) {
		cout << "You have earned an A.";

	}
	else {
		cout << "You have not earn an A.";
	}

	return 0;
}


//Function

bool checkForA(int x) {

	return (x >= 90);  //Made the inequality relatively simple and efficient.
}