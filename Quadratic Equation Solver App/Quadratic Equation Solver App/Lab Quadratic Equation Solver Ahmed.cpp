//Eli Ahmed
//Lab 5H

#include<iostream>  //cmath for calculations, with pow and sqrt
#include<cmath>

using namespace std;

//Function Prototype
double calculateDiscriminant(double a, double b, double c);


int main(void) {

	double a, b, c;
	double Discriminant;
	char choice;		//For yes or no loop

	do {     //This do while loop is just for playing again.

		//Prompt: We're finding out how many solutions, quadratic formula has with user input coefficents

		cout << "\nQudractic Discriminant solution finder \n" << endl;

		//User Inputs: 

		cout << "Enter coefficent a: ";
		cin >> a;
		cout << "Enter coefficient b: ";
		cin >> b;
		cout << "Enter coefficient c: ";
		cin >> c;


		Discriminant = calculateDiscriminant(a, b, c);

		system("cls");  //This gets rid of user Inputs on console below


		//This is displaying the equation for the if statements below:

		cout << "Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;



		if (Discriminant > 0) {
			cout << "Two real solutions." << endl;
			cout << " x = " << -1.0 * b + sqrt(Discriminant) / (2 * a);
			cout << " x = " << -1.0 * b - sqrt(Discriminant) / (2 * a);

			//Input the accuracy acc()

		}
		else if (Discriminant == 0) {
			cout << "One real solution." << endl;
			cout << "It is x = " << -1.0 * b / (2 * a) << endl;
		}
		else {
			cout << "Two complex solutions." << endl;
			cout << " x = " << -1.0 * b / (2 * a) << " + " << sqrt(-1.0 * Discriminant) / (2 * a) << "i" << endl;
			cout << " x = " << -1.0 * b / (2 * a) << " - " << sqrt(-1.0 * Discriminant) / (2 * a) << "i" << endl;
		}

		cout << "\nDo you want to play again? (y or n): ";
		cin >> choice;


	} while (choice == 'Y' || choice == 'y');
	return 0;
}


//Function

double calculateDiscriminant(double a, double b, double c) {

	return (pow(b, 2) - 4 * a * c);
}