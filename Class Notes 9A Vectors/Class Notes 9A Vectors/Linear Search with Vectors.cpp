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

	srand(time(0));

	string colours[5] = { "red", "green", "blue", "yellow", "purple" };

	vector<Rectangle> a;   //Vector a with object Rectangle
	Rectangle temp;


	for (int i = 0; i < 10; i++) {

	//Using Constructor to pseudo rando for our given random value, for example
	//If it chooses red, it'll look for it.

	a.push_back(    Rectangle(colours[rand() % 5], rand() % 10, rand() % 10)  );   

	}


	cout << "size" << a.size() << endl;  //Will show us we have one rectangle object.


	for (int i = 0; i < 10; i++) {  //Creating loop that will print values.
		a[i].print();
	}


	//Linear Search:


	//For colour
	string target;

	cout << "Enter a colour: ";
	getline(cin, target);




	for (int i = 0; i < a.size(); i++) {  //Creating our linear search.
		if (a[i].colour == "red") {        //We're using the random colour above to see how many equal red
			a[i].print();
		}



	}




	//IF we wanted to find all widths above 1 instead!!
	// 
	//for (int i = 0; i < a.size(); i++) {  //Creating our linear search.
	//if (a[i].w > 1) {        //We're using the random colour above to see how many equal red
	//	a[i].print();
	//}

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
