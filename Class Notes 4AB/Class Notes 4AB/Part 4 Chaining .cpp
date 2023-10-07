//Chaining

//Switches Notes 4AB Part 3
#include <iostream> //True = 1, False = 0
using namespace std;

int main(void) {

	int x = 5; //This is the condition, the x below must =5 or it will not display the x 
	//must below or it will not display text inside if {}

	if (x == 7) {
		cout << "Lucky Number 7" << endl;
	}else if (x == 3) {
		cout << "You rolled craps" << endl;
	}else if (x == 2) {
		cout << "snake eyes" << endl;
	}
	else {
		cout << "Roll again" << endl;
	}


	return(0);
}