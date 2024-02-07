//Inefficient Rectangle

#include<iostream>
#include<string>
#include<vector>
#include<cstdlib> //srand
#include<ctime> //time
#include<iomanip>
using namespace std;

class Rectangle {
private:
    double l, w;
    string units;
public:
    //constructors called only once on instantiation
    Rectangle(void);
    Rectangle(string argU);
    Rectangle(double argW);
    Rectangle(double argL, double argW);
    Rectangle(double argL, double argW, string argU);

    //accessor methods (KEEP THEM SIMPLE)
    double getLength(void);
    double getWidth(void);
    string getUnits(void);
    void setLength(double arg);
    void setWidth(double arg);
    void setUnits(string arg);

    //utility methods
    void display(void);
    double area(void);
    double perimeter(void);
    bool isSquare(void);
};

void printVector(vector<Rectangle>& argVec);

int main(void) {
    srand(time(0));

    vector<Rectangle> a;  //Rectangle Vector
    string units[8] = { "ft","in","cm","m","yd","mm","mi","km" };
    double randL, randW;
    string randU;
    int numRectangles = 10; //get from the user at some point

    for (int i = 0; i < numRectangles; i++) {
        randL = rand() % 10 + 1.0 * rand() / RAND_MAX;
        randW = rand() % 10 + 1.0 * rand() / RAND_MAX;
        randU = units[rand() % 8];

        a.push_back(Rectangle(randL, randW, randU));
    }

    printVector(a);




    return 0;
}

//regular c-type function
void printVector(vector<Rectangle>& argVec) {
    cout << fixed << setprecision(2);
    for (int i = 0; i < argVec.size(); i++) {
        argVec[i].display();
        cout << "Area: " << argVec[i].area() << " " << argVec[i].getUnits() << " squared" << endl;
    }
}

//constructor implementations
Rectangle::Rectangle(void) {
    setWidth(0);
    setLength(0);
    setUnits("cm");
}
Rectangle::Rectangle(string argU) {
    setWidth(0);
    setLength(0);
    setUnits(argU);
}
Rectangle::Rectangle(double argW) {
    setWidth(argW);
    setLength(0);
    setUnits("mm");
}
Rectangle::Rectangle(double argL, double argW) {
    setWidth(argW);
    setLength(argL);
    setUnits("cm");
}
Rectangle::Rectangle(double argL, double argW, string argU) {
    setWidth(argW);
    setLength(argL);
    setUnits(argU);
}


//implementations
double Rectangle::getLength(void) {
    return l;
}
double Rectangle::getWidth(void) {
    return w;
}
string Rectangle::getUnits(void) {
    return units;
}
void Rectangle::setLength(double arg) {
    //do some data validation
    if (arg < 0) {
        arg = -1 * arg;
    }

    l = arg;  //sets length here!@!

}
void Rectangle::setWidth(double arg) {
    if (arg < 0) {
        arg = -1 * arg;
    }
    w = arg;
}
void Rectangle::setUnits(string arg) {
    units = arg;
}
void Rectangle::display(void) {
    // make a habit of accessing private data via accessor methods
    cout << "\nLength: " << getLength() << " ";
    cout << "Width: " << getWidth() << " " << getUnits() << endl;
}
double Rectangle::area(void) {
    //good programming practice to indirectly access private data
    return(getLength() * getWidth());
}
double Rectangle::perimeter(void) {
    return(2 * getLength() + 2 * getWidth());
}
bool Rectangle::isSquare(void) {
    bool answer = false;
    if (getLength() == getWidth())
        answer = true;

    return(answer);
}