//Eli Ahmed
//Practice Exam 1 

#include<iostream>
#include<cmath>  //This is for our abs or absolute value in main
using namespace std;

//Function prototype
int factorial(int n); //This prototype will do the calculation with input values

int main(void) {

	double i, piApproximation; //Setting piApproximation as double

	//Program Prompt: E = 2.718 Calculator


	do {

		//User Inputs: 

		cout << "Enter t"


			cout << "Enter n: " << endl;
		cin >> n;



		//This is our for loop to get appoximation, all the way up 1000 for accuracy.

		for (i = 10; i <= 1000; i += 10) {    //With i <= we're setting the limit to where it ends
			piApproximation = calculatePI(i);  //at 1000. Every consecutive value will be 10 greater than last
			cout << "Calculate PI (" << i << ") = " << abs(piApproximation) << endl;

		}


		cout << "e^t " << e << endl;
		return 0;
	}


	//Function:

	int factorial(int n) {
		if (n == 0) {
			return 1;
		}
		else {
			return n * factorial(n - 1);
		}
	}
