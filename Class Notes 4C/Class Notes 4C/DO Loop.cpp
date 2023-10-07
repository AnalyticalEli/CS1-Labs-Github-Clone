//Eli Ahmed
//Do loop

#include<iostream>
#include<string>

using namespace std;

int main(void) {

	int x = 10;  //initializer


		//Do loops are post-test loops meaning it prints something out
		do {
			cout << "x = " << x << endl;
			x = x - 2;
		} while (x > -15);

		cout << " ****************** \n" << endl;


	//While loops are pre-test loop
		x = 10;
		while (x > -1) {
			cout << "x = " << x << endl;
			x = x - 2;
		}



	
		return(0);



}