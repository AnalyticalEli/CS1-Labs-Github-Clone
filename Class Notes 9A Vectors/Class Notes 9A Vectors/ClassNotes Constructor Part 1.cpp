////Vector Notes 
//
////All C++ structures all REQUIRE a constructor.
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//struct Rectangle {
//
//	double l;
//	double w;
//
//	string colour;
//
//
//	//Constructor (never has return & must have same name as class) 
//	//It is also defined within objects.
//
//	//Constructor prototype / Default;
//	
//	Rectangle(void);
//
//
//	//String Constructor Prototype
//
//	Rectangle(string arg);  //For populating color
//
//
//	Rectangle(double length, double width);  //For populating length and width
//
//
//	Rectangle(string arg1, double length, double width);  //For populating length, width & colour
//
//
//	//Methods
//
//	void print(void);
//
//
//
//
//};
//
//
//int main(void) {
//
//	Rectangle a;  //Defining a rectangle a with Default Constructor
//
//	Rectangle b("red"); //Inputting red for the colour where string is argument
//
//
//	Rectangle c(5, 8);  //Inserting where the legnth and width where data type is double
//
//
//	Rectangle d("green", 10, 20);  //Colour, length, and width where data type includes string, & doubles
//
//	a.print();
//	b.print();
//	c.print();
//
//
//
//
//	return(0);
//
//}
//
//
//
////Method Implementations 
//
//
//
//Rectangle::Rectangle(string arg1, double length, double width) {
//
//	l = length;
//	w = width;
//	colour = arg1;
//
//
//}
//
//
//Rectangle::Rectangle(double length, double width) {
//
//	l = length;   //First custom term
//	w = width;		//Second custom term
//	colour = "Transparent";  //This gives us info for rectangle being called.
//
//
//}
//
//
//Rectangle::Rectangle(string argColour) {   //This constructor takes a string object, so any other data type
//	//should be filtered out.
//	l = 0;
//	w = 0;
//	colour = "Transparent";  //This gives us info for rectangle being called.
//
//
//}
//
//
//Rectangle::Rectangle(void) {   //Populates object with Default Constructor
//
//	l = 0;
//	w = 0;
//	colour = "Transparent";  //This gives us info for rectangle being called.
//
//};
//
//
//
//
//void Rectangle::print(void){
//		cout << w << " " << l << " " << colour << endl;
//	}
