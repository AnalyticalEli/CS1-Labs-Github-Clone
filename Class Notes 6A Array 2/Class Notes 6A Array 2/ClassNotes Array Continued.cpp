//Eli Ahmed
//Array Basics Part 2  

#include <iostream>
#include<cstdlib>

using namespace std;

//Function Prototype

void printArrayDbl(double arr[], const int n);

void printArrayChar(char arg[], const int n);  //This is for our int 

void printArrayBool(bool arr[], const int n); //This is for our Char c


int main(void) {

	//Fix with chatgpt.

	//Our goal is to find the number of spaces within the string below.

	char word[] = "Hello World this is a String"; //c-string
		

	int i = 0;   //Counting the number of characters above using while loop
	int sum = 0;
	while (word[i] != '\0') {
		sum++;
		i++;
	}
	
	sum++;
	
	cout << "Size: " << sum << endl;

	int count			//Our space counter
	for (int i = 0; i < sum; i++) {
		if (word[i] == '') { //Loop only works when spaces work.
			count++;
		}



	}

	cout << "Sum of spaces is: " << endl;
 
	//cout << int(&word[4]) << endl; The & in front of word shows its address (location)
	

	return 0;

}


//Function Implementation

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