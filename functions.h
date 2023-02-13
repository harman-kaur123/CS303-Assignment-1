#pragma once
#include <string>
#include <iostream>


//check if a certain integer exists in the array 
int checkForInt(int array[]);
//pre: array from data.txt 
//post: displays if integer is found in array or not 

//can modify the value of an int when called w/ the index of the int in the arr & return the new value & old value back to the user 
void modAndReturn(int array[], int &size);
//pre: takes in array from data.txt and size of array predetermined from code 
//post: modifies value of index in array and displays new and old value 

//can add a new integer to the end of the array 
void addToArr(int** arr, int &size);
//pre: takes in array from data.txt and size of array predetermined from code
//post: adds integer to array and stores it 

//takes an index and replaces the value with 0 or removes the integer 
void replaceOrRemove(int** array, int& size);
//pre: takes in array from data.txtand size of array predetermined from code
//post: replaces or removes index chosen by user 