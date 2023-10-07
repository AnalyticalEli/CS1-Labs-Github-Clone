//Eli AHmed
//Notes Reveiw for 2b 


#include <iostream>
#include <cmath>
#include <iomanip> //Allows setprecision()

using namespace std;

double circumference(double argR);
double circleArea (double argR)

int main(void) {
	double diameter, radius;

	cout << "Circle Calculator \n\n"; 

	cout << "Enter the diameter ";
	cin >> diameter;

	radius = diameter / 2;

	cout << fixed << setprecision(1);

	cout << "Circumference: P = 2*" << PI << "*" << radius << " = "
		<< circumference(radius) << "units" << endl;







	cout << "Area: A = " << 3.14159 << "*" << radius << " = "
		<< circuference << circleArea(radius) << " square units " << endl;

	return(0)
}


//function implementation

double circuference(double argR) {
	return(2 * 3.14159 * argR);

}

double circleArea(double argR) {

	return (3.14159 * (argR * argR)); //We're not using pow here because we don't want a dependacy on <cmath> library
}