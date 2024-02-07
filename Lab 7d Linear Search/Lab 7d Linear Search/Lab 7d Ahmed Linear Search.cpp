//Eli Ahmed
//Linear Search through 10 Element Array of Random Letters. (A-

#include <iostream>
#include<ctime>     //For seeding random
#include<cstdlib>  //For seeding random
using namespace std;


//Function Prototypes

void printArray(char arg[], const int size);
 
void populateArray(char arg[], const int size);

int linearSearch(char arg[], const int size, char target);


int main(void) {

    srand(time(0));  //Seeding random time.

    const int n = 10;
    char a[n];
    int index;
    char userTarget, userResponse;  //userResponse is for do loop



    do {

        cout << "\nPress -1 at any time to exit program!\n" << endl;

        populateArray(a, n);
        printArray(a, n);

        cout << "\nEnter a target value from list above: ";  //Prompt
        cin >> userTarget;


        index = linearSearch(a, n, userTarget);  //


        //User Interface with LINEAR SEARCH

        if (index == -1) {
            cout << "Target Not found: " << endl;

        }
        else {

            cout << "Target found at index " << index << endl;
        }


        cout << "Do you want to search for another letter? (y or n): ";
        cin >> userResponse;


    } while (userResponse == 'Y' || userResponse == 'y');  //Saves us a bool funct dependency

    return 0;
}




//Function Prototype

void printArray(char arg[], const int size) {
        for (int i = 0; i < size; i++) {
            cout << i << " has " << arg[i] << endl;
        }
    }



void populateArray(char arg[], const int size) {    //Will not display because of void.
    for (int i = 0; i < size; i++) {          //Going to n = 9, because there's not 10 numbers
        arg[i] = rand() % 26 + 'a';         //Setting our range to 26 because that's alphabet length!
                                            //Also by adding our char arg by 
                                            //we start at the ASCII value and go up to end of alphabet.
                                               
                                            //SAME idea as adding by 1 to get a value that doesn't
                                            //start from 0, except with ASCII or letter values.

    }
}



int linearSearch(char arg[], const int size, char target) {
    for (int i = 0; i < size; i++) {
        if (tolower(arg[i]) == tolower(target)) {  //Using a target to find desired number in code
                                                   //Where tolower counts lowercase and 
                                                   //uppercase.

           return(i);         //Returning your target value
        }
    }
    return -1;   //Essentially saying if it doesn't return target number it will return a -1
}
