//Eli Ahmed
//Lab 2d

//Restaraunt tip Calculator fir 10, 15, or 20 % 

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;


string serverName;
double foodCost;
double tipPercentage;
double totalBill;
double tipAmount;

int main(void)  {

	//Server Name

	cout << "Enter Server Name: ";
	getline(cin, serverName);

	//Food Cost
	cout << "Enter Cost of Food ($):  "; 	
	cin >> foodCost;


	//Tip Percentage Calculation
	cout << "Enter the Tip Percentage (10%, 15%, or 20%):  ";
	cin >> tipPercentage;
	tipPercentage = (tipPercentage / 100.0 ); //Setting the tip percentage equation
	tipAmount = foodCost * tipPercentage;

	//TotalBill variable
	totalBill = foodCost + tipAmount;  //Setting the totalBill = tip + foodcost


	system("cls"); //Clears console of info above, to make more concise

	
	//Printing out info that we want onto console.

	cout << "Server Name: \t" << serverName << endl;

	cout << "\nFood Cost: \t$" << foodCost << endl;

	cout << setprecision(3) << endl;

	cout << "Tip: \t\t$" << tipAmount << endl;

	cout << setprecision(4) << endl;

	cout << "Total Bill: \t$" << totalBill << endl;


	
	return 0;

}