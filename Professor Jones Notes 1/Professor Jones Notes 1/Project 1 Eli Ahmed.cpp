// Eli Ahmed
// 8/12/23
  /* Difficult Lab 1*/

//Green refers to notes

#include<iostream>
using namespace std;

int main(void)
{
	int x = 1;  //This is our integer value
	cout << "Hello C++, my name is Eli Ahmed" << endl;
	cout << "Gamers Rise Up!" << endl;
	cout << "pause" << x << endl; //Typically you add a "pause" when you're working on a lot of code and want a break between"
	system("pause"); //Great for not showing you system when running code
		
	cout << x / 0; //dividing by Zero and other such failures in reasoning or logic are called Logic Errors.
	// This category, of logic errors, is called runtime error, because it happens when you run it.
	
	//These errors are the programmers fault.
	

	x = x+1; //This is indicating now that our variable x = 1 is now being added to by 1
	cout << "pause" << x << endl; //Same cout pause as 2 lines before
	system("pause");
	return 0;   //What these system("pause") do when ran, is that in order to see next line of code you need to hit a key
}		//You cannot do x/0 because that's infinity.