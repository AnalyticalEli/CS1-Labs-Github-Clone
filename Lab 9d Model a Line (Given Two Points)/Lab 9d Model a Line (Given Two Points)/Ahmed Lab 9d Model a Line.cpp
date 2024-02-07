//Eli Ahmed
//Lab 9d Model a Line with Objects 

#include<iostream>
#include<cmath>


using namespace std;


//Creating Object for Points 


struct Point {        

	double x, y;     //Defining our x and y point data types.



	//Default Constructor for Point Object


	Point(double argX = 0, double argY = 0);    //Default means this constructor initializes at 0


	//Methods for Point Object 

	void print(void);       //Prints the actual points.



};



//This the object for the Line that PULLS from Point Object ABOVE

struct Line {   

	Point a, b;		   //Giving a & b a class value for constructor Implementation 


	//Constructor Prototype for Line

	Line(Point argA = Point(), Point argB = Point());  //Essentially setting values equal to Point
													   //values (taking Point values from above)


	//Method Prototype for Line

	void print(void);   //Can use same name as long as they're in different structures.

	double slope(void);				//Finding Slope Prototype Method

	double yIntercept(void);		//(void) means as many values as we want.

	double evaluateX(double argXd);    //ArgXd is the alternating/changing x value


};


int main(void) {

	Point u(1,2), v(6,9);     //2 Point Objects 
	
	Line myLine(u, v);  //Our line constructor, Line(Point argA....) allows us to grab the values
						//from line.

	cout << "The slope of the line is: " << myLine.slope() << endl;  //Prints slope to console


	myLine.print();   //Uses our Line print() Method, we created to make this look nice



	//Interchangable x, replace 5 with desired value.

	double argXd = 5;       //Makes code more extensible.

	cout << "Value at x = " << argXd << " is " << myLine.evaluateX(argXd) << endl; 


	return(0);
}



//Constructor Implementation:


//Points Constructor

Point::Point(double argX, double argY) {   //Instantiating values for Point Object.

	x = argX;	//Essentially saying as argX changes, so will x
	y = argY;   //Essentially saying as argY changes, so will y


}


//Line Cosntructor 

Line::Line(Point argA, Point argB) {

	a = argA;     //What we set our value taken in from Point Constructor (a = x, and y = b)

	b = argB;


}


//Method Implementation


void Point::print(void) {     //For the Points object values to print.


	cout << "(" << x << "," << y << ")" << endl;   //Setting object x & y as ordered pair (x,y)

}



void Line::print(void) {     //For the Line Object values to print nicely to output


	cout << "Our Line: ";

	cout << "y = " << slope() << "x + " << yIntercept() << endl;


}



double Line::slope(void) {       //Slope method Implementation 

	return((b.y - a.y) / (b.x - a.x));        //Caculation for slope in y = mx + b
											  //Remember slope is rise (b.y - a.y) over run (b.x - a.x)



}

double Line::yIntercept(void) {     //Y-intercept method implmentation.


	return(a.y - slope() * a.x);    //Calculation for b in y = mx + b 


}




double Line::evaluateX(double argXd) {


	return(slope() * argXd + yIntercept());  //Finding our answer with interchangeable argXd


}