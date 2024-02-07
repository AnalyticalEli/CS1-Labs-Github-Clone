//Eli Ahmed
//Lab 8a Student Structure Using Objects (In header files)

#include<iostream>
#include<string>

using namespace std;

//Defining object Student:


struct Student {          //Objects are always capitalized.

	string firstName, lastName;

	string school;

	double GPA;


	void printStudent(Student arg);  //Function Prototype (methods) of below.


};


int main(void) {

	Student student;   //Calling on our object above as "Student x"
	

	//User interface (We can choice what user can mess with)

	cout << "Enter First Name of Student: ";    //String & Setting first name;
	getline(cin, student.firstName);

	cout << "Enter Last Name of Student: ";     //String & Setting Last Name
	getline(cin, student.lastName);

	cout << "Enter Student's School:  ";       //String & Naming school
	getline(cin, student.school);

	cout << "Enter Students GPA (ex: 2.0, 3.0, or 4.0):  ";    //GPA
	cin >> student.GPA; 

	cin.ignore();

	student.printStudent(student);  //This gives us the user Interface responses
									//while passing it through the methods(function) below


	return 0;
}



//Function Implementation from Class Structure Above


void Student::printStudent(Student arg) {   //This prints out values with cout and calls from our
											//object/structure AND Above.

	cout << "\nThe student's First Name: " << arg.firstName << endl;

	cout << "The student's Last Name: " << arg.lastName << endl;

	cout << "The student's School (pls don't dox): " << arg.school << endl;

	cout << "The student's GPA : " << arg.GPA << endl;


}