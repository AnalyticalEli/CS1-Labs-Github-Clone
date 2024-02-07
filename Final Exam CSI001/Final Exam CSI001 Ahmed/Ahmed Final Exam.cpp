//Eli Ahmed
//Final Exam CSCI001


#include <iostream>
#include<vector>
#include<string>
#include<cmath> //Pow function
#include<iomanip>  //For setprecision


using namespace std;

//Class Design
class Loan {


private:

	double loanAmount, interestRate, termYears;




	//We don't user to see how much original cost is 


public:


	//Constructor

	Loan(double argYears, double argLoan, double argInterestRate);


	//Acessor Methods


	double getYears(void);          //2 Accessor methods per each Property in Private.

	void setYears(double argYears);


	double getloanAmount(void);

	void setloanAmount(double argLoan);


	double getInterest(void);

	void setInterest(double argInterestRate);



	//Utility Methods

	void displayProperties();   //Displays the output that user sees after entering info

	double monthlyPayment(double termY);   //Gets Monthly Payments

	double termY();			//Gets term used in montly payments;


	double totalHomeLoan(double termY);               //Total amount Calc (Might not need A)

};

//C-type Function Prototypes
bool runAgain(void);


int main() {

	cout << "Welcome to the amazing Home Loan App.\n" << endl;



	char userResponse;   //Variable to capture userResponses

	vector <Loan> homeLoan;   //Our vector we'll be using to interact with userValues.


	double loanDue, interestRates, termYearsi; 	//All of the userInputs, instantiating data type.


	do {

		//User Interface:

		cout << "Enter the loan Amount: ($) ";
		cin >> loanDue;


		cout << "Enter the Interest Rate: (%) ";
		cin >> interestRates;
		interestRates = interestRates / 100;

		cout << "Enter the term (time) in years: ";
		cin >> termYearsi;





		homeLoan.push_back(Loan(termYearsi, loanDue, interestRates));


	} while (runAgain());



	//Display loop

	for (int i = 0; i < homeLoan.size(); i++) {

		homeLoan[i].displayProperties();

		double Monthly = homeLoan[i].monthlyPayment(termYearsi);

		double price = homeLoan[i].totalHomeLoan(termYearsi);


		//Setting Retail WholeSale Price to setPrecision 2 because prices reflect that.


		cout << "Your Monthly Payment is: $" << fixed << setprecision(2) << Monthly << endl;

		cout << "Total Home Loan is: $" << fixed << setprecision(2) << price << endl;

		cout << "\n\nTHANK YOU Redden for the awesome year, switched majors thanks to you!" << endl;

	}

	



	return(0);
}

// Function Implementation
bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to check different home loans? (y or n): ";
	cin >> userResponse;
	cin.ignore(); // to clean up the input stream

	if (userResponse == 'y' || userResponse == 'Y')
		return(true);

	return(false);
}



//Constructor


Loan::Loan(double argYears, double argLoan, double argInterestRate) {


	setYears(argYears);
	
	setloanAmount(argLoan);				//Indirect Access (Better & Safer)
	
	setInterest(argInterestRate);

}






//Accessor Method Implementation




double Loan::getYears(void) {


	return(termYears);


}
void Loan::setYears(double argYears) {



	termYears = argYears;

}


double Loan::getloanAmount(void) {

	return(loanAmount);


}

void Loan::setloanAmount(double argLoan) {

	loanAmount = argLoan;


}


double Loan::getInterest(void) {

	return(interestRate);


}

void Loan:: setInterest(double argInterestRate) {


	interestRate = argInterestRate;

}







//Utility Method Implementation (Calculations) 

//Display 


void Loan::displayProperties() {   //Prints all Computer Properties to Screen


	cout << "\nLoan Amount: " << getloanAmount() << endl;

	cout << "Term in Years: " << getYears() << endl;

	cout << "Interest Rate: " << getInterest() << endl;


}


//Term calc



double Loan::termY() {


	return pow((1 + interestRate / 12), (12 * termYears));

}





//Montly payment calc 


double Loan::monthlyPayment(double termY) {

	return((loanAmount * (interestRate / 12) * termY) / (termY - 1));


}




//Total Cost Of loan = Term + Montly Payment


double Loan::totalHomeLoan(double termY) {

	return(loanAmount * (1 + interestRate * termY));


}