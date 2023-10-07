//Eli Ahmed
//Lab 3d

#include<iostream> 
#include<iomanip>

using namespace std;

 //Function Prototypes

double f(double Farenheit);

int main(void) {

	double Fahrenheit_to_Celcius, Fahrenheit;
	double acc;


	//Purpose of this program

	cout << "In this program we convert Farenheit to Celcius for 0.00039 bit coin Per Conversion (10 cents USD)\n" << endl;


	//User Inputs

	cout << "Enter degrees in Fahrenheit: ";
	cin >> Fahrenheit;
	cout << "How many digits after the decimal point would you like?: ";
	cin >> acc;

	cout << fixed << setprecision(acc);

	Fahrenheit_to_Celcius = f(Fahrenheit);
	
	//Final Function Result & And output
	cout << "Farenehit to Celcius " << Fahrenheit_to_Celcius << endl;
}




//Functions 

double f(double Fahrenheit) {

	double C = 5.0 / 9.0 * (Fahrenheit - 32);
	return(C);

}



