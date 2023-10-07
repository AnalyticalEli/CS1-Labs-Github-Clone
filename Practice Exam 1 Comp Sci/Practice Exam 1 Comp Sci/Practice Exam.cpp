//Eli Ahmed
//Practice Exam 1

#include <iostream>
#include<iomanip>    //For the setprecision(3) or 3 decimals points on eApprox
#include<cmath>


using namespace std;

//Function Prototypes
int factorial(int n);

double calculateEPowT(int t, int n);


int main(void) {

	double t, n, eApproximate;
	char choice;

	//Prompt:

	cout << "In this app we're calculating an approximation of e" << endl;


	do {
		//User Inputs: 
		cout << "Enter the t value: ";
		cin >> t;
		cout << "Enter the n value: ";
		cin >> n;

		eApproximate = calculateEPowT(t, n);   //Function call and renaming

		
		//End result of eApproximation being printed: 

		cout << "e^" << t << " = " << fixed<< setprecision(3) << eApproximate << endl;



		cout << "Do you want to play again (y or n): "; 
		cin >> choice;


	} while (choice == 'Y' || choice == 'y');  //Getting rid of our need for bool
											  //function for running again


	cout << "Thanks for playing and happy mathing!" << endl; //A nice sendoff
	
	return(0);
}



// Function Implementation 

int factorial(int n) {  //n function for recursion factorial
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}


double calculateEPowT(int t, int n) {  //This calculates E, with inputs t & n

	double result = 1.0;

	for (int i = 1; i <= n; i++) {

		result += pow(t,i) / factorial(i);  //Again += operand does the addition 
										// and equalling in one step
	}									//for example: x+=y IS x = x + y

		return (result);
}