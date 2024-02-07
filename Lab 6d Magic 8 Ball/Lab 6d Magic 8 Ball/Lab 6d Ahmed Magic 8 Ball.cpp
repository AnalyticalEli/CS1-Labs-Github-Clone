//Eli Ahmed
//Lab 6d Magic 8 Ball


#include<iostream>
#include<string>   
#include<cstdlib>
#include<ctime>

using namespace std;


int main(void) {

//Prompt: Create a magic 8 ball App, that displays random response from array.


	srand(time(0));
	string userResp;

	char playerChoice;

	const int size = 20;    //All we have to use seed 
	string a[size] = { "It is decidedly so", "Without a doubt", "Yes definitely",
					   "You may rely on it", "As I see it, yes" "Most likely",
					   "Outlook good", "Yes", "Signs point to yes",
					   "Reply hazy, try again", "Ask again later",
					   "Better not tell you now", "Cannot predict now",
					   "Concentrate and ask again", "Don't count on it",
					   "My reply is no", "My sources say no", "Outlook not so good"
					   "Very Doubtful" };


	do {

		cout << "\Ask a question: ";
		getline(cin, userResp);


		cout << "8-Ball (Matel®): " << a[rand() % size] << endl; //Gets random 
																 //from string.

		cout << "Do you want to play again? (y or n): ";
		cin >> playerChoice;
		

		while (cin.get() != '\n') {}  //Allows new answer, after Y or N response!



	} while (playerChoice == 'y' || playerChoice == 'Y');   //Our loop for player



	return(0);
}