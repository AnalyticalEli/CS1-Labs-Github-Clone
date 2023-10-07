//Eli Ahmed
//Exam 1

#include<iostream>
#include<cmath>
#include<ctime>  //For srand time

using namespace std;

//Function Prototype

int rollDie(void);



int main(void) {

	int totalRoll;

	char userResponse; //y or n for wanting to play again.

	srand(time(0)); //Getting/Initializing seed that allows random number generator


	int wins = 0;  //Stating starting condition of wins
	int losses = 0; //Starting Condition of Losses
	double attempts = 0;

	//Prompt: Using only one function create a random dice rolling loop

    cout << "Come one, come all to the alluring game of chance, the Roll Dice Game!\n " << endl;


	do {

		cout << "Press -1 to exit and "; 

		totalRoll = rollDie();
								  //Calculates total value of both rolls

		cout << "Rolled: " << totalRoll << endl;



		if (totalRoll < 16) {   //If roll 7 or 11, you win
			cout << "You Rolled Low! " << endl;

			while(true)
							//If wins here, it adds it to total wins
			if (totalRoll < 8) {
				cout << "You Lose" << endl;
				losses++;
				break;
			}
			else {
				cout << "Lose a Turn" << endl;
				break;
				attempts++;
			}
		}
		else {

			while (true)

				if (totalRoll < 24) {
					cout << "Roll Again " << endl;
					break;
					attempts++;
				}
				else (totalRoll >= 24) {
					cout << "You win! " << endl;
					wins++;         //Adds to total wins
					break++;
			
	
		}

		}

			

		else if (totalRoll >= 16 ) {  //If roll 2,3,or 12 You lose
			cout << "Craps You Lose! " << endl;
			losses++;   //If lose here, it adds it total losses.
			
			while(true) 

				if (totalRoll < 24) {
					cout << "Roll Again " << endl;


				}
				else if (totalRoll >= 24) {
					cout << "You win! " << endl;
				}
		}
		
		else {							 //Else, you get a bad point

			int point = totalRoll;       //Setting point counter

			cout << "Point is set to " << totalRoll << endl;

			while (true) {	//This while loop counts the "bad points" which cause you to lose & win/losses
				roll1 = rollDie();
				roll2 = rollDie();
				totalRoll = roll1 + roll2;

				cout << "Rolled: " << roll1 << " and " << "Rolled: " << roll2 << endl;
				cout << "Total: " << totalRoll << endl;


				if (totalRoll == point) {  //Stating conditon if win
					cout << "You Win! " << endl;
					wins++;
					break;                 //Break ends the game if you win
				}
				else if (totalRoll == 7) {  //Stating condition if lose
					cout << "You Lose! " << endl;
					losses++;      //counts losses
					break;         //Breaks game if lose.


				}



			}
		}

		attempts++ 

		cout << "\nWould you like to roll again (y or n): ";
		cin >> userResponse;
		cin.ignore(); // to clean up the input stream


	} while (userResponse == 'y' || userResponse == 'Y');


	cout << "Total Wins: " << wins << "\tTotal Losses: " << losses << endl;

	return(0);
}




//Function

int rollDie(void) {

	return rand() % 32 + 1; 	  //This keeps our range from [1 to 6]
	//By taking range [0,5] & adding that + 1 to both 

}
