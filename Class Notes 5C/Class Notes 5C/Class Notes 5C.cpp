#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function Prototypes
bool runAgain(void);
int rolldie(void);

int main() {
	srand(time(0));

	int sum = 0;
	int r1, r2, point = 0;
	char userResponse;

	cout << "Hello Craps!" << endl;



	do {
		cout << "\nReady to roll? ";
		cin >> userResponse;

		r1 = rolldie();
		r2 = rolldie();
		sum = r1 + r2;
		cout << "Roll 1: " << r1 << endl;
		cout << "Roll 2: " << r2 << endl;
		cout << "Shot: " << sum << endl;

		if (sum == 7 || sum == 11) {
			cout << "You win!" << endl;
			point = 0;
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			cout << "Craps! You lose." << endl;
			point = 0;
		}
		else {
			point = sum;
			cout << "The point is: " << sum << endl;
		}

		while (point != 0) {
			cout << "\nReady to roll again? ";
			cin >> userResponse;

			r1 = rolldie();
			r2 = rolldie();
			sum = r1 + r2;
			cout << "\nSecond Roll 1: " << r1 << endl;
			cout << "Second Roll 2: " << r2 << endl;
			cout << "Shot: " << sum << endl;

			if (sum == point) {
				cout << "You win!" << endl;
				point = 0;
			}
			else if (sum == 7) {
				cout << "You lose" << endl;
				point = 0;
			}
			else {
				cout << "Roll again" << endl;
			}

		}

	} while (runAgain());

	return(0);
}
int rolldie(void) {
	return(1 + rand() % 6);
}



// Function Implementation
bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to play craps again? (y or n): ";
	cin >> userResponse;
	cin.ignore(); // to clean up the input stream

	if (userResponse == 'y' || userResponse == 'Y')
		return(true);

	return(false);
}








