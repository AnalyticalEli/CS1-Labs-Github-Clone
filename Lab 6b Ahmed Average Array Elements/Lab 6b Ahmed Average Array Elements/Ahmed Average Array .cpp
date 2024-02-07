//Eli Ahmed
//Lab 6b Average Array Elements (USER INPUT)

#include <iostream>
using namespace std;


//Function Prototypes:

bool runAgain(void);

void printArrayDbl(double arr[], const int size);

double average(double a[], const int size);

int main(void) {


	const int size = 5;
	double data[size];

	//Prompt: To create an average array Calculator.

	cout << "\n Welcome to a 5 number Average Calculator\n " << endl; //5


do {

	for (int i = 0; i < size; i++) {
		cout << "Enter a real number: ";
		cin >> data[i];
	}
	cout << "\n***********************\n" << endl;
	printArrayDbl(data, size);    //This is the prints the values in userInput Array.

	
	cout << "The average is: " << average(data, size) << endl; //Can make this prettier, but prompt
															   


} while (runAgain());

	return (0);
}


//Function Implementations 

void printArrayDbl(double arr[], const int size) {

	for (int i = 0; i < size; i++) {
		cout << arr[i];

		if (i < size - 1) {       //This supplies output + and spaces for user.
			cout << " + ";
		}
		else {
			cout << " ";
		}

	}
	
	cout << " / " << size << endl;  //Gives user option to manually change size.
									//on console. (Good Program Practice)

}

double average(double a[], const int size) {

	double sum = 0; //Setting the intialization for the accumulator.


	for (int i = 0; i < size; i++) {   

			sum += a[i];   //Again the addition operand offers the solution of adding each consective
						  //to the next.
	}

	return (sum / size);     //This is dividing the sum we get by size of array to get average of array.

}




bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to run again (y or n): ";
	cin >> userResponse;

	if (userResponse == 'y' || userResponse == 'Y')
		return(true);

	return(false);
}