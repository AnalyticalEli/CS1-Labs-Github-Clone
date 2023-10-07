//Eli Ahmed
//Lab 5f Math Steps

#include<iostream>  
#include<cmath>		////cmath for calculations, with abs and sqrt

using namespace std;

//Function Prototype

double xValue(double a, double b, double c);

int main(void) {

	double a, b, c, x;
	double cValues;
	char choice;		//For yes or no loop

	do {     //This do while loop is just for playing again.

		//Prompt: We're finding x, with a, b, c.

		cout << "\nFunction Solver with steps \n" << endl;

		//User Inputs: 

		cout << "Enter coefficent a: ";
		cin >> a;
		cout << "Enter coefficient b: ";
		cin >> b;
		cout << "Enter coefficient c: ";
		cin >> c;


		x = xValue(a, b, c);

		system("cls");  //This gets rid of user Inputs on console below


		//This is displaying the equation for the if statements below:

		cout << "Your equation: ";

		if (b >= 0) {  //When b is positive
			cout << a << "x + " << b << " = " << c << endl;

		}else {   //When b is negative
			
			cout << a << "x - " << abs(b) << " = " << c << endl;

		}

		cout << "First Step: " << a << "x = " << (-1 * b + c) << endl;

		cout << "Second Step: " << x << endl;


		cout << "\nDo you want to play again? (y or n): ";
		cin >> choice;


	} while (choice == 'Y' || choice == 'y');
	return 0;
}


//Function

double xValue(double a, double b, double c) {

	return ((c - b)/a);
}