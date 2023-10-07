//Eli Ahmed
//Lab 5C Integer Accumulator

#include<iostream>

using namespace std;


int main(void) {
		
	//int minNumber, maxNumber, 
		
	double minNumber, maxNumber, sum;

	char userResponse; //userResponse is a y or n char

	//Program Prompt: Create an Integer Accumulator controlled by user inputs

	do {

		cout << "Enter starting number: ";
		cin >> minNumber;					//This is where we start
		cout << "Enter max number of integers from starting number : ";
		cin >> maxNumber ;						  //This is where we stop
									  //Keep in mind must maxNumber > minNumber


		//Starting at min
		sum = 0;
		for (double i = minNumber; i <= maxNumber; i++) {     //i++ is i = i + 1 & double = i starts at 1
			cout << i << endl;
			sum += i;  //This is the same as sum = sum + i;

		}
		cout << "The sum is: " << sum << endl;

		cout << "Do you want to play again(y or n): ";
		cin >> userResponse;

	} while (userResponse == 'y' || userResponse == 'Y'); //Meaning if user types 
												// y or Y it will run again
											   //Making this code user full proof.


	return 0;
}