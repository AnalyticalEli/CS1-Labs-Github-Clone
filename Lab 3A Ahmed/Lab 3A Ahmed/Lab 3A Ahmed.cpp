//Eli Ahmed
//Lab 3A 

//Objective: Create a function with user interface, that can solve with any x.


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Function Prototype from below with Declaring function below 
double f(double x);

int main() {

    //user defined variables: 

    double x;


    //Getting Inputs from user:

    cout << "This program calculates 3x - 5 for any numerical value.\n\n" << endl;

    cout << "Enter an x-value: ";
    cin >> x;

    double result = f(x);

   
    //The fixed << setprecision(1) ensures decimal place is in tenth (0.1) position/place

    cout << "Result: f(" << x << ") = " << "3(" << x << ") - 5" << " = " << fixed << setprecision(1) << result << endl;

    return 0;
}

// Define the function f
double f(double x) {
    return (3 * x - 5);
}
