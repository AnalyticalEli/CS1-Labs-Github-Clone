//Eli Ahmed
// Array Basics Part 2 


#include <iostream>
#include<cstdlib>

using namespace std;

//Function Prototype
void printArray(int arg[], int n);  //This is for our int a

void printArrayD(double arg[], int n);  //This is for our double b

void printArrayChar(char arg[], int n); //This is for our Char c


int main() {

	const int size = 10;  //This gives us an array from 0 to 10
	int a[size];
	double b[size];
	char c[size];         //This adds a character/char to the code.


	//Populate this array int a 

	for (int i = 0; i < size; i++) { 
		a[i] = i * i;             //If we wanted all the squared functions to 10
	}
	printArray(a, size); 

	cout << "\n***********\n" << endl;


	//populate double b with stuff:

	for (int i = 0; i < size; i++) {
		b[i] = 1.0 * rand() / RAND_MAX;  //Multiplying it by 1.0 turns it into double
	}
	printArrayD(b, size);


	cout << "\n***********\n" << endl;

	//Now we're inputting stuf for character c

	for (int i = 0; i < size; i++) {
		c[i] = char(97 + i);    //As the character for a is char(97), so by adding by 1
								//Each time we'll get b, c, d, e....all the way to z.
	}
	printArrayChar(c, size);

	return(0);
}


//Function Implementation

void printArray(int arg[], int n) {

	for (int i = 0; i < n; i++) {
		cout << "Element " << i << " = " << arg[i] << endl;

	}
}


void printArrayD(double arg[], int n) {  //Double function for b

	for (int i = 0; i < n; i++) {
		cout << "Element " << i << " = " << arg[i] << endl;


		}

	}


void printArrayChar(char arg[], int n) { //Character function for c

	for (int i = 0; i < n; i++) {
		cout << "Element " << i << " = " << arg[i] << endl;

	}
}