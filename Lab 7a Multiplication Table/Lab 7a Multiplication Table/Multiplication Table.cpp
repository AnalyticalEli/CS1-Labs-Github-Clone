//Eli Ahmed
//Multiplication Table


#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

void printMatrix(int arg[][11], const int argR, const int argC);


int main(void) {
    

    
    const int rowSize = 11;
    const int colSize = 11;
    int multTable[rowSize][colSize];

    for (int i = 0; i < rowSize; i++) {  //for our rows
        for (int j = 0; j < colSize; j++) {   //for our colums
             

            if (i == 0)            //Making our values on the left populated
                multTable[i][j] = j;

            else if (j == 0)         //Making our columns equal their desired value
                multTable[i][j] = i;


            else          //Getting the regular part of the mult table
                multTable[i][j] = i * j;
        }

    }


    printMatrix(multTable, rowSize, colSize);  //Acting weird because the matrix


    return(0);
}

void printMatrix(int arg[][11], const int argR, const int argC) {
    for (int i = 0; i < argR; i++) {
        for (int j = 0; j < argC; j++) {
            if (j == 0 && i == 0)    //Changing our first 0 to x!
                cout << "X\t";       
            else
            cout << arg[i][j] << "\t";
        }
        cout << endl;
    }
}

