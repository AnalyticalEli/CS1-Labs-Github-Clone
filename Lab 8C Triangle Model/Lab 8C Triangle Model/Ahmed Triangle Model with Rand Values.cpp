//Eli Ahmed
//Lab 8d Triangle Model With Objects

#include<iostream>
#include<cstdlib> //For random seed
#include<ctime>   //For random seed


using namespace std;

//Triangle Inequality, the sides of two, must be greater than the sides of one!

struct Triangle {
    double sideA, sideB, sideC;
    string color;

    //Methods aka Function within Structure.

    void printTriangle() const;

};

// C-type Function Prototype for Bool Function that checks the Inequality:

bool checkInequality(double a, double b, double c);


int main() {
    srand(time(0));  //Seeding random time

    double a, b, c;   //Setting value outside of loop for efficiency.
    
    const int size = 50;   //Initilizing array size 
    Triangle triangles[size];

    for (int i = 0; i < size; ++i) {

        do {
            a = rand() % 10 + 1; // random side length between 1 and 10
            b = rand() % 10 + 1;
            c = rand() % 10 + 1;
        } while (!checkInequality(a, b, c));

        string colors[5] = { "Red", "Blue", "Green", "Yellow", "Orange" };  //Setting values for colours
        string randomColor = colors[rand() % 5];

        triangles[i] = { a, b, c, randomColor };
    }

    for (int i = 0; i < size; ++i) {     //Seperate loop that prints to screen
        cout << "Triangle " << i << ":" << endl;
        triangles[i].printTriangle();   //Printing the result of i.
    }

    return 0;
}





//Methods (Structure) Implementation: 

void Triangle::printTriangle() const {
    cout << "Triangle Sides: " << sideA << ", " << sideB << ", " << sideC << endl;
    cout << "Color: " << color << endl << endl;
}


//Function Implementation: 

bool checkInequality(double a, double b, double c) {
    return ((a + b > c) && (b + c > a) && (a + c > b));
}