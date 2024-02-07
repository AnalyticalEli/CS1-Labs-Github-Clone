//Eli Ahmed
//Lab 8b Arrays with Objects /Structures

#include<iostream>
#include<string>  //For getline


using namespace std;


//Defining object Student:


struct Student {          //Objects are always capitalized.

	string firstName, lastName;

	string school;

	double GPA;


	void printStudent();  //Function Prototype (methods) of below.



};


//C-type Function: This is the reason why we use the address of operator, to avoid inefficiency
//because without it instead of linking the address of the function, it will make a copy.

void capitalize(Student& arg);


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

		capitalize(students[i]);

	}


	for (int i = 0; i < numStudents; i++) {

		students[i].printStudent();  //This gives us the user Interface responses
		//while passing it through the methods(function) below

	}

	return 0;
}



//Function Implementation from Class Structure Above




void capitalize(Student& arg) {    //Define length of first name as it matches data type of i!

	for (int i = 0; i < arg.firstName.length(); i++) {

		arg.firstName[i] = toupper(arg.firstName[i]);  //Capitlize First Name

		arg.lastName[i] = toupper(arg.lastName[i]);  //Capitlize Last Name
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


