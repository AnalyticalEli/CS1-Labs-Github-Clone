//Eli Ahmed
//Class Notes 4B

#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
	srand(time(0)); //Getting the time as the seed, allows it to get a random number
	//at any time

	int x = 1 + rand() % 100; //Will return a pseudo random number and %100 makes it
	//return a number 1-100

	cout << x << endl;


	cout << "Come one, come all see the one and only guessing game!" << endl;



	cout << RAND_MAX << endl;





