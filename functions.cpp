#include "functions.h"
using namespace std;

//#1 from doc
int checkForInt(int array[]) {
    int number;
    int i;

    cout << "Enter the number to be found: ";
    cin >> number;

    //for loop going through array to find integer 
    const int sizeArr = 100;
    for (i = 0; i < sizeArr; i++) {
        if (array[i] == number) {
            cout << "Integer found at index " << i << endl << endl;
            return i;
        }
    }
    //if integer is not found
    cout << "Integer not found." << endl << endl;
}

//#2 from doc
void modAndReturn(int array[], int& size) {
    int i;
    int newInt;

    //try catch block to verify user input
    try {
        cout << "Choose which index to modify the value of: ";
        cin >> i;

        if (i >= size) {
          throw runtime_error("Invalid entry.");
            }
        
    }
    catch (runtime_error& excpt) {
        cout << excpt.what() << endl;
    }

    //assigns new variable with original integer from data.txt
    int originalInt = array[i];

    //general code
    cout << "What would you like to replace index " << i << " with? ";
    cin >> newInt;

    //assigns array index with new user chosen integer
    array[i] = newInt;

    cout << "The original integer at index " << i << " was " << originalInt << " and the new integer value at " << i << " is " << newInt << "." << endl << endl;

}

//#3 from doc
//use double pointer to pass array in, personal research from stack overflow and youtube
void addToArr(int** arr, int& size) {
    int newInt;
    int* newArray = new int[size + 1]; //add 1 to size to make room for new index/integer at the end


    //for loop filling new array with old array's data
    for (int i = 0; i < size; i++) {
        newArray[i] = (*arr)[i];
    }

    //try catch block to verify user input
    try {
        cout << "What integer would you like to add to the end: ";
        cin >> newInt;
        cout << endl;
        
    }
    
    catch (runtime_error& excpt) {
        cout << excpt.what() << endl;
    }

    newArray[size] = newInt;

    *arr = newArray;

    size++;

}

//#4 from doc
void replaceOrRemove(int** array, int& size) {
    int replace;
    string answer;

    //assigns new array with size -1 for removal case
    int* newArray = new int[size - 1];

    //general code
    cout << "Which index would you like to replace or remove ";
    cin >> replace;

    cout << "Would you like to replace " << replace << " with a 0 or remove it all together?" << endl << "Please answer with replace or remove. ";
    cin >> answer;

    if (answer == "replace") {
        (*array)[replace] = 0;
    }

    //special case for remove, need to change array size
    if (answer == "remove") {
        (*array)[replace] = 0;

        for (int i = replace; i < size - 1; i++) {
            (*array)[i] = (*array)[i + 1];
        }

        for (int i = 0; i < size - 1; i++) {
            newArray[i] = (*array)[i];
        }

        size--;
        *array = newArray;
    }
}
