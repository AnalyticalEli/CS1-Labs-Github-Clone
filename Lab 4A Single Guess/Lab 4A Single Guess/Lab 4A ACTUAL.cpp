//Eli Ahmed
//Lab 4a

#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(void) {

	int x, y;
		

	srand(time(0)); //Getting the time as the seed, allows it to get a random number
	//at any time

	x = 1 + rand() % 100; //Will return a pseudo random number and %100 makes it
	//return a number 1-100


	//Salutations and welcome to the guessing game:

	cout << "Come one, come all see the one and only guessing game!\n" << endl;


	//User Inputs:

	cout << "Input an integer for y (1-100) or press -1 to quit: ";
	cin >> y;



	//Escape option for console

	if (y == -1) {						     //This is our press -1 to escape
		cout << "Goodbye, come back soon! " << endl;
		return(0);
	}


	//Actual Single Guess If and Else statements:


	if (y >= x) {					        //Because y >= x filters out values, only values >= to x will display
		if (y != x) {				        // != Means not equal to.
			cout << "Too high!" << endl;
		}
		else {						        //If y == x, because it's the only other
			cout << "You got it!" << endl; //possibility if y>=x && y!= x
		}
	}
	else{                   //If y < x 
		cout << "Too Low!" << endl;
		}
	
	return(0);
}