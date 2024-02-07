//Vector Notes 

//All C++ structures all REQUIRE a constructor.

#include<iostream>
#include<string>
#include<vector>  //Vector Library.

using namespace std;


struct Rectangle {

	double l;
	double w;

	string colour;


	//Constructor (never has return & must have same name as class) 
	//It is also defined within objects.

	//Constructor prototype / Default;

	Rectangle(void);


	//String Constructor Prototype

	Rectangle(string arg);  //For populating color


	Rectangle(double length, double width);  //For populating length and width


	Rectangle(string arg1, double length, double width);  //For populating length, width & colour


	//Methods

	void print(void);

};


int main(void) {

	vector<Rectangle> a; 

	a.push_back(Rectangle());  //This pushes back the Rectangle Objects=
	a.push_back(Rectangle("purple"));
	a.push_back(Rectangle("yellow", 8, 10.5));



	
	cout << a.size() << endl;

	a[0].print();  //Our first object with pushback

	a[1].print();   //Our second object with pushback

	a[2].print();


	cout << "size" << a.size() << endl;  //Will show us we have one rectangle object.




	return(0);


}



//Method Implementations 



Rectangle::Rectangle(string arg1, double length, double width) {

	l = length;
	w = width;
	colour = arg1;


}


Rectangle::Rectangle(double length, double width) {

	l = length;   //First custom term
	w = width;		//Second custom term
	colour = "Transparent";  //This gives us info for rectangle being called.


}


Rectangle::Rectangle(string argColour) {   //This constructor takes a string object, so any other data type
	//should be filtered out.
	l = 0;
	w = 0;
	colour = "Transparent";  //This gives us info for rectangle being called.


}


Rectangle::Rectangle(void) {   //Populates object with Default Constructor

	l = 0;
	w = 0;
	colour = "Transparent";  //This gives us info for rectangle being called.

};




void Rectangle::print(void) {
	cout << w << " " << l << " " << colour << endl;
}
