//Eli Ahmed
//Notes for 2C Lab Part 1

#include <iostream>
#include <string>

using namespace std;

//Global Constants
const double PI = 3.14159;


//First example using altSquare function which is better than cout for functions
//
//double square(double x) {
//	return(x * x);
//}
//
//void altSquare(double x) { //This the return that's part of the other altSquare
//	cout << x * x << endl;
//}
//
//
//int main(void) //The main is the actual function is run
//
//{	
//	double userX;
//
//	cout << square(4.8) << endl;
//	cin >> userX;
//
//	altSquare(userX); //This is usually better than the cout for functions, because it doesn't need a user interface.
//
//	cout << square(userX) << endl; }



//Second example for clarification on first

double f(double a) {

	double answer = 10 * a - 6;

	return answer;

}

int main(void) //Any variable used outside this main, does not belong to the main.
{
	 
	double x = 5.5; //The value stored inside this variable is going into the variable above.

	cout << f(x) << endl; //The value stored inside this variable is going into the variable above. Not the actual variable

	return 0;
}
