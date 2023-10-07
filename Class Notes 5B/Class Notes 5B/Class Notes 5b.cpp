//Class Notes 5b

#include <iostream>
using namespace std;

//Function Prototypes
bool runAgain(void);


int main() {


	double userStart, userEnd, userIncr; //The doubl allows us to do decimal places.

	double sum;

	do {

		cout << "Enter the starting value: ";
		cin >> userStart;
		cout << "Enter the ending value: ";
		cin >> userEnd;
		cout << "Enter the ending value: ";
		cin >> userIncr;

		sum = 0.0;
		for (double i = userStart; i <= userEnd; i = i + userIncr) { //Here we're setting the increment custom to user choice.
			cout << " i = " << i << endl;

			sum = sum + i;
		}
		cout << "The sum is " << sum << endl;

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
