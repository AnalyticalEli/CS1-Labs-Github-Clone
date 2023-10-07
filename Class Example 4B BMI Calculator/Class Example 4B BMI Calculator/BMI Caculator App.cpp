//Eli Ahmed
//Lab BMI  (Note to self, keep function values consistent)

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function prototypes
double heightInches(double heightFt, double heightInc);
double BMI(double heightInches, double weight);

int main(void) {
    int userHeightFt, userWeight, userHeightInches;
    double bmi, h;

    cout << "Enter weight in pounds (lbs): ";
    cin >> userWeight;
    cout << "Enter height feet (ft): ";
    cin >> userHeightFt;
    cout << "Enter your height inches (in): ";
    cin >> userHeightInches;

    h = heightInches(userHeightFt, userHeightInches);

    bmi = BMI(h, userWeight);

    cout << fixed << setprecision(2);
    cout << "\nYour BMI reading is " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Normal" << endl;
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Overweight" << endl;
    }
    else {
        cout << "Obese" << endl;
    }

    cout << "Your BMI is: " << bmi << endl;
    return 0;
}

double heightInches(double heightFt, double heightInc) {
    return (12 * heightFt + heightInc);
}

double BMI(double heightInches, double weight) {
    return ((weight * 703) / pow(heightInches, 2));
}