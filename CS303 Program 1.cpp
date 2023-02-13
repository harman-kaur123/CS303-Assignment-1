// Harman Kaur 
// CS303
// 2/13/2023


#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;

int main()
{
    //variable declaration
    ifstream inFS;

    int size = 100;
    int* myArray = new int[size];

  
    //open data.txt and load data on to array 
    inFS.open("data.txt");
    if (!inFS.is_open()) {
        cout << "Could not open file data.txt" << endl;
        return 1;
    }

    if (inFS.is_open()) {

        for (int i = 0; i < 100; i++) {
            inFS >> myArray[i];
        }
        inFS.close();
    }

    //calling functions, passing in required values
    checkForInt(myArray);

    modAndReturn(myArray, size); 

    addToArr(&myArray, size);

    replaceOrRemove(&myArray, size);

    cout << endl << endl;

    //displays array based on code above
    for (int i = 0; i < size; i++) {
        cout << " " << myArray[i];
    }
}

