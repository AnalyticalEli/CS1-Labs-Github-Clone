//Eli Ahmed
//Lab 3c

#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double annualInterest, total;
double Principal, annualRate;


//Function prototype

double totalAnnualInterest(double Principal, double annualRate);

double totalAmount(double Principal, double annualRate, double timeYears);


int main(void) {

	//User defined variables:

	double Principal, annualRate; //Initial balance (Principal) & Annual Rate 

	int timeYears; //Could put time elpased instead 


	//Purpose of program

	cout << "This program calculates compound interest over a given amount of time.\n" << endl;
	
	//User inputs
	cout << "Enter the Principal($):  ";
	cin >> Principal;
	cout << "Enter Annual Interest Rate(3.4%):  ";
	cin >> annualRate;
	annualRate = annualRate / 100;
	cout << "Enter time in years:   ";
	cin >> timeYears;


	annualInterest = totalAnnualInterest(Principal, annualRate);
	total = totalAmount(Principal, annualRate, timeYears);

	//User Results with calculations done:

	cout << "\nPrincipal or Starting Balance: \t$" << Principal << endl;


	cout << "Annual Interest (in dollars): \t$" << annualInterest << endl;

	cout << "Time (in years): \t " << timeYears << endl;

	cout << "\t\t--------------" << endl;

	cout << fixed << setprecision(2); //Two decimal places
	cout << "\nTotal Final Amount: \t$" << total << endl;
 

	return (0);
}


//Our function

double totalAnnualInterest(double Principal, double annualRate) { //Principal is the initial balance

	return(Principal * annualRate);
}

double totalAmount(double Principal, double annualRate, double timeYears) { //Given Formula
    
	return (Principal * pow(1 + (annualRate / 12), 12 * timeYears));
}


