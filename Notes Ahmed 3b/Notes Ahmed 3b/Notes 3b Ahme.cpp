//Eli 
//Class Notes 3b "Rental Car Cost Calculator"

//Cntrl + X is the cut function

#include<iostream>
#include<iomanip>

using namespace std;

double rentalCost, rentalTax;

double fixedCost, mileRate, taxRate;

int miles;


//Function prototypes

double tax(double cost, double rate);

double totalCost(double cost, double tax);

double totalRentalCost(double fixedCost, double mileRate, int miles);

int main(void) 

	//user defined variables ?? 

	double fixedCost;

	int miles;

	double mileRate;
	

	double taxRate = 0.0025;

	cout << "Rental Car Cost Calculator\n\n" << endl;

	// Get stuff from user

	cout << "Enter the fixed cost ($):  ";
	cin >> fixedCost;
	cout << "Enter number of miles: ";
	cin >> miles;
	cout << "Enter the mileageRate: ";
	cin >> mileRate;
	cout << "Enter the current tax rate (8.25%):  ";
	cin >> taxRate;
	taxRate = taxRate / 100;

	
	rentalCost = totalRentalCost(fixedCost, mileRate, miles);
	rentalTax = tax(rentalCost, taxRate);

	cout << "\n ----------------------- \n"; //This is purely to make it look nice

	cout << fixed << setprecision(2); //Will set the decimal place up to the 2nd or hundreth position
	cout << "\nFixed cost \t$" << fixedCost << " at $" << mileRate << "per mile" << endl;
	cout << "Miles driven: " << miles << endl;



	cout << "\nRental Cost: $" << rentalCost << endl;
	cout << "Amount Tax: \t$" << rentalTax << endl;
	cout << "\t\t------------" << endl; //This also makes our output look nicer
	cout << "\nTotal Invoice: \t$" << totalCost(rentalCost, rentalTax) << endl;
	
	return(0);
}



//Functions, we set functions first 

double tax(double cost, double rate) {

	return(rate * cost);
}

double totalCost(double cost, double tax) {
	return(cost + tax);
}

double totalRentalCost(double fixedCost, double mileRate, int miles) {
	return(fixedCost + mileRate);
}