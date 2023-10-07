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

	cout << "This program calculates the hypotenuse of any right triangle \ngiven the two legs.\n\n" << endl;

	cout << "Enter the measure of a leg: a = ";
	cin >> a;

	cout << "Enter the measure of a leg: b = ";
	cin >> b;

	cout << "\n\nHypotenuse is: c = " << calcHypotenuse(a, b) << endl;

	return (0);
}

// Function Implementation
double calcHypotenuse(double x, double y)
{
	double c = sqrt(x * x + y * y);

	return(c);
}