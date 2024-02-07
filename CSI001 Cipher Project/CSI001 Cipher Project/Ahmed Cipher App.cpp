//Eli Ahmed
//Cipher Project Rot13 Using ASCII values. (Fun Version)


#include<iostream>  
#include<string>  //The cipher intakes string out puts value 
#include<vector>  //Might use a vector because of its ability to change size easily


using namespace std;


class Cipher {

private:    //All these values are hidden from user like REAL cipher

	string cipherCode;


	//(Utility) Method Prototype for the Rot13  (Private)

	void RotBounds(void);   //Encryption Method ROT13
	


public:   //Making this public (meaning can be altered) 


	//Constructor Prototype

	Cipher(string argEncrypt);


	//Method Prototype (For private Values we need 2 methods, a set and get)


	string getCipherCode(void);
	void setCipherCode(string argEncrypt);


	//Now our 2 Utility (Work) Methods

	void displayEncryptedString();

};




int main(void) {

	char password;       //Data Type for setting password

	string userResponse;   //Data type setting userResponse for Cipher.

	vector<Cipher> ciphers;   //This is what we're going to use to let user enter
							  //unlimited values



	cout << "Welcome order of the Redden, enter our secret password. ";
	cin >> password;   

	while (true) {

		if (password == 'A' || password == 'i') {

			cout << "Access granted to Vahalla (AI) \n" << endl;

			break;
		}

		else {

			cout << "Go back to mathin' or something \n" << endl;
			
		}

	}
	

	cin.ignore();

	cout << "\nGreetings Reddener, we understand your message(s) are upmost importance, enter it: ";
	getline(cin, userResponse);   //Can reuse since above has already been used.


	//This bypassed the weakness of case sensitivity IF I convert everything 
	//to tolower code ALWAYS WORKS!:)


	for (int i = 0; i < userResponse.size(); i++) {  //Does by searching userResponse and converting.

		userResponse[i] = tolower(userResponse[i]);


	}


	ciphers.push_back(Cipher(userResponse));
						

	for (int i = 0; i < ciphers.size(); i++) {

		ciphers[i].displayEncryptedString();
	}



	 cout << "May your journeys be safe and F's be few. Until then adieu. " << endl;

    return(0);

}


//Constructor for Cypher 


Cipher::Cipher(string argEncrypt) {


	setCipherCode(argEncrypt);             //Indirect Access (Better & Safer) 

	RotBounds();                          

}



//Acessor Methods 


string Cipher::getCipherCode(void) {

	return(cipherCode);


}



void Cipher::setCipherCode(string argEncrypt) {   //Gets values set above.

	cipherCode = argEncrypt;

}






//Utility Methods or Calculations that make it happen


void Cipher::displayEncryptedString() {


	cout << "Encrypted Message: " << getCipherCode() << endl;

	


}



void Cipher::RotBounds() {   //Making Lower bound Encryption

	for (int i = 0; i < cipherCode.size(); i++) {   //Addressing is the only other alternative.

		char& rot = cipherCode[i];

		if (rot >= 'a' && rot <= 'm') {  //Meaning a-z 

			rot = rot + 13;

		} 
		else if(rot >= 'n' && rot <= 'z'){
			rot = rot - 13;

		}




	}

}







//do {    //Might want to do boolean function since multiple.
//
//	cout << "Welcome order of the Redden, enter our secret password. " << endl;
//	cin >> userResponse;       //Password is superfulous ai (not case sensitive) 
//
//
//	for (int i = 0; i < userResponse.size(); i++) {    //This makes it not case sensitive just like below!
//
//		userResponse[i] = tolower(userResponse[i]);
//	}
//
//
//} while (userResponse != "superfulous ai");
