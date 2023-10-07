//Eli Ahmed
//Lab 5a

//This prints the number of attempts, but doesn't give user choice.

#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool runAgain(void);

int main(void) {

    int x, y, attempts;

    srand(time(0));  //Getting the time as the seed, allows it to get a random number at any time

   do {
        x = 1 + rand() % 100;  //Will return a pseudo random number and %100 makes it return a number 1-100
        attempts = 0;          //This keeps track of # of attempts

        cout << "Come one, come all see the one and only guessing game!\n" << endl;

        while (true) {
            cout << "Input an integer for y (1-100) or press -1 to quit: ";
            cin >> y;

            if (y == -1) {
                cout << "Goodbye, come back soon! " << endl;
                return 0;
            }

            if (y >= x) {
                if (y != x) {
                    cout << "Too high!" << endl;
                }
                else {
                    cout << "You got it!" << endl;
                }
            }
            else {
                cout << "Too Low!" << endl;
            }

            attempts++;    //This is our implement accumulator attempts++ = attempts + 1

            cout << "This is your number of attempts thus far: " << attempts << endl;

            if (y == x) {
                break;   //This is the break in this loop if user gets it correct.
            }
        }

        cout << "Now attempts is: " << attempts << endl;

   } while (runAgain());

    return 0;
}

bool runAgain(void) {
    char userResponse;

    cout << "Do you want to play again (y or n)? " << endl;
    cin >> userResponse;
    cin.ignore();


    return (userResponse == 'y' || userResponse == 'Y');
}
