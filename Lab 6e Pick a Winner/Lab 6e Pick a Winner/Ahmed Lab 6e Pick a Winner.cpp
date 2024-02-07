//Eli Ahmed
//Lab 6e Pick A Winner  (Sadly no Anti-user Interface)


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function Prototypes
bool runAgain(void);

int main() {
    srand(time(0)); // Seeding our random time

    const int size = 50;
    string names[size];

    int validNames = 0;  // This is initializing our variable for counting Names
                         //plus not in loop so efficient
   
    //Prompt:Creating a Random Winner Picker from a random Hat Draw
    
    cout << "Welcome to the Hat Draw Winner Picker!\n " << endl;


    do {

        for (int i = 0; i < size; i++) {
            cout << "Enter name: ";
            getline(cin, names[i]);
            if (names[i] != "") {    // Pressing enter to exit
                validNames++;    // This stores all of the attempts(names) in loop a
                                // and transmits it below for us to print 
            }
            else {
                break;
            }
        }

        if (validNames > 0) {  // Sets the condition if there are names entered it will pick a random
            do {
                int randomIndex = rand() % validNames; // This function picks at random
                                                       // the winning name + good practice

                cout << "The winner is: " << names[randomIndex] << endl;

                if (!runAgain()) {  //If it doesn't run again breaks
                    break;
                }
            } while (true);  //This retains the previous names.
        }
        else {
            cout << "No names Entered. Breaking out of game." << endl;
            break;
        }

    } while (true);  //This while true keeps loop from going to return.

    return(0);
}

// Function Implementation
bool runAgain(void) {
    char userResponse;

    cout << "\nWould you like to run the program again with the same names? (y or n): ";
    cin >> userResponse;
    cin.ignore();  // This clears the output for next row of names

    return (userResponse == 'y');
}