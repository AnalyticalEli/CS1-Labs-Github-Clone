//Eli Ahmed
//Lab 6c Min and Max Arrays 


#include<iostream>
#include<iomanip>  //For setprecision
#include<cstdlib>  //The cstlib and ctime is for random seed.
#include<ctime>

using namespace std;


//Function Prototype:

double randomNumberGenerator(void);

int maxInteger(int a[], int size);

int minInteger(int a[], int size);



int main(void) {

	char userChoice;   //Is the user input choice


	srand((time(0)));  //This seeds our random number by time.

	const int size = 20;      //Given conditions
	int randomNumber[size];   //20 is size of array



	do {			//Accumulator Goes in DO While Loop
					
		for (int i = 0; i < size; i++) {				//This for loop sets range
		   randomNumber[i] = randomNumberGenerator();  //of the numbers (1-1000)

		}


		for (int i = 0; i < size; i++) {
			cout << randomNumber[i] << " "; //Actually prints out numbers in array
											//sequentially. (rand 1-1000)
		}


		int max = maxInteger(randomNumber, size);    //Renaming variables (good
		int min = minInteger(randomNumber, size);	 //program practice)


		cout << "\nThe maximum value is: " <<  max << endl; 
		cout << "\nThe minimum value is: " << min << endl; 


		cout << "Do want to play again: (y/n) ";
		cin >> userChoice;



	} while (userChoice == 'y' || userChoice == 'Y'); //By hard coding y and Y once it 
													//can change my variable for loop
	                                                //as easily as a boolean funct, AND it saves me from a dependency.


	return(0);

}


//Function Impementation:

//We want a random number for we must construction function (1-1000)

double randomNumberGenerator(void) {

	return(1 + rand() % 1000); 

}


int maxInteger(int a[], int size) { //Function is repsonsible for max 

	int max = a[0];		//We're initializing max as the first element of array.

	for(int i = 1; i < size; i++)   //Because it starts at a[0], starting at i = 1
		if (a[i] > max) {			//Setting condition if term in accumulator
			max = a[i];				//is greater than rest, set it to max.

		}

	return (max);
}


int minInteger(int a[], int size) {  //Function is repsonsible for min

	int min = a[0];		//We're initializing min as the first element of array.

	for (int i = 1; i < size; i++)   //Because it starts at a[0], starting at i = 1
		if (a[i] < min) {			//Setting condition if term in accumulator
			min = a[i];				//is less than the rest, set it to max.

		}

	return (min);
}
