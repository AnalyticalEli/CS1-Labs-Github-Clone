////Eli Ahmed
////Lab 8d Triangle Model With Objects
//
//
//#include<iostream>
//#include<cmath>
//#include<cstdlib> //For random seed
//#include<ctime>   //For random seed
//
//
////Triangle Inequality, the sides of two, must be
////greater than the sides of one!
//
//
//using namespace std;
//
//
//
////Creating Object Triangle
//
//struct Triangle {
//
//	double sideA, sideB, sideC;
//
//	string color;   //String color
//
//
//	//Methods aka Function within Structure.
//
//	void printArray();  //Doesn't explicitly state that the print function can't be a method!!
//
//	
//
//};
//
//
////C-type Function Prototype for the Boolean Function: (Where the sides of two must be greater than one side)
//
//bool checkInequality(double a, double b, double c);
//
//
//
//
//int main(void) {
//
//	srand(time(0));  //Seeding random time.
//
//
//	double a, b, c;  //Giving a, b, c data type to be used in for loop below.
//
//	//Array of size 50;
//
//	const int size = 50; //This populates 50 objects
//	Triangle triangle[size];
//
//
//	for (int i = 0; i < size; i++) { //Loop for array
//
//		do {
//
//			a = rand() % 10 + 1;
//			b = rand() % 10 + 1;
//			c = rand() % 10 + 1;  //Making array start at 1.
//
//		} while (checkInequality(a, b, c));
//
//
//
//	}
//
//
//	for (int i = 0; i < size; i++) {  //Loop for printArray
//
//
//
//
//	}
//
//	printArray(triangle,size);
//
//	return(0);
//
//}
//
//
//
//
////Function Implementation:
//
//bool checkInequality(double a, double b, double c) {
//
//	return((a + b > c) && (b + c > a) && (a + c > b));
//
//}
//
//void Triangle::printArray() {  //Because its reaching into Structure no need in this case for outside
//								//variables
//
//	cout << sideA << " " << sideB << " " << sideC << endl;
//
//	cout << color << endl;
//
//	}
//
//
//
//
//
//
//

