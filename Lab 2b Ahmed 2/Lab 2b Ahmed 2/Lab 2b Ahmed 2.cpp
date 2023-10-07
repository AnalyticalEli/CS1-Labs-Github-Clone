//Eli Ahmed
//Lab 2b

//Radius is r=5.5, Find circumference and Area

#include <iostream>
#include <string>
#include <iomanip>
#include<cmath>
using namespace std;

const double Pi = 3.14159; //We're setting pi as the constant here so the value doesn't get changed later. And double for decimal


int main(void)
{
	//variables:
	double diameter;


	cout << "Enter the circle's Diameter: ";
	cin >> diameter;  //Since we want a value we do cin

	//Circumference

	double circumference = Pi * diameter;

	//Calculate Area

	double radius = diameter / 2; //Radius is half of diameter
	double area = Pi * pow(radius, 2); //You can use power function to signify exponent, if you have cmath 
									   //library (cmath) open at top.

	cout << "Radius:\tr" << " = " << radius << endl; //\t is a tab
		
	cout << "Circumference: P" << " = " << ("2*3.14159*5.5") << " = " << circumference << " units\n";
	

	cout << "Area: A" << " = " << ("3.14159*5.5^2") << " = " << area << " square units\n";

	return 0;
}