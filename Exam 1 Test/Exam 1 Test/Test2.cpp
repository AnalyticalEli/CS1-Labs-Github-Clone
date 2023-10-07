//Eli Ahmed
//Exam 1 Grade Checker (


#include <iostream>


using namespace std;

//Function Prototypes
double courseAvg(int hw, int testAvg, int final);

char letterGrade(double avg);


int main(void) {

	double avgGrade, avg;

	int hw, testAvg, final;

	char choice, yourGrade;


	//Prompt: Grade Checker / Calculator

	cout << "Welcome to the wonderful seemless Grade Checker for Canvas.\n" << endl;


	do {
		//User Inputs Scores: 
		cout << "Enter the homework Score (1-100): ";
		cin >> hw;
		cout << "Enter the Test Average Score (1-100): ";
		cin >> testAvg;
		cout << "Enter Final Score (1-100): ";
		cin >> final;

		//Function call and renaming

		avgGrade = courseAvg(hw, testAvg, final);

		char yourGrade = letterGrade(avgGrade);

		cout << "Your grade = " << yourGrade << endl;



		cout << "Do you want to input more alternate scores? (y or n): ";
		cin >> choice;


	} while (choice == 'Y' || choice == 'y');  //Getting rid of our need for bool
	//function for running again


	cout << "Thanks for visiting, and bye for now!" << endl; //A nice sendoff

	return(0);
}



// Function Implementation 

double courseAvg(int hw, int testAvg, int final) {

	//We're turning each of the variables into a decimal value for later:


	double hwWeight = (1.0 * 15) / (100);    //Percent of weighted
	//Grades

	double testAvgWeight = (1.0 * 52) / (100);

	double finalWeight = (1.0 * 33) / (100);


	return ((hwWeight * hw) + (testAvgWeight * testAvg) + (finalWeight * final));

}

char letterGrade(double avg) {


	if (avg >= 90) {
		return ('A');  //Since couts not allowed directly put variables
		//into return for each grading letter condition.
	}
	else if (avg >= 80) {
		return ('B');      //Chose '' because '' are for characters
	}						// Vs "" which are used for strings.
	else if (avg >= 70) {
		return ('C');
	}
	else if (avg >= 60) {
		return ('D');
	}
	else {
		return('F');
	}

}
