//While Loops Example

//SHORTCUTS: n++ means n = n + 1 & i-- means i = i - 1


#include <iostream>
using namespace std;

//function prototype
double f(double x);

int main(void) {

	//Part I - Review
	int x;

	cout << "Hello World!\n";
	cout << "Input a number: ";
	cin >> x;


	cout << "This is your number divided by 3: " << x / 3 << endl;

	if (x == 7) {
		cout << "Hey that is my lucky number!" << endl;
		cout << "This should print as well" << endl;
	}


	// Part II - Review Regular Functions
	cout << "\n\nGiven f(x) = x^2\n";
	cout << "If x = 2 then y = " << f(2) << endl;

	cout << "\nEnter a value for x: ";
	cin >> x;

	cout << "The value y-value is " << f(x) << endl;


	// New ---> While loop (table of values)
	int n = -4;

	cout << "\n\nTable of values for f(x) = x^2" << endl;
	cout << "\t-----------------" << endl;

	while (n <= 100) {

		cout << "\t" << n << "\t|\t" << f(n) << endl;
		n = n + 2;

	}

	cout << n << endl;

	return(0);
}


// funtion implementation
double f(double x) {

	return(x * x);

}

