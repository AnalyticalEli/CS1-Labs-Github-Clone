//If statement 

//Only WORK for INTEGERS

//Switches Notes 4AB Part 3
#include <iostream> //True = 1, False = 0
using namespace std;

int main(void) {

	int x = 5; //This is the condition, the x below must =5 or it will not display the x 
	//must below or it will not display text inside if {}

	switch (x) //This is a better if statement, order doesn't matter like it does there.
	{
	case 5:
		cout << "Case 5 executed" << endl;
		break;
	case 10:
		cout << "Case 10 fired" << endl;
		break;
	default:
		cout << "catch-all statements" << endl;
	}

	cout << "This is the end" << endl;


	return(0);
}