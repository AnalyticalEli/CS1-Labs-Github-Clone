//Eli Ahmed
//Lab 6b Average Array Elements


#include <iostream>
using namespace std;

bool runAgain(void);

//Function Prototype:

bool runAgain(void);

void printArrayDbl( double arr[], const int size);

double average(double a[], const int size);

int main(void) {


	const int size = 5;
	double data[size];

	//Prompt: To create an average array Caculator.

	cout << "\n A 5 number Average Calculator\n " << endl; //5

	for (int i = 0; i < size; i++) {
		cout << "Enter a real number: ";
		cin >> data[i];
	}
	cout << "\n***********************\n" << endl;
	printArrayDbl(data, size);


	cout << "The average is: ";

	int n;
	char myCString[] = "Hello World";

	do {
		// original string
		cout << myCString << endl;

		// index explorer
		cout << "\nEnter an index: ";
		cin >> n;

		cout << myCString[n] << endl;


	} while (runAgain());

	return (0);
}


//Function Implementations 

void printArrayDbl(double arr[], const int size) {

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";

	}

}

double average(double a[], const int size) {

	double sum = 0; //Setting the intialization for the accumulator.


	for (int i = 0; i < size; i++) {
	cout << "The average is: " <<

		sum += a[i]; //Again the addition operand offers the solution of adding each consective
	//to the next.
	}
	//MUST USE AN ACCUMULATOR! NO ans = a[0] + a[1] + a[2] + a[3] + a[4] + a[5]

}




bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to run again (y or n): ";
	cin >> userResponse;

	if (userResponse == 'y' || userResponse == 'Y')
		return(true);

	return(false);
}