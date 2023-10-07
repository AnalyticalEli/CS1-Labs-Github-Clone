//Eli Ahmed
//ClassNotes 4B Recursion

#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int factorial(int n);

int main(void) {



    cout << "Freaking Factorial! "; 
    cout << factorial(5) << endl;


    return 0;


}


//Factorial Recurssion, is usually only good for relatively small values.

int factorial(int n) {
    if (n == 0) {  //The reason we're returning 1 when n=0 because 0! is 1.
        return 1;   //The loop keeps going until we get to 0, then stops. Starting at our given variable
    }else {          
        return n * factorial(n - 1);
    }
}