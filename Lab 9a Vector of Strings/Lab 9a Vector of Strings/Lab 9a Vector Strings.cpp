//Eli Ahmed
//Lab 9a Vector of Strings  (Tried SO MANY for loops before finding efficient ways)

#include<iostream>
#include<string>   //For UserString
#include<vector>  //Vector Libraries
#include<ctime>	    //For rand
#include<cstdlib>  //For rand

using namespace std;

//Function Prototype:

void printStrings(vector<string> arg);

string randomString(vector<string> arg);


int main(void) {

	//Prompt:
	cout << "Declaring a Vector named userStrings. \n" << endl;

	vector<string> userStrings;
	string input, temp;
	char userResponse;

	//const int size();  //The

	srand(time(0));  //Seeding random time!!


	do{
			
		cout << "Enter a string pls: ";		//So I'm using the user input at the arg function.
		getline(cin, input);



		userStrings.push_back(input);   //The input populating inside the paranethesis is the same
										//as our old c-type functions.   
 

		cout << "Do you want to enter another phrase? (y or n) ";
		cin >> userResponse;

		cin.ignore();  //Same logic as bool function ignore previous output.

	} while (userResponse == 'Y' || userResponse == 'y');  //Not explicitly stated, but helps.


	
	cout << "\nPrinted strings from the vector: ";
	printStrings(userStrings);  //Printing the strings the user entered


	string randomStr = randomString(userStrings);  //Renaming to make it easier to 



	cout << "Random string from the vector: " << randomStr << endl;


	return(0);
}



//Vector Function Implemetnation:


void printStrings(vector<string> arg) {

	for (int i = 0; i < arg.size(); i++) { //Will stop before reaching max arg.size
		cout << arg.at(i) << " ";


	}
	cout << endl;
}


string randomString(vector<string> arg) {  //What would return our random string

	srand(time(0));  //Seeding time  (Random time requires both main and here strangely)

   if (arg.empty()) {							//In the case that the arg somehow is empty
	   cout << "Bad vector, be banished ";
   }


   int randomIndex = rand() % arg.size();  //Easier than using a for loop and don't have to set 
											//size.
   return(arg[randomIndex]);

}