//Sorting Notes
//Big O Notation is a method of measuring efficiency.

//O(n) is typically the best, where 0(2^x) amd 0(n^2) are typically the worst.

//Below is Bubble sorting (easy, but inefficent).


#include<iostream>
#include<ctime>
#include<cstdlib>


int main(void) {

    srand(time(0));


    const int size = 100;
    int a[size];

    for (int i = 0; i < size; i++) {

        a[i] = rand();


    }

    printArray(a, size);


    bubbleSort(a, size);


    return(0);

}






using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

// Driver program to test above functions
int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}

