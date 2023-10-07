//Eli Ahmed
//Notes for 4A

#include <iostream>
#include<iomanip>


using namespace std;

//c type function prototype

int f(int x, double y, char z);

int main(void) {

	cout << f(5, 3.4, 'a') << endl;

	return 0 ;

}




int f(int x, double y, char z) {

	return(z * 7);

}

