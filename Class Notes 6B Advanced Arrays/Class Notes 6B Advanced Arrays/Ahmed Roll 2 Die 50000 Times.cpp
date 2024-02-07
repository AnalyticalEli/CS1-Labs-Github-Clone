//Eli Ahmed 
//Class Notes 6B Law of Large Numbers (Probability)


#include<iostream>
#include<ctime> 
#include<cstdlib>

using namespace std;


//Function Pr
int rollDie(void);



int main(void) {

	srand(time(0));
	
	int rolls = 50000;	//Variable for number of rolls, the larger the better! (Law of Large Numbers)

	int sum;

	int const size = 13;
	int a[size];  //Counts 13 spaces for 12 (largest die combination 6 + 6]



	for (int i = 0; i < 13; i++) {  //Initializing all values in array!
		a[i] = 0;

	}

	for (int i = 0; i < rolls; i++) {    //Goes all the way to 50000 rolls
		sum = rollDie() + rollDie();     //Adds 2 number total rolls up

		a[sum]++;
	}


	for (int i = 0; i < 13; i++) {		//This prints the frequency to console once we run code.
		cout << "sum " << i << " = frequency" << a[i] 
			 <<"\tprob" << 1.0 * a[i] / rolls << endl;  //Gives us probability of rolling each number 
														//Mulitiplied 1.0 to a[i] to make it a double.
	}



	return 0;

}





//Function Implementation:

int rollDie(void) {

	return (1 + rand() % 6); //Will generate numbers 1-6 from Dice

}

