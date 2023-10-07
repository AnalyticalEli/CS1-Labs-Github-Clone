//Eli Ahmed
//Lab 4b Car Buying Guide (Pro tip: Be aware of the brackets, they're tricky)


#include<iostream>
#include<iomanip> 
#include<cmath>

using namespace std;


int main(void) {

	double userAge;


	//program purpose: a car buying guide for average male:

	cout << "In this program we're creating a car buying guide for the average male:\n" << endl;

	//user inputs 

	cout << "Enter your age: ";
	cin >> userAge;


	//if statements

	if (userAge < 40) {
		cout << "Life Stage 1" << endl;
		if (userAge < 25) {
			cout << "Buy a Ford Focus" << endl;  //nested with the first if statement
		}
		else {									//keep in mind there can only
			cout << "Buy a minivan" << endl;    //be one else statement, the others
		}										//the others must be "else if"

	}
	else {
		cout << "Life Stage 2 " << endl;
		if (userAge < 55) {
			cout << "Buy a Corvette" << endl;
		}
		else {									//this is what is our else statement
			cout << "Buy a Lincoln Town car" << endl;

		}

	}

	return(0);
}


		

//if (userAge >= 40)