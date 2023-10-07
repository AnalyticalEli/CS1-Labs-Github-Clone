////Eli Ahmed
////Lab 5a  //This one gives user Y or n option, a
//
////This one gives option to play again , and runs again 
//
//#include<iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//bool runAgain(void);
//
//int main(void) {
//
//	int x, y, attempts;
//
//
//     //Do function that encapuslates everything.
//
//
//		srand(time(0)); //Getting the time as the seed, allows it to get a random number
//		//at any time
//
//
//
//	 do {
//		x = 1 + rand() % 100; //Will return a pseudo random number and %100 makes it
//		//return a number 1-100
//
//
//		attempts = 0;  //This keeps track of # of attempts
//
//
//
//		//Salutations and welcome to the guessing game:
//
//		cout << "Come one, come all see the one and only guessing game!\n" << endl;
//
//
//		//User Inputs:
//
//		cout << "Input an integer for y (1-100) or press -1 to quit: ";
//		cin >> y;
//
//
//
//		//Escape option for console
//
//		if (y == -1) {						     //This is our press -1 to escape
//			cout << "Goodbye, come back soon! " << endl;
//			return(0);
//		}
//
//
//		//Actual Single Guess If and Else statements:
//
//
//		if (y >= x) {					        //Because y >= x filters out values, only values >= to x will display
//			if (y != x) {				        // != Means not equal to.
//				cout << "Too high!" << endl;
//			}
//			else {						        //If y == x, because it's the only other
//				cout << "You got it!" << endl; //possibility if y>=x && y!= x
//			}
//		}
//		else {   //If y < x 
//			cout << "Too Low!" << endl;
//		}
//
//		attempts++;             //This is our implement accumulator attempts++ = attempts + 1
//
//
//		cout << "This is your number of attempts thus far: " << attempts << endl;
//
//
//	//Do is a post test
//	}while (runAgain());
//
//	return(0);
//}
//
//
////Creating a Boolean Function do loop statement:
//
//bool runAgain(void) {
//	char userResponse;
//
//	cout << "Do you want to play again (y or n)? " << endl;
//	cin >> userResponse;
//	cin.ignore();
//
//	if (userResponse == 'y' || userResponse == 'Y')     //OR = ||
//		return(true);
//
//	return(false);
//
//
//}