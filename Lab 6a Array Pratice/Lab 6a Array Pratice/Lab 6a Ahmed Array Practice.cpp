//Eli Ahmed
//Lab 6a Array Practice (C arrays are stuck)

#include <iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

void printArray(int arr[], int arrSize); //The empty arr[] allows us to chose size

void printDBLArray(double arr[], int arrSize);

int main() {


	//Prompt write 3 loop statements  

	// 1)
	const int size = 10;   //This gives us an array from 0 to 7
	int a[size];

	for (int i = 0; i < size; i++) {      //Will stop at 7
		a[i] = 7;				    
	}
	printArray(a, size);



	cout << "\n************\n" << endl; //Did this seperation to keep code organized.

	for (int i = 0; i < size; i++) {     //Getting(3-48 random number range_
		a[i] = 3 + rand() % 48;
	}
	printArray(a, size);


	cout << "\n************\n" << endl;


	for (int i = 0; i < size; i++) {  //We're getting (2,4,6,8....)
		a[i] = 2 * i + 2;
	}
	printArray(a, size);


	cout << "\n************\n" << endl;



	//This is Practice with B function now

	const int n = 100;
	double b[n]; 
	double sum = 0.0;
	

	for (int i = 0; i < n; i++) {  //Getting (0.5, 1.0, 1.5, 2.0, 2.5....)
		b[i] = 0.5 * i;

	}

	cout << "\n************\n" << endl;


	for (int i = 0; i < n; i++) {  //Getting (0.5, 1.0, 1.5, 2.0, 2.5....)
		b[i] = 0.5 * i;

	}
	printDBLArray(b, n);


	cout << "\n Backwards! \n" << endl;


	for (int i = n - 1; i >= 0; i--) { //Because we're going backward i-- = i - 1
		cout << "Element " << i << " = " << setprecision(2) <<  b[i] << endl;
	}


	cout << "\n**************\n" << endl;

	sum = 0.0;

	for (int i = 0; i < n; i++) {
		sum = sum + b[i];

	}
	cout << "Sum = " << setprecision(4) << sum << endl;



	//displayArrayContents(lengths, 3);

	return (0);

} 

//Function implementation

void printArray(int arr[], int arrSize) {

	for (int i = 0; i < arrSize; i++) {
		cout << "Element " << i << " = " << arr[i] << endl;
	}
}




void printDBLArray(double arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		cout << "Element " << i << " = " << arr[i] << endl;
	}
}