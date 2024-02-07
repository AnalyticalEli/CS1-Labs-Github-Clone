//Eli Ahmed
//Lab 8d Triangle Model With Objects

#include<iostream>
#include<cstdlib> //For random seed
#include<ctime>   //For random seed
#include<cmath>   //For sqrt in Herons Thereom.


using namespace std;

//Triangle Inequality, the sides of two, must be greater than the sides of one!

struct Triangle {
    double sideA, sideB, sideC;
    string color;

    //Methods aka Function within Structure.


    bool checkInequality(double a, double b, double c); //Wasn't sure if you want the bool function in 
                                                        //here as well so did it as precautionary.

    void printProperties(void);  //Exactly the same as printTriangle() method from my lab 8d!

    double area(void);

    double perimeter(void);

};


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
        } while (!triangles[i].checkInequality(a, b, c));

        string colors[5] = { "Red", "Blue", "Green", "Yellow", "Orange" };  //Setting values for colours
        string randomColor = colors[rand() % 5];

        triangles[i] = { a, b, c, randomColor };
    }

    for (int i = 0; i < size; ++i) {     //Seperate loop that prints to screen
        cout << "\n\nTriangle " << i << ":" << endl;
        triangles[i].printProperties();   //Printing the result of i.

        cout << "Area: " << triangles[i].area() << endl;  //Printing area.
        cout << "Perimeter: " << triangles[i].perimeter() << endl;  //Printing perimeter.

    }

    return 0;
}



//Methods (Structure) Implementation:

bool Triangle::checkInequality(double a, double b, double c) {
    return ((a + b > c) && (b + c > a) && (a + c > b));
}

void Triangle::printProperties(void) {
    cout << "Triangle Sides: " << sideA << ", " << sideB << ", " << sideC << endl;
    cout << "Color: " << color << endl << endl;
}


double Triangle::area(void) {  //Finding area using Herons Formula 

    double s = (sideA + sideB + sideC) / 2.0;  //Defining s, so we can use it in formula below.


    return(sqrt(s * (s - sideA) * (s - sideB) * (s - sideC)));

}


double Triangle::perimeter(void) {  //Thank goodness for Methods :D

    return(sideA + sideB + sideC);

}