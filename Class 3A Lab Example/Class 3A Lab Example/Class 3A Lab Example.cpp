// Hypotenuse Calculator (Notes)

#include <iostream>
#include <cmath>
using namespace std;

// Function Prototype
double calcHypotenuse(double x, double y);


// Main Function
int main()
{
	double  a, b;
	int x = 2;
	cout << pow(x, 6) << endl; //Meaing x*x*x*x*x*x

	cout << "This program calculates the hypotenuse of any right triangle \ngiven the two legs.\n\n" << endl;

	cout << "Enter the measure of a leg: a = ";
	cin >> a;

	cout << "Enter the measure of a leg: b = ";
	cin >> b;

	cout << "\n\nHypotenuse is: c = " << calcHypotenuse(a, b) << endl; //Whatever is in x column (in this case a) will be called in x
																		//B will be inputted in y in the function below

	return (0);
}

// Function Implementation
double calcHypotenuse(double x, double y)
{
	return(sqrt(x * x + y * y));

}