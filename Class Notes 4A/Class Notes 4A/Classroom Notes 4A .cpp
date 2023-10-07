//Eli Ahmed
//Notes for 4A

#include <iostream>
#include<iomanip>


using namespace std;

//c type function prototype

int ascii(char z);

int main(void) {
		
	char userChar;

	//What this code does: Is print out the integer value of any character (a, e, z, f)

	cout << "This code is print out the integer value of any character (a, e, z, f)";

	
	//Actual User Inputs:

	cout << "\nEnter any character: ";
	cin >> userChar;



	cout << "\nAscii equivalent: " << ascii(userChar) << endl; //Ascii

	return 0;

}




int ascii(char z) { // Explicit cast, meaing we're changing the value of variable

	return( int(z) );

}

