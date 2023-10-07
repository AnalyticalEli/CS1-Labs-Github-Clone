//Eli Ahmed
//Exam 1 Grade Checker 

//DISCLAIMER using a bool function here because it syncs alot more 
//fluidly with the userInterface, rather than having a simple do while loop.

#include <iostream>
#include<iomanip>    //For the setprecision(2) or 2 decimal places
#include<cmath>


using namespace std;

//Function Prototypes
double courseAvg(int hw, int testAvg, int final);

char letterGrade(double avg);

int main(void) {

	double avgGrade, avg;
	
	int hw, testAvg, final;

	char choice;

	//Prompt: Grade Checker / Calculator

	cout << "In this app we're creating a wonderful seemless Grade Checker for Canvas" << endl;


	do {
		//User Inputs: 
		/*cout << "Enter the t value: ";
		cin >> t;
		cout << "Enter the n value: ";
		cin >> n;*/

		 //Function call and renaming

		 avgGrade = courseAvg(hw, testAvg, final);

		 yourGrade = letterGrade(avg);
	

		//End result of eApproximation being printed: 

		//cout << "e^" << t << " = " << fixed << setprecision(3) << eApproximate << endl;


		//Based off the prompt the setprecision looks like 2 decimal



	
		cout << "Do you want to play again (y or n): ";
		cin >> choice;


	} while (choice == 'Y' || choice == 'y');  //Getting rid of our need for bool
	//function for running again


	cout << "Thanks for playing and hope you passed!" << endl; //A nice sendoff

	return(0);
}



// Function Implementation 

double courseAvg(int hw, int testAvg, int final) {

 //We're turning each of the variables into a decimal value for later:


	int hwWeight = (1.0 * 15) / (100);     //1.0 is so we recast integer
										   //so we save memory long-term
	int testAvgWeight = (1.0 * 52) / (100);

	int finalWeight = (1.0 * 33) / (100);  //Doing this for efficient code.


	return ((hwWeight * hw) + (testAvgWeight * testAvg) * (finalWeight * final));

}



char letterGrade(double avg) {


		cout << "Grade = ";
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
