//Eli Ahmed
//9c Linear Line Model with Vectors			(Code is Extensible, change the x value at will)

#include<iostream>
#include<vector>   //For vector

using namespace std;

//Creating the stucture aka Object Line

struct Line {


	double x, m, b;


	//Constructor Prototype:


	Line(void);    //Default Constructor Prototype. Aka our x,m,b initializer


	Line(double slope, double yIntercept);   //Our Slope and yintercept definer constructor.



	//Methods Prototypes


	double evaluateFunct(double xVal);


	void print(void);

};




int main(void) {

	//Creating 5 Objects    (//Line a, b, c, d, e; //5 line objects  HARD CODING WAY)

	vector<Line> lines;    //BETTER WAY, as we're using the lines to store the 5 objects


	lines.push_back(Line(2.0, 3.3));   //First Line Object with Vector which stores our first values!!

	lines.push_back(Line(2.33, 2.05));	//Second Line Object with Vector

	lines.push_back(Line(3.44, 4.33));

	lines.push_back(Line(6.42, 4.55));	//Fourth Line Object with Vector

	lines.push_back(Line(4.54, 6.99));    //Fifth Line Object with Vector



	//Printing out the Line Objects to Output.

	cout << "Number of lines: " << lines.size() << endl;  //Printing out the line with the values


	//For loop for inputting

	for (int i = 0; i < lines.size(); i++) {  //Where evaluate is the name of the solution method.


		lines[i].print();  //Using our print method function to print each of the values


		cout << "\tWhen x = 5, the y-value is " << lines[i].evaluateFunct(5) << endl;  //Inputs 5 for x!

	}

	return(0);
}



//Constructor Implementation:

Line::Line(void) {

	m = 0;
	b = 0;

}

Line::Line(double slope, double yIntercept) {

	m = slope;
	b = yIntercept;

}




//Methods Implementation
double Line::evaluateFunct(double xVal) {

	return(m * xVal + b);

}



void Line::print(void) {  //Prints out the function altogether above (y = mx + b)


	cout << " y " << " = " << m << " x " << " + " << b;

}