//Eli Ahmed
//Lab 3e Hereons Thereom

#include <iostream>
#include <iomanip> //for set precision
#include <cmath>  //For power funciton

using namespace std;


//Function Prototype
double triangleArea(double a, double b, double c);



int main(void){

	double sideA, sideB, sideC;

	double Area;

	int acc = 2;


	//Purpose of Program:

	cout << "In this program we're calculating the area of the triangle with only it's sides" << endl;

	//User inputs

	cout << "Enter side a of the triangle: ";
	cin >> sideA;
	cout << "Enter side b of the triangle: ";
	cin >> sideB; 
	cout << "Enter side c of the triangle: ";
	cin >> sideC;
	cout << "How many units of accuracy?:  ";
	cin >> acc;

	cout << fixed << setprecision(acc);
	Area = triangleArea(sideA, sideB, sideC);

	cout << fixed << setprecision(2);
	cout << "The Area of the triangle is:  " << Area << endl;

	return 0;
}



//Function

double triangleArea(double a, double b, double c) {

	double s = ((a + b + c) / 2);
	return sqrt(s * (s - a) * (s - b) * (s - c));;
}




