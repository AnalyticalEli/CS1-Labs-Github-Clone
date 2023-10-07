
//If statement
#include <iostream> //True = 1, False = 0
using namespace std;

int main(void) {

	int x = 5; //This is the condition, the x below must =5 or it will not display the x 
	//must below or it will not display text inside if {}


	if (x != 5) {  //This is the nested if statement.  (!) Means: is not
		cout << "The values is 5" << endl;
	}
	else {
		cout << "The comparison is False" << endl;
	}

	cout << "This is the end" << endl;


	return(0);
}