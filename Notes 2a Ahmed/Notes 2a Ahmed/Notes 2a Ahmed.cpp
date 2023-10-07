//Arithmetic Examples Demo

//An integer is any number

//char is a character or a small integer 1byte 

//decimals are floats if 7 digits or below 4 byte
 
//double precision 

//boolean is true or false stastments


//# include<iostream>
//using namespace std;

//int main(void) {

	//int x = 5;
	//double y = 4.5;
	//char z = '5';  //Char is denoted by single quotes ''
	//bool trigger = false; 

	//cout << z << endl; //This is a cast key, where you turn a variable 
	//cout << x << endl;  //5 is an int, '5' is a character.
	//cout << x + z << endl; //This will add the binary values when a character and integer.
	//cout << trigger << endl;


	//float x, y;

	//x = 10;
	//y = 7;

	//int answe = x + y; //This takes an extra 2-4 bytes of space so its not needed.

	//cout << x+y << endl;
	//cout << x - y << endl;
	//cout << x*y << endl;
	//cout << x / y << endl;  // --> This is a float so we need to change/cast this one to a float. 
	//cout << x % y << endl; //The modulus operator gives us the remainder. Modulus = Remained
	//cout << float(x)/y << endl;  // We cast 10 to a float. --> Formal way
	//cout << 1.0*x / y << endl; // ---> Informal quicker way.

	//'5' char od


	//int x, y;

	//x = 105;
	//y = 85;

	//cout << x / y << "+" << x % y << "/" << endl;

	//return(0);

#include <iostream>
using namespace std;

int main(void)
{

	int userNumber1;
	int userNumber2;

	cout << "Arithmetic Operators Demonstration\n" << endl; // \n is a new line
	cout << "Please enter an integer: ";
	cin >> userNumber1;  // cin is extraction operator

	cout << "Please enter another integer: "; 
	cin >> userNumber2;


	cout << "\n The sum of " << userNumber1 << " + " << userNumber2 << " = " << userNumber1 + userNumber2;
	cout << "\a\n" // --> don't do this he will give you a 0!!!!
	system("pause")
	cout << "\n The difference of " << userNumber1 << " - " << userNumber2 << " = " << userNumber1 - userNumber2;
	system("pause")
	cout << "\n The product of " << userNumber1 << " * " << userNumber2 << " = " << userNumber1 * userNumber2;
	system("pause")
	cout << "\n The quotient of " << userNumber1 << " / " << userNumber2 << " = " << userNumber1 / userNumber2;
	system("pause")
	cout << "\n The quotient of " << userNumber1 << " % " << userNumber2 << " = " << userNumber1 % userNumber2 << endl;
	system("pause")
	// Explicitely cast integer to double to avoid integer division
	cout << "\n The quotient of " << userNumber1 << " / " << userNumber2 << " = " << double(userNumber1) / userNumber2 << "\n\n" << endl;

	return 0;
}