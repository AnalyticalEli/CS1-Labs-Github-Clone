//Eli Ahmed
//Lab 7a Strings and Arrays with Pointers/Addressing
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//Using the string address to save space
//
//void processString(const string& userString) {  //IUsing the address
//    cout << "Printing string with dashes: ";
//    for (size_t i = 0; i < userString.length(); i++) {
//        cout << userString[i] << '-';
//    }
//    cout << endl;
//
//    cout << "Printing string backwards with dashes: ";
//    for (int i = userString.length() - 1; i >= 0; i--) {
//        cout << userString[i] << '-';
//    }
//    cout << endl;
//}
//
//void processStringArray(const string userStrings[], int n) {
//    cout << "Printing strings with asterisks:" << endl;
//    for (int i = 0; i < n; i++) {
//        for (char c : userStrings[i]) {
//            cout << c << '*';
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    const int n = 5;
//    string userStrings[n];
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter string " << i + 1 << ": ";
//        getline(cin, userStrings[i]);
//    }
//
//    for (const string& str : userStrings) {
//        processString(str);
//    }
//
//    return 0;
//}