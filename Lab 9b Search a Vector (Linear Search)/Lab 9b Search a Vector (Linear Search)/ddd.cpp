//Eli Ahmed
//Lab 9b Search   (CHANGED the Vector name to (vector<RandString>) for clarity!

#include<iostream>
#include<cstdlib>  //For rand seed
#include<ctime>  //For rand seed
#include<vector>  //For vector
#include<string>  //For getline

using namespace std;

//Creating Structure aka Object  

struct RandString {		//Objects MUST be capitilized which is why I also changed the vector name


	string randomNames;


	//Creating Constructor Prototype that we pull from (pre-meditated structure) with Object: 

	RandString(string arg1);

};


//C-type Function Prototype:
int searchVector(vector<RandString> vecArg, string target);



int main(void) {

	srand(time(0));

	char userChoice;

	//Populate 10 Element Vector with Random Strings

	string randomNames[10] = { "Zach", "Chronos", "Lav", "Henry", "Bob", "Alice", "Dim", "Rakesh", "Gary", "Sky" };



	vector<RandString> a;   //Vector A with object RandString
	//RandString temp;


	for (int i = 0; i < 10; i++) {


		a.push_back(RandString(randomNames[rand() % 10]));  //Populating the ONLY constructor from above! (With values)

	}

	cout << "A -1 indicates that Name was not found in database!\n " << endl;


	do {   //Do loop to let user play again!

		//User Interface that takes in response and does linear search for array above.
		string target;

		cout << "\nEnter First Name: ";
		getline(cin, target);


		int result = searchVector(a, target);


		//Our Resu

		if (result != -1) {     //IF name is inside array 

			cout << "The name " << target << " was found in " << result << endl; //Gives us location in array

		}
		else {    //IF error / Not Present.


			cout << "(-1) " << target << " was not found in the data bank ";
		}


		cout << "\n\nDo you want to try to search the vector again? (y or n): ";
		cin >> userChoice;	           //Do loop response answer

		cin.ignore();       //Allows user to input another again.

	} while (userChoice == 'Y' || userChoice == 'y');


	return(0);

}




//Constructor Implementation:

RandString::RandString(string arg1) {      //Our constructor for above

	randomNames = arg1;						//Setting randomNames as the arg1 value for vector above

}


//C-type Function Implementation (Vector)

int searchVector(vector<RandString> vecArg, string target) {  //This actually searches vector


	for (int i = 0; i < vecArg.size(); i++) {  //Gives us custom vector size.
		if (vecArg[i].randomNames == target) {   //Target is the array of random names above!

			return (i);

		}
	}

	return(-1);     //Essentially saying if code above stops working, it's not in databank.

}