//Eli Ahmed
//Objected Oriented Programming with Structures Part 4 

//Getting Area (Function) with Circle Structre.


//Properties refer to intrisic values, fast, strong, tall, 
//Functions refer to calculations, like circumference, area, volume.


#include<iostream>
#include<string>


using namespace std;

const double PI = 3.14159;   //Declaring pi as global constant meaning it

//Making our data type structure (Creating a Circle)  This is not function object, this is template

//Structure Ususally goes in HEADER FILES on the right, and outside MAIN.

struct Circle {

	double radius;

	string fillColour;

	string strokeColour;

	double xCoordinate;

	double ycoordinate;



	//Now we're putting Function prototypes INSIDE Circle (even more efficient & saves space):


	void print(void);
	double area(void);  //Voiding because that was in the paranthesis is now a global constant.


};   //This semicolon is necessary!



int main(void) {

	Circle x, y;				//This is a circle object 


	//Setting properties of object

	x.fillColour = "Red";
	x.radius = 5;
	x.strokeColour = "Black";
	x.xCoordinate = 2.5;
	x.ycoordinate = 7.8;

	cout << x.area() << endl;   //Defining pi from function above and printing it.
	   

	return(0);

}



//Function Implementation of Struct (Calls on Circle Struct)


void Circle::print(void) {     //This gives you direct access to properties OUTSIDE CIRCLE
	//using scope resoluton operator (::)

	cout << "Rad: " << radius << endl;

	cout << "Circle Colour: " << fillColour << endl;   //Giving us fill colour

	cout << "Circle Stroke: " << strokeColour << endl;

	cout << "Circle : (" << xCoordinate << "," << ycoordinate << ")" << endl;
}



double Circle::double area(void) {
	return (pi * radius * radius);
}

