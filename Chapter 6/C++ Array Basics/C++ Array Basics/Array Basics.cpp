////Eli Ahmed
//// Array Basics 
//
//#include <iostream>
//using namespace std;
//
////Function Prototypes
//bool runAgain(void);
//
//
//int main() {
//
//
//	double a[3]; //= {5,10,15}; //Each number in the squiggly brackets correpsonds to new element
//	a[0] = 5;
//	a[1] = 10;
//	a[2] = 15;  //This is the second way to do same as squiggly brackets above 
//
//
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Element  " << i << " = " << a[i] << endl;
//	}
//	
//
//	do {
//
//		cout << "Looped code goes here!" << endl;
//
//	} while (runAgain());
//
//	return(0);
//}
//
//// Function Implementation
//bool runAgain(void) {
//	char userResponse;
//
//	cout << "\nWould you like to run again (y or n): ";
//	cin >> userResponse;
//	cin.ignore(); // to clean up the input stream
//
//	if (userResponse == 'y' || userResponse == 'Y')
//		return(true);
//
//	return(false);
//}