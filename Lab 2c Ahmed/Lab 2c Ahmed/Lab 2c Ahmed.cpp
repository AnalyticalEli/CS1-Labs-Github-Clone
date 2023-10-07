//Eli Ahmed
//Lab 2c User Interaction

//Quick hacks learned:  Cntrl + K, then Cntrl + C deselects multiple lines of code to notes OR /* */ like in SQL
//to Uncomment Cntrl + K, then Cntrl + U

#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string userName;
	string userMajor;
	string userMath;
	string usersFavApp;
	string usersHomeComputer;


	cout << "Enter your name:  ";
	getline(cin, userName);


	cout << "Enter your Major:  ";
	getline(cin, userMajor);


	cout << "Enter your last math class:  ";
	getline(cin, userMath);


	cout << "Enter your Favorite Game/App:  ";
	getline(cin, usersFavApp);

	
	cout << "Enter your home computer:  ";
	getline(cin, usersHomeComputer);

	system("cls");  //This clears the windows console of the info above, so that only thing that displays is below info:



	//This "\n" is equivalent to endline, so doing it twice in a line helps seperate info like prompt by a
	// line above and below it.

	cout << "My name is " << userName;
	cout << "\nMy major is " << userMajor;
	cout << "\nMy current or last math class is: " << userMath << "\n";
	cout << "\nMy favorite Game/App: " << usersFavApp;
	cout << "\nMy Home computer is a:  " << usersHomeComputer;


	//Alternatively: you could use endl
	/*cout << "\nMy name is " << userName << endl ;
	cout << "\nMy major is " << userMajor << endl;
	cout << "\nMy current or last math class is: " << userMath << endl ;
	cout << "\nMy favortie Game/App " << usersFavApp << endl << endl;
	cout << "\nMy home computer is:  " << usersHomeComputer << endl;*/


	//Wrong way to do above:
	/*cout << My name is " << userName << "\n\n";
	cout << "My major is " << userMajor << "\n\n";
	cout << "My current or last math class is: " << userMath << "\n\n";
	cout << "My favortie game / app " << usersFavApp << "\n\n";
	cout << "My home computer is:  " << usersHomeComputer << "\n\n";*/


	return 0;
}