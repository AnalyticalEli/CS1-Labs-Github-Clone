//Eli Ahmed
//Lab 7C Array Functions & Addresses

#include<iostream>
#include<ctime>		//For srand function.
#include<cstdlib>	//For srand function


using namespace std;


//Function Prototypes:

void populateIntArray(int a[], const int size);

void printArrayContents(int a[], const int size);

void printArrayAddresses(int a[], const int size);




int main(void) {

	//Our array

	int const size = 33;
	int Array[size];      //Using the constant size of n = 33 & 
					  //We're saying it stops right before array spot 33, arrays starts at 0.



	populateIntArray(Array, size);  //Generates random numbers for the array



	printArrayContents(Array, size);  //Prints the random number generator of array



	printArrayAddresses(Array, size);  //Gives us address or location of the array.



	return(0);


}



//Function Implementation

void populateIntArray(int a[], const int size) {  //Use arg[] instead of a[] in own projects

	srand(time(0));	//Seeding rand time generator.

	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100 + 1;	//Adding the one gives us a random number range of 1-100.


	}

}


void printArrayContents(int a[], const int size) {  // Takes in an array and it's size and outputs to the screen

	for (int i = 0; i < size; i++) {

		cout << a[i] << " ";

	}

	cout << endl;

}



void printArrayAddresses(int a[], const int size) {  //Same for loop accumulator setup.

	for (int i = 0; i < size; i++) {


		cout << "Element " << i << ": " << &a[i] << endl;  //Addressing location of
														  //each element (crazy)

	}



}