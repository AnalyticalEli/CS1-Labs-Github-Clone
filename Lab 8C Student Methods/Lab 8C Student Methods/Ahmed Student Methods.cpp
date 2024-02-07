//Eli Ahmed
//Lab 8c Student Methods

#include<iostream>
#include<string>  //For getline


using namespace std;


//Defining object Student:


struct Student {          //Objects are always capitalized.

	string firstName, lastName;

	string school;

	double GPA;


	//Function Prototype (methods) of below.

	void capitalize();   //Capitilizes The first and Last Name.

	void printStudent();  //Prints result

	void addToGPA(double arg);

};


int main(void) {

	//Defining array:
	const int numStudents = 3;
	Student students[numStudents];   //Declaring array as changable variable



	for (int i = 0; i < numStudents; i++) {   //For loops and arrays go together like 


		//User interface (We can choice what user can mess with)

		cout << "Enter First Name of Student (" << i << "): ";   //String & Setting first name;
		getline(cin, students[i].firstName);

		cout << "Enter Last Name of Student (" << i << "): ";     //String & Setting Last Name
		getline(cin, students[i].lastName);

		cout << "Enter Student's School (" << i << "): ";       //String & Naming school
		getline(cin, students[i].school);

		cout << "Enter Students GPA (ex: 2.0, 3.0, or 4.0) (" << i << "): ";    //GPA
		cin >> students[i].GPA;

		cin.ignore();

		//Function input of our capitilization:

		students[i].capitalize();  //Can change because it's now a method.

	}


	for (int i = 0; i < numStudents; i++) {

		students[i].printStudent();  //This gives us the user Interface responses
		//while passing it through the methods(function) below

	}

	return 0;
}



//Function Implementation from Class Structure Above




void Student::capitalize() {    //Define length of first name as it matches data type of i!

	for (int i = 0; i < firstName.length(); i++) {

		firstName[i] = toupper(firstName[i]);  //Capitlize First Name

		lastName[i] = toupper(lastName[i]);  //Capitlize Last Name
	}


}

void Student::printStudent() {   //This prints out values with cout and calls from our
	//object/structure AND Above. The empty () means it defines length for us.


	cout << "\nThe student's First Name: " << firstName << endl;

	cout << "The student's Last Name: " << lastName << endl;

	cout << "The student's School (pls don't dox): " << school << endl;

	cout << "The student's GPA : " << GPA << endl;

	//Beauty of this is because of :: from object we're simply pulling it so can use variables
	//Directly!

}

void Student::addToGPA(double arg) {   //Scope resolution opperator makes this recognized by
										//Structure Above.

	GPA += arg;       //Using A simple summation value.


}