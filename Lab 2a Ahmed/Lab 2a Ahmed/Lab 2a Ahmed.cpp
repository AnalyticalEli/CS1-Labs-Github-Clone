//ELi Ahmed
//Lab 2a 

//What's being asked: Goal:  To create an app that calculates an average of three integers for the user.

//Rules it must have all the correct spacing, it must account for float decimals, and it must contain at least 3 variables

# include<iostream>
using namespace std;

int main(void) {

	int x, y, z;

	cout << "Enter an integer: ";
	cin >> x;

	cout << "Enter an integer: ";
	cin >> y;

	cout << "Enter an integer: ";
	cin >> z;

	cout << "\nYou typed in " << x << ", " << y << ", " << z << ". " << endl;
	cout << "The average is: " << "(" << x << " + " << y << " + " << z << ")" << " / " << 3 << " = " << 1.0 * (x + y + z) / 3 << endl;  //This gives us an average of the three numbers, where 1.0 turns this into a float

	return 0;

}


