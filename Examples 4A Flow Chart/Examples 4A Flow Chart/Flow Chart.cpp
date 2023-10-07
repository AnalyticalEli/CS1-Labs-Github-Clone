//Eli Ahmed
//Lab 4a

#include<iostream>
#include<string>

using namespace std;

int main(void) {
	string userResponse;

	cout << "\nIT diganostics BEFORE you call me!\n" << endl;

	cout << "Press the computer's start button" << endl;
	cout << "Does the computer turn on? (yes or no)  ";
	getline(cin, userResponse);

	if (userResponse == "yes") {    //Yes code
		//yes code goes here
		cout << "Are there any error messages? (yes or no)";
		getline(cin, userResponse); //Because new answer will override old
		if (userResponse == "yes") {
			cout << "Perform a Google search of the error" << endl;
		}
		else {
			cout << "The computer is fine." << endl;
		}
	}
	else {
		cout << "Is computer power light on? (yes or no)";
		getline(cin, userResponse);

		if (userResponse == "yes") {
			cout << "Turn the monitor on.  " << endl;
		}
		else {
			cout << "Check the computer power cord." << endl;
		}

		cout << "Problem solved: (yes or no) ";
		getline(cin, userResponse);
		if (userResponse == "yes") {
			cout << "Enjoy!" << endl;
		}
		else {
			cout << "Call a Technician." << endl;
		}
	}

	return 0;
}