//Eli Ahmed
//Lab 7a String and Array of Strings (Without Pointers)


#include<iostream>
#include<string>

using namespace std;


int main(void) {

    //Prompt Creating String and Array of Strings with "Interesting" Criteria

    cout << "Welcome the String Machine, input a string of your choice! \n" << endl;

    string userString;
    cout << "Enter a string: ";
    getline(cin, userString);



    //This prints the string with dashes
    cout << "String with dashes: ";
    for (char c : userString) {
        cout << c << '-';
    }
    cout << endl;



    //Starting from "endValue" and printing string backwards with the dashes
    cout << "String backwards with dashes: ";

    for (int i = userString.length() - 1; i >= 0; i--) {
        cout << userString[i] << '-';
    }
    cout << "\n" << endl;   //Wanted extra space between the next function line



    //OUR array const size n (good programming practice), for the string

    const int n = 5;
    string userStrings[n];



    //Using an accumulator to populate number of strings as stated above (5)
    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, userStrings[i]);
    }

    //This accumulator inserts an asterisk between each char in the string
    cout << "\nStrings with asterisks: " << endl;
    for (int i = 0; i < n; i++) {
        for (char c : userStrings[i]) {
            cout << c << '*';
        }
        cout << endl;
    }


    return (0);


}

