//Eli Ahmed
//Lab 3b

//Objectives create a general linear function f(m,b,x), 
//Seperate function prototype at the top and the actual function below the main function

#include <iostream>
#include <iomanip>

using namespace std;


//Function Prototype

double f(double x, double m, double b); //Terms of function, making x fixed



int main(void) {

	//User Defined Variables:

	double m, x, b;
	double resultLinear; //
	double Fixedx; //Our fixed x value, so set precision doesn't effect the other terms

	//Program's main purpose:

	cout << "In this program we're modeling a linear function f(x) = mx + b " << endl;


	//Getting inputs from User
	cout << "Enter the slope (m):  ";
	cin >> m;
	cout << "Enter y-intercept(b): "; //Giving clarification as user might not know what b is.
	cin >> b;
	cout << "Your given function: \tf(x)" << " = " << m << ("x + ") << b << endl;



	cout << "------------------" << endl; //To make user interface console more clear


	//Result caculation 
	cout << "Enter an x-value:  ";
	cin >> x;

	resultLinear = f(x, m, b); //This makes the function equal to a shorter variable

	cout << fixed << setprecision (3);
	cout << "Result:  f(" << x << ")  =  ";

	cout << fixed << setprecision(1);
	cout << m << "(" << x << ") + " << b << " = ";

	cout << fixed << setprecision(1); //This is to ensure our decimal point for result is in tenths place.
	cout << resultLinear << endl; //Fixing x to set number of decimal points

	return(0);
}


//Functions:

double f(double x, double m, double b) {  //Terms in brackets are what the function "double f(double x) means.

	return(m * x + b);
}