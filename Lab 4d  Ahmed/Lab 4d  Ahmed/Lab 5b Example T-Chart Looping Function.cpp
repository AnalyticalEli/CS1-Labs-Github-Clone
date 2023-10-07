//Eli Ahmed
//Example 5b

#include <iostream>

using namespace std;

//Function Prototype
double f(double x);

int main(void) {

	double min, max, incr; //incr is increment

	char userResponse;

	//Prompt: Create a function t-chart for f(x) = 5x^2-x+7.

	cout << "\nT-chart builder for squaring function." << endl;

	//game loop 
	do {
		cout << "Enter the min x-value: ";
		cin >> min;
		cout << "Enter the min x-value: ";
		cin >> max;
		cout << "Enter the min x-value: ";
		cin >> incr;

		cout << "\t x \t|\t y" << endl;
		cout << "\t------------" << endl;

		//Starting at min
		for (double i = min; i <= max; i = i + incr) {   //i++ is i = i + 1 
			cout << "\t" << i << "\t|\t" << f(i) << endl;

		}

		cout << "Do you want another chart (y or n) ";
		cin >> userResponse;

	} while (userResponse == 'y');  //Meaning if user types y
								 //they get to play again


	cout << "\n Thank you, enjoy your charts.\n" << endl;


	return(0);
}


//Function implementation

double f(double x) {

	return(x * x);
}

