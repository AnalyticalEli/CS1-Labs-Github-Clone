//Eli Ahmed
//Class Notes 9e Composititon with Objected Oriented Design 


#include<iostream>
#include<cmath>  //For sqrt in our distance formula
#include<string>

 using namespace std;


 struct Point {

	 double x, y;


	 //Default Constructor Prototype

	 Point(double argX = 0, double argY = 0);

	
	 //Point Methods Prototype:

	 void print(void); 

};


struct Triangle {   //Is the actual triangle which has the three points that form it.

	Point a, b, c;
	string color;


	//Triangle Constructor Prototype:

	Triangle(Point argA = Point(), Point argB = Point(), Point argC = Point());  //This brings in default values from Point



	//Methods Prototype Triangle

	void print(void);   //Can use same name as long as they're in different structures.


	double distance(int arg);   //Method prototype for our distance values.

	double perimeter(void);   //Method Prototype for Function

	double area(void);    //Method Prototype for area.


 };


int main(void) {

								//Composition Time!! aka UI 

	Point u(3, 4), v(-2, 5), w(1, 1);   //We're able to plot this



	Triangle myTriangle; //Our triangle constructor, Triangle(Point argA....) allows us to grab the values
						  //from triangle.

	myTriangle.print();


	//Triangle Distances:

	cout << myTriangle.distance(1) << endl;  //Distance from AB

	cout << myTriangle.distance(2) << endl;  //Distance from BC

	cout << myTriangle.distance(3) << endl;  //Distance from CA 


	cout << "Triangle Perimeter: " << myTriangle.perimeter() << endl;
	cout << "Triangle area: " << myTriangle.area() << endl;


	//	//a.x = 0;
	//	//a.y = 0;



	return(0);
}






//Constructor Implementation:


Point::Point(double argX = 0, double argY = 0) {  //Point Constructor.


	x = argX;
	y = argY; 

}


Triangle::Triangle(Point argA, Point argB, Point argC) {  //Triangle Constructor

	a = argA;

	b = argB;

	c = argC;


}





//Methods Implementation:

void Point::print(void){  //Our print function for our Point structure, aka (2,3). Ordered pair.


	cout << "(" << x << "," << y << ")" << endl;


}


void Triangle::print(void) {  //Our print function for triangle object

	cout << "Triangle" << endl;

	a.print();
	b.print();
	c.print();



}


double Triangle::distance(int arg) {    //Distance formula with all distances, D1, D2, D3.

	double ans;   //Inititation ans.

	if (arg == 1) {  //If code is 1 (meaning distance AB)

		ans = sqrt( (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));


	}
	else if (arg == 2) {   //IF code is 2 (meaning distance BC)

		ans = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));

	}
	else {	 //If code is not 1 or 2, then this.


		ans = sqrt((c.x - b.x) * (c.x - b.x) + (c.y - b.y) * (c.y - b.y));

	}

	return ans;

}


double Triangle::perimeter() {


	return distance(1) + distance(2) + distance(3);   //Meaing AB + BC + CB  Distance of triangle

}


double Triangle::area(void) {

	double s = perimeter() / 2;

	return sqrt(s * (s - distance(1)) * (s - distance(2)) * (s - distance(3)));  

}