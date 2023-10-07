//Eli Ahmed
//Lab 4c

#include<iostream>  //cmath for calculations, with pow and sqrt
#include<cmath>

using namespace std;

//Function Prototype
double calculateDiscriminant(double a, double b, double c);


int main(void) {
	
	double a, b, c;
	double Discriminant;

	//Prompt: We're finding out how many solutions, quadratic formula has with user input coefficents

	cout << "Qudractic Discriminant solution finder "

	//User Inputs: 

	cout << "Enter coefficent a: ";
	cin >> a;
	cout << "Enter coefficient b: ";
	cin >> b;
	cout << "Enter coefficient c: ";
	cin >> c;


	Discriminant = calculateDiscriminant(a, b, c);


	if (Discriminant > 0) {
		cout << "Two real solutions." << endl;
		cout << " x = " << -1.0 * b + sqrt(Discriminant) / (2 * a);
		cout << " x = " << -1.0 * b - sqrt(Discriminant) / (2 * a);

		//Input the accuracy acc()

	}else if (Discriminant == 0) {
			cout << "One real solution." << endl;
			cout << "It is x = " << -1.0 * b / (2 * a) << endl;
	}else {
			cout << "Two complex solutions." << endl;
		}


	return 0;
	}


//Function

double calculateDiscriminant(double a, double b, double c) {

	return (pow(b, 2) - 4 * a * c);
}