//Eli
//Class Structures Notes  (In real world we use classes not structures)

//FOR every property in struct you need 2 functions for accessor methods, a get and set function. 

#include<iostream>
#include<cmath>



using namespace std;


//class is a differnt type of structure.
class Point {


private:			 //We're making the properties private (meaning no one has access)
	double x, y;
	//int _passkey;    //Password/aka passkey


public:         //We're maing the constructor and methods public meaning people can change it.

	//Constructor 
	Point(double argX = 0, double argY = 0); 


	//Accessor Methods (allow indirect access to private stuff) aka set methods

	void setX(double argX);
	void setY(double argY);


	//Get function Prototype (Still Accessor method)
	double getX(void);
	double getY(void);


	//Methods
	void print(void);


};



int main(void) {


	Point a(3,4);   //Through using indirectly populating properties we can,  


	a.setX(9.6);  //Grabbing value from accessor method, and changing it (not actual double x)

	a.setY(5.6);   //Grabbing value from accessor method, and changing it (not actual double y)



	a.print();   //Printing 


	cout << a.getX() << endl;   //Print the Accessor value of x

	cout << a.getY() << endl;  //Print the Accessor value of y





}


//Cosntructor Implementation:

Point::Point(double argX = 0, double argY = 0) {

	setX(argY);     //Indirectly grabiing 

	setY(argY);

	//Direct access
	//x = argX;   //Initilizing argY and argX
	//y = argY;


}


//Accessor Methods

void Point::setX(double argX) {

	if (argX < 0) {

		x = -1 * argX;

	}
	else {

		x = argX;  //Accesssing the copy of x, which is private above.

	}

}

void Point::setY(double argY) {

	if (argY < 0) {

		x = -1 * argY;

	}
	else {

		x = argY;  //Accesssing the copy of x, which is private above.

	}
}

//Get function allows us to access x through argX (STILL ACCESS METHOD) 
double Point::getX(void) {

	return x;


}
double Point::getY(void) {


	return y;

}




//Methods
void Point::print(void) {





}