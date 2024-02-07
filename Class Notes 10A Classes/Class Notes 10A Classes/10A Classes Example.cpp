// Notes on Rectangle Class   (Getting values


#include <iostream>
#include <string>
using namespace std;

// Class Definition
class Rectangle {

	double l, w;
	string units, color;

public:
	Rectangle(double argl = 1, double argw = 1, string argUnits = "in", string argC = "Transparent");

	// Set and get funcitons (new for today) 
	double getLength(void);           //2 accessor methods for argl
	void setLength(double argl);

	double getWidth(void);		     //2 accessor methods for arg2
	void setWidth(double arg2);

	string getUnits(void);			//2 accessor methods for arg3
	void setUnits(string arg3);

	string getColor(void);
	void setColour(string argC);

	double area(void);             //Area

	double perimeter(void);        //Perimeter


	void print (void);            //Print Function.


};



int main(void) {

	Rectangle a;

	a.setWidth(3);

	a.setLength(4);



	/*cout << "Length: " << myRect.getLength() << endl;
	cout << "Width: " << myRect.getWidth() << endl;*/
	/*cout << "Area: " << myRect.area() << " " << myRect.getUnits() << "^2" << endl;
	cout << "Perimeter: " << myRect.getColor << end;*/



		//Our work below:

		//User Interface
	cout << "************** EXAMPLE 2 **************" << endl;
	Rectangle a;
	double userVal;

	cout << "Enter the width: ";
	cin >> userVal;

	a.setWidth(userVal);    //Inputting user input as width


	cout << "Enter the length: ";
	cin >> userVal;

	a.setLength(userVal);	//Inputting user input as legnth



	Rectangle a(4,3);  //Starting with our rectangle a.

	cout << a.getWidth() << " by " << a.getLength() << endl;   //This prints our length x width for 
															   //rectangle a.	
	cout << "Area " << a.area() << endl;    //Area with units

	return(0);


}

//Class Implementations

//Constructor
Rectangle::Rectangle(double argl, double argw, string argUnits, string argC) {

	setLength(argl);    //Indirect Access (What professor wants)
	setWidth(argw);
	setUnits(argUnits);
	setColour(argC);

}


//Accessor Methods
double Rectangle::getLength(void) {
	return(l);
}
void Rectangle::setLength(double argl) {
	l = argl;
	// data validation goes here!
	if (argl <= 0)
		l = 1;
}
double Rectangle::getWidth(void) {
	return(w);
}
void Rectangle::setWidth(double arg2) {
	w = arg2;
}

string Rectangle::getUnits(void) {
	return(units);
}
void Rectangle::setUnits(string arg3) {
	units = arg3;

}

string Rectangle::getColor(void){

	return(color);

}

void Rectangle::setColour(string argC) {

	color = argC;


}


//Utility Methods;

void Rectangle::print(void) {

	cout << "Rectangle object with colour " << getColor() << endl;
	cout << "Dimensions " << getLength() << " by " << getWidth() << endl;
}


double Rectangle::area(void) {
	
	//Direct (not as good)
	//return(l * w)

	//Indirect (safer/better)
	return(getLength() * getWidth());   
}


double Rectangle::perimeter(void) {

	return(2 * getLength() + 2 * getWidth());

}