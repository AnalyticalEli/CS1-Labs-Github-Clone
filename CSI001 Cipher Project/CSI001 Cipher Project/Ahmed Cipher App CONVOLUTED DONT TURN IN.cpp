////Eli Ahmed
////Cipher Project Rot13 Using ASCII values.
// 
// 
// 
// //Eli Ahmed
//Cipher Project Rot13 Using ASCII values.

//
//#include<iostream>  
//#include<string>  //The cipher intakes string out puts value 
//#include<vector>  //Might use a vector because of its ability to change size easily
//
//
//using namespace std;
//
//
//class Cipher {
//
//private:    //All these values are hidden from user like REAL cipher
//
//	string cipherCode;
//
//
//	//Method Prototype for the Rot13  (Private)
//
//	void RotBound(char& argL);   //Encryption Method ROT13
//
//
//
//public:   //Making this public (meaning can be altered) 
//
//
//	//Constructor Prototype
//
//	Cipher(string argL, char argEncrypt);
//
//
//	//Method Prototype (For private Values we need 2 methods, a set and get)
//
//
//	string getCipherCode(void);
//	void setCipherCode(string argEncrypt);
//
//
//	//Now our 2 Utility (Work) Methods
//
//	void displayEncryptedString();
//
//};
//
////C-type Boolean Function
//
//
//
//
//int main(void) {
//
//	string userResponse;   //Data type setting for password.
//
//	vector<Cipher> ciphers;    //This is what we're going to use to let user enter
//	//unlimited values.
//
//
////cout << "Welcome order of the Redden, enter our secret password. " << endl;
////cin >> userResponse;       //Password is superfulous ai (not case sensitive) 
//
////if (userResponse == "superfulous ai" || userResponse == "Supefulous ai") {
////
////
////}
////	
////else {
//
////	cout << "Incorrect Password, begone with you" << endl;
////}
//
////cin.ignore();    //SO we can reuse userResponse variable
//
//
//	cout << "Greetings Reddener, we understand your message(s) are upmost importance, enter it: " << endl;
//	cin >> userResponse;   //Can reuse since above has already been used.
//
//
//	//Cipher cipher(userResponse)
//
//
//	//This bypassed the weakness of case sensitivity IF I convert everything 
//	//to tolower code ALWAYS WORKS!:)
//
//
//	for (int i = 0; i < ciphers.size(); i++) {
//
//		//userResponse[i] = tolower(userResponse[i]);
//
//		cout << "Greetings Reddener, we understand your message(s) are upmost importance, enter it: " << endl;
//		cin >> userResponse;   //Can reuse since above has already been used.
//
//
//		ciphers.push_back(Cipher("", Cat))
//
//
//
//			ciphers[i].displayEncryptedString();
//
//		string cipherEncrypted = cipher[i].
//
//
//
//	}
//
//
//
//
//	cout << "May your journeys be safe and F's be few. Until then adieu. " << endl;
//
//	return(0);
//
//}
//
//
////Special Boolean Implementation:
//
////bool runAgain(void) {
////	char userResponse;
////
////	cout << "\nWould you like to run again (y or n): ";
////	cin >> userResponse;
////	cin.ignore(); // to clean up the input stream
////
////	if (userResponse = "superfulous ai");
////		return(false);
////
////	return(true);
////}
//
//
////Constructor for Cypher 
//
//
//Cipher::Cipher(string argL, char argEncrypt) {
//
//
//	setCipherCode(argEncrypt);             //Indirect Access (Better & Safer) 
//
//	RotBounds(arg);      //Because ROT BOUNDS HAS (string, int) 
//
//}
//
//
//
////Acessor Methods 
//
//
//string Cipher::getCipherCode(void) {
//
//	return(cipherCode);
//
//
//}
//
//
//
//void Cipher::setCipherCode(string argEncrypt) {   //Gets values set above.
//
//	cipherCode = argEncrypt;
//
//}
//
//
//
//
//
//
////Utility Methods or Calculations that make it happen
//
//
//void Cipher::displayEncryptedString() {
//
//
//	cout << "Encrypted Message: " << getCipherCode() << endl;
//
//
//}
//
//
//
//void Cipher::RotBounds(char& argL) {   //Making Lower bound Encryption
//
//	for (int i = 0; i < argL.size(); i++) {
//
//		char rot = argL[i];   //Using the idea of ASCII Values
//
//		if (rot >= 'a' && rot <= 'n') {  //Meaning a-z 
//
//			rot = rot + 13;
//
//
//
//		}
//		else if (rot >= 'n' && rot <= 'z') {
//			rot = rot - 13;
//
//		}
//
//	}
//
//}
//
//
//




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

// 
// 
// 
//
//
//#include<iostream>  
//#include<string>  //The cipher intakes string out puts value 
//#include<vector>  //Might use a vector because of its ability to change size easily
//
//
//using namespace std;
//
//
//class Cipher {
//
//private:    //All these values are hidden from user like REAL cipher
//
//	string cipherCode;
//
//
//	//Method Prototype for the Rot13  (Private)
//
//	void RotBounds(string argL, int shift);   //Encryption Method ROT13
//
//
//
//public:   //Making this public (meaning can be altered) 
//
//
//	//Constructor Prototype
//
//	Cipher(string argL, int shift, string argEncrypt);
//
//
//	//Method Prototype (For private Values we need 2 methods, a set and get)
//
//
//	string getCipherCode(void);
//	void setCipherCode(string argEncrypt);
//
//
//	//Now our 2 Utility (Work) Methods
//
//	void displayEncryptedString();
//
//};
//
//
//
//int main(void) {
//
//	string userResponse;   //Data type setting for password.
//
//	vector<Cipher> ciphers;    //This is what we're going to use to let user enter
//	//unlimited values.
//
//
//	do {    //Might want to do boolean function since multiple.
//
//		cout << "Welcome order of the Redden, enter our secret password. " << endl;
//		cin >> userResponse;       //Password is superfulous ai (not case sensitive) 
//
//
//	} while (userResponse != "Superfulous Ai" || userResponse != "superfulous ai");
//
//
//
//
//
//	cout << "Greetings Reddener, we understand your message(s) are upmost importance, enter it: " << endl;
//	getline(cin, ;   //Can reuse since above has already been used.
//
//
//	//This bypassed the weakness of case sensitivity IF I convert everything 
//	//to tolower code ALWAYS WORKS!:)
//
//
//	for (int i = 0; i < userResponse.size(); i++) {
//
//		userResponse[i] = tolower(userResponse[i]);
//
//	}
//
//
//
//
//
//	cout << "May your journeys be safe and F's be few. Until then adieu. " << endl;
//
//	return(0);
//
//}
//
//
//
//
//
//
//
////Constructor for Cypher 
//
//
//Cipher::Cipher(string argL, int shift, string argEncrypt) {
//
//
//	setCipherCode(argEncrypt);             //Indirect Access (Better & Safer) 
//
//	RotBounds(cipherCode, shift);      //Because ROT BOUNDS HAS (string, int) 
//
//}
//
//
//
////Acessor Methods 
//
//
//string Cipher::getCipherCode(void) {
//
//	return(cipherCode);
//
//
//}
//
//
//
//void Cipher::setCipherCode(string argEncrypt) {   //Gets values set above.
//
//	cipherCode = argEncrypt;
//
//}
//
//
//
////Utility Methods or Calculations that make it happen
//
//
//void Cipher::RotBounds(string argL, int shift) {   //Making Lower bound Encryption
//
//	for (int i = 0; i < argL.size(); i++) {
//
//		char shift = argL[i];   //Using the idea of ASCII Values
//
//		if (shift >= 'a' && shift <= 'z') {  //Meaning a-z 
//
//			//Lower case
//
//			argL[i] = ((shift - 'a' + 13) % 26 + 'a');  //Explaination for how this works is below 
//
//
//
//		}
//
//	}
//
//}
//
//
//void Cipher::displayEncryptedString() {
//
//
//	cout << "Encrypted Message: " << RotBounds() << endl;
//
//	
//}
//
//
//
////Cipher ENCRYPTER EXPLAINATION
//
////HOW my cipher wheel above if statement works. SO start with the rather extreme example
////of this to demonstrate it. Firstly let's start with 'a' The lower ASCII value of a = 97
//// because the loop accumulates, yet starts with zero the equation is simple
//// 
//// 
////Another extreme example is z, however principles apply to it. The accumulator must run 26 times
////to go from a-z (26 letters in the alphabet), 
//
//
////THIS PORTION IS REDACTED THOUGHT OF A SIMPLER SOLUTION :)
////For the uppercase the same logic still applies, but this time with lower ASCII values
////Because upper ASCII values are lower (value-wise).
//
//
////The modulus operator is responsible for making sure these values stay within specific range
////Of values
//
////Whereas adding the 'a' brings the ascii value back to it's desired value for encryption.
////With it here being ROT13.
//
//
//
//
//
//
//void Cipher::upperRotBounds(string argU, int shiftLeft) {	//Making Upper bounds 
//
//
//
//}
//
//
//
