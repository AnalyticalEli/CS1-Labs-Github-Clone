//Eli Ahmed
// Array Basics 

#include <iostream>
#include <ctime> //For seed
#include <cstdlib>  //for srand (returns 1 - 32000) unless specified
using namespace std;

//Function Prototypes
bool runAgain(void);


int main() {

	srand(time(NULL));
	const int arraySize = 3; //Declaring arraySize as constant
	double a[arraySize];

	for (int i = 0; i < 3; i++) {
		a[i] = double(rand())/RAND_MAX;  //Will stop/break out at i = 3
	}									 //This loop with RAND_MAX, will create a loop
										 //From 0 - 1 


	for (int i = 0; i < 3; i++) {
		cout << "Element  " << i << " = " << a[i] << endl;
	}


	do {

		cout << "Looped code goes here!" << endl;

	} while (runAgain());

	return(0);
}

// Function Implementation
bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to run again (y or n): ";
	cin >> userResponse;
	cin.ignore(); // to clean up the input stream

	if (userResponse == 'y' || userResponse == 'Y')
		return(true);

	return(false);
}