//Eli Ahmed
//Exam #2 Computer Inventory


#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;


class Computer {      //Creating our class for Computer 

private:       //Making all these values (properties) private

	string brand, processor;
	double ram, hardDriveStorage, wholeSalePrice;
	int inStock;  //Because computer stock is binary as it MUST be in whole numbers


	void setPriceWholesale(double argWholesale);  //Because user CANNOT see Wholesale Price
												  //It goes here in private away from them.


public:    //Making this public (meaning can be altered/seen)

	//Constructor Prototype

	Computer(string argName, string argProcessor, double argRam, double argDriveStorage,
		double argWholesale, int argStock);


//Method Prototype (For private Values we need 2 methods, a set and get)


	string getBrand(void);			//2 Accessor Methods for each Property.
	void setBrand(string argName);

	string getProcessor(void);		
	void setProcessor(string argProcessor);

	double getRam(void);
	void setRam(double argRam);

	double getHardDriveStorage(void);
	void sethardDriveStorage(double argDriveStorage);

	double getPriceWholesale(void);       //2nd Accessor method for WholeSale Price is in
										  //private because customer isn't allowed to see it.

	double getInStock(void);
	void setInStock(int argStock);

	//Now our 2 Utility (Work) Methods

	void displayProperties();      //This displays properties to user

	double retailPrice(double markupPercent);  //This gives us retail price with markup 


};



int main(void) {

	//Vector for Computers

	cout << "Welcome to Snazzy(Eli) Corp, a place meant to sooth your price markup worries.\n " << endl; 


	vector<Computer> computers;  //Our computer vector object for our userValues.


	char userResponse;    //For our infinite do while loop


	//Giving data types for getProperties (proper way NEVER put in loop)

	string brand, processor;
	double ram, hardDriveStorage, wholeSalePrice;
	int inStock;  //Again because it's binary, either have or don't




	do {

		//User Interface

		cout << "\nEnter the computer brand: ";
		cin >> brand;

		cout << "Enter computer processor: ";
		cin >> processor;

		cout << "Enter the Ram size (GB): ";
		cin >> ram;

		cout << "Enter the Hard Drive Storage (GB): ";
		cin >> hardDriveStorage;

		cout << "Enter the Wholesale Price ($): ";
		cin >> wholeSalePrice;

		cout << "Enter total number in stock: ";
		cin >> inStock;


		computers.push_back(Computer(brand, processor, ram, hardDriveStorage, wholeSalePrice, inStock));

		//Above is vector storing all user values, and adding our methods to it.

		cout << "Do you want to enter another computer? (y or n): ";
		cin >> userResponse;

	} while (userResponse == 'Y' || userResponse == 'y');

	//Instiating data type in main


	//Markup Percentage User Option (Displays Markup at top of Results) 

	double markupPercent;
	cout << "\nEnter store markup percentage: (%) ";
	cin >> markupPercent;


	for (int i = 0; i < computers.size(); i++) {

		computers[i].displayProperties();

		double price = computers[i].retailPrice(markupPercent);

		//Setting Retail WholeSale Price to setPrecision 2 because prices reflect that.

		cout << "Retail Price: $" << fixed << setprecision(2) << price << endl;

	}


	return(0);
}



//Constructor Implementation for Computers

Computer::Computer(string argName, string argProcessor, double argRam, double argDriveStorage,
	double argWholesale, int argStock) {

	setBrand(argName);			//Indirect Access (Better & Safer)
	setProcessor(argProcessor);
	setRam(argRam);
	sethardDriveStorage(argDriveStorage);
	setPriceWholesale(argWholesale);
	setInStock(argStock);

}



//Access Methods for Computer Structure:  (Allow us to "access" private data (properties))

//Brands
string Computer::getBrand(void) {

	return(brand);

}

void Computer::setBrand(string argName) {

	brand = argName;


}

//Processors
string Computer::getProcessor(void) {

	return(processor);   

}
void Computer::setProcessor(string argProcessor) {

	processor = argProcessor;    

}

//Ram
double Computer::getRam(void) {

	return(ram);

}
void Computer::setRam(double argRam) {

	ram = argRam;

}


//HardDrives
double Computer::getHardDriveStorage(void) {

	return(hardDriveStorage);

}
void Computer::sethardDriveStorage(double argDriveStorage) {

	hardDriveStorage = argDriveStorage;
}


//WholeSale aka Retail Price
double Computer::getPriceWholesale(void) {

	return(wholeSalePrice);
}
void Computer::setPriceWholesale(double argWholesale) {

	wholeSalePrice = argWholesale;
}

//In Stock Numbers
double Computer::getInStock(void) {

	return(inStock);


}
void Computer::setInStock(int argStock) {

	inStock = argStock;

}


//Utility Methods (2)

void Computer::displayProperties() {   //Prints all Computer Properties to Screen


	cout << "\nBrand: " << getBrand() << endl;

	cout << "Processor: " << getProcessor() << endl;

	cout << "Ram: " << getRam() << endl;

	cout << "Hard Drive Storage: " << getHardDriveStorage() << endl;

	cout << "In Stock: " << getInStock() << endl;

}



double Computer::retailPrice(double markupPercent) {   //User will give value as percentage 
													   //meaning that our method does calculation

	return(wholeSalePrice * (1 + markupPercent / 100));

}