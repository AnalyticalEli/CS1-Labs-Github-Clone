//Eli Ahmed
//Array Basics with .(Dot) Operator.

#include <iostream>
#include<cstdlib>

using namespace std;

//Function Prototype

void printArray(double arr[], const int n);

void printArrayDbl(double arr[], const int n);

void printArrayChar(char arg[], const int n);  //This is for our int 

void printArrayBool(bool arr[], const int n); //This is for our Char c


int main(void) {

	//MOST OF MY NAME

	//Our goal is to find the number of spaces within the string below.

	char word[] = "Hello World this is a String"; //c-string
	string name = "Eli Ahmed";         


	cout << name << endl;
	cout << name[3] << endl;	 //Pulling the third character in string.
	cout << name.size() << endl; //With . after (ie: name.size), you can see size. 
								 //. after a variable is called "dot operator"
	return 0;

}


//Function Implementation

void printArray(double arr[], const int n) {

	for (int i = 0; i < n; i++) {
		cout << "Element " << i << " = " << arr[i] << endl;


	}

}

void printArrayDbl(double arr[], int n) {  //Double function for b

	for (int i = 0; i < n; i++) {
		cout << "Element " << i << " = " << arr[i] << endl;


	}
}


void printArrayChar(char arg[], const int n) { //Character function for c

	for (int i = 0; i < n; i++) {
		cout << "Element " << i << " = " << arg[i] << endl;

	}
}


void printArrayBool(bool arr[], const int n) {

	for (int i = 0; i < n; i++) {
		cout << "Element " << i << " = " << arr[i] << endl;


	}

}



//Staying with 6 because hello needs 6 spaces
//char word[size] = "Hello";  //5 for hello and 1 for the empty space. 