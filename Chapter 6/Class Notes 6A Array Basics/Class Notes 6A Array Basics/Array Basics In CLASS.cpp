//Eli Ahmed
// Array Basics 

#include <iostream>
#include <ctime> //For seed
#include <cstdlib>  //for srand (returns 1 - 32000) unless specified
using namespace std;

//Function Prototypes
bool runAgain(void);


int main() {

	//declare a double array
	double lengths[3];

	//populate the array
	lengths[0] = 12.3;
	lengths[1] = 20.2;
	lengths[2] = 30.5;

	displayArrayContents(lengths, 3);


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

//Function implementation
void displayArrayContents(double arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		cout << "Element " << i << " = " << arr[i] << endl;
	}
}