//Eli Ahmed
//Objected Oriented Programming with Structures Part 4 

//Making our own data types using Objects with Circles! (MOST IMPORTANT)


//Properties refer to intrisic values, fast, strong, tall, 
//Functions refer to calculations, like circumference, area, volume.


#include<iostream>
#include<string>


using namespace std;

//Making our data type structure (Creating a Circle)  This is not function object, this is template

//Structure Ususally goes in HEADER FILES on the right, and outside MAIN.

struct Circle {

	double radius;

	string fillColour;

	string strokeColour;

	double xCoordinate;

	double ycoordinate;



	//Now we're putting Function prototype INSIDE Circle (even more efficient & saves space):


	void print(void);



};   //This semicolon is necessary!



int main(void) {

	Circle x,y;				//This is a circle object 


	//Setting properties of object

	x.fillColour = "Red";
	x.radius = 5.6;
	x.strokeColour = "Black";
	x.xCoordinate = 2.5;
	x.ycoordinate = 7.8;

	y.radius = 6.7;



	x.print();  //Prints out the terms from the function inside struct Datatype!!

	y.print();


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



