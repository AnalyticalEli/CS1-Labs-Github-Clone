//Eli Ahmed
//Lab 5d Infinite Pi Series

#include<iostream>
#include<cmath>  //This is for our abs or absolute value in main
using namespace std;

//Function prototype
double calculatePI(int numTerms); //This prototype will do the calculation with input values

int main(void) {

	double i, piApproximation; //Setting piApproximation as double

	//Program Prompt: Programming an infinite series that calculates PI



	//This is our for loop to get appoximation, all the way up 1000 for accuracy.

	for (i = 10; i <= 1000; i += 10) {    //With i <= we're setting the limit to where it ends
		piApproximation = calculatePI(i);  //at 1000. Every consecutive value will be 10 greater than last
		cout << "Calculate PI (" << i << ") = " << abs(piApproximation) << endl;

	}

	return 0;
}


//Function:

double calculatePI(int numTerms) {

	double pi = 0.0;  //Starting at i = 0
	double term;  //This our two case scenario
	for (int i = 0; i < numTerms; i++) {  //i++ is i = i + 1
		term = 4.0 / (2 * i + 1);
		if (i % 2 == 1) {  //Meaning the remainder equals 1 
			pi += term;
		} else {
			pi += -term; // += Again is the addition assigment operator
						 //Essentially on left displays the assigned variable
						 //And on the right of it, it displays the value added to
						//variable
		}

	}
	return pi;
}

