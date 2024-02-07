////Eli Ahmed
////Objected Oriented Programming with Structures Part 3
//
////Making our own data types using Objects with Circles! (LESS EFFICIENT)
//
//
////Properties refer to intrisic values, fast, strong, tall, 
////Functions refer to calculations, like circumference, area, volume.
//
//
//#include<iostream>
//#include<string>
//
//
//using namespace std;
//
////Making our data type structure (Creating a Circle)  This is not function object, this is template
//
////Structure Ususally goes in HEADER FILES on the right, and outside MAIN.
//
//struct Circle {
//
//	double radius;
//
//	string fillColour;
//
//	string strokeColour;
//
//	double xCoordinate;
//
//	double ycoordinate;
//
//};
//
//
////C-type function prototype of our Circle DataType above
//
//void printCircle(Circle& arg);  //Using address (&) to save space
//
//
//int main(void) {
//
//	Circle x;				//This is a circle object 
//
//
//	//Setting properties of object
//
//	x.fillColour = "Red";
//	x.radius = 5.6;
//	x.strokeColour = "Black";
//	x.xCoordinate = 2.5;
//	x.ycoordinate = 7.8;
//
//
//
//	//Print outs of the information
//
//	cout << x.radius << endl;
//	cout << x.fillColour << endl;
//	/*cout << x.strokeColour << endl;
//	cout << x.xCoordinate << endl;
//	cout << x.ycoordinate << endl;*/
//
//
//	//Print outs of the information
//
//	
//
//	//Function call:
//
//	printCircle(x);   //Don't need to change here with & just in function!
//
//
//
//
//	return(0);
//}
//
//
//
////Function Implementation:
//
//void printCircle(Circle& arg) {
//
//	cout << "Circle Colour: " << arg.fillColour << endl;   //Giving us fill colour
//
//	cout << "Circle Stroke: " << arg.strokeColour << endl;
//
//	cout << "Circle Colour: " << arg.radius << endl;
//
//	cout << "Circle : (" << arg.xCoordinate <<  "," << arg.ycoordinate << ")" << endl;
//}
//
//
//
//
//
//
//
//
//
//
