/* Program used to determine the number of cubic yards of mulch a customer needs
and its price*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

const double price_per_cubic_yd = 22.0;

int main(void)
{
	//variables
	double squareFeet, cubicFeet, cubicYards, totalPrice; //square feet of land to be covered
		cubicFeet, // number of cubic feet of mulch needed
		cubicYards, // number of cubic yards of mulch needed
		totalPrice; // total price for all the cubic yards ordered 
	int depth; // inches deep the mulch is to be spread
	string name;

	//get input from user
	cout << "Please enter the customers name: ";
	getline(cin, name);
	cout << "Number of square feet to be covered with mulch: ";
	cin >> squareFeet;
	cout << "Number of inches deep: ";
	cin >> depth;

	//perform calculations
	cubicFeet = squareFeet * (1.0*depth / 12);

	cubicYards = cubicFeet / 27;
	totalPrice = cubicYards * price_per_cubic_yd;

	//display results
	cout << fixed << setprecision(2);
	cout << "\n Customer name: " << name << endl << endl;
	cout << "Number of cubic yards needed: " << cubicYards << endl;
	cout << "Price per cubic yard: $" << price_per_cubic_yd << endl;
	cout << "Total price: $" << totalPrice << endl;

	return 0;
}