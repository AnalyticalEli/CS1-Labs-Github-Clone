// program to demonstrate the pseudo-random number generator
#include <iostream>
#include <cstdlib> // srand, rand 
#include <ctime> // time 
using namespace std;

int main(void)
{

	srand(time(NULL)); // seed the random number generator

	cout << "Here are 10 random numbers: \n";
	cout << "Time: " << time(NULL) << endl;
	cout << "RAND_MAX = " << RAND_MAX << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		//generate a random number between 0 and RAND_MAX
		cout << i << " : " << rand() << endl;

		//generate random number between 1 and 10
		//cout << i << " : " << rand()%10 + 1 << endl;

		//generate a random number between 0 an 100
		//cout << i << " : " << rand() % 101 << endl;

		//generate a random number between -10 and 10
		//cout << i << " : " << rand() % 21 - 10 << endl;

	}

	return 0;
}