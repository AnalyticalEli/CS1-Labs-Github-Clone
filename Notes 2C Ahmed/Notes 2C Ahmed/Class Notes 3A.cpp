// Class Notes
/* Obtaining strings from users. Functions with void output */
#include <iostream>
#include <string>
using namespace std;

// Function Prototype
int outputAgeInDogYears(int);

int main(void)
{
	string userName;
	int age;

	// prompt user for data
	cout << "Enter your name: ";
	getline(cin, userName);

	cout << "Enter your age: ";
	cin >> age;

	// function call here
	cout << userName << " your age in dog years is " << outputAgeInDogYears;

	// end program
	return(0);
}

// Function Implementation
int outputAgeInDogYears(int y) {

	return( y / 7)

}
