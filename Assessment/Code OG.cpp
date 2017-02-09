// assessment1.cpp : Defines the entry point for the console application.
//
//This program is tasked with finding the maximum value of an array, it will also find
the size of the array and an element within that array
#include "stdafx.h"
#include <iostream>
using namespace std;
// global array of numbers - no size to be calculated
int storSpace[]={232,241,324,216,221,298,334,212,235,324,264,141};
int no_of_elements = 0;
// declaration of methods used within the program
void array_values();
void display_array();
// this is the main method
int _tmain(int argc, _TCHAR* argv[])
{
// this will clear the screen before use to make reading easier
system("cls");
// calling each of the methods that will be used
array_values();
display_array();
return 0;
}
void array_values()
{
// this will set the values of the array and element of the array
int size_array = sizeof(storSpace);
int size_value = sizeof(storSpace[0]);
// this sets the variable "maximum" to the first value in the array
int totalmem = 0;
int average = 0;
// this section displays both the array value and the single element value
cout << "The size of the array is " << size_array << endl;
cout << "The size of a value in the array is " << size_value << endl;
// seeks out and displays the number of values within the array
no_of_elements = size_array / size_value;
cout << "The number of elements is " << no_of_elements << endl;
// Loop through the array
for(int count = 0; count < no_of_elements; count++)
{
totalmem = totalmem + storSpace[count];
}
// calculates the memory
average = totalmem / no_of_elements;
//This section will display the total size of the array in megabytes
cout << "The size of the Array is " << totalmem << "MB" << endl;
//This section will display the average file size of all the files
cout << "The average size of the files is " << average << "MB" << endl;
}
void display_array()
{
// this section loops back round the array displaying each of the values
for(int count = 0; count<no_of_elements; count++)
{
cout << storSpace[count] << endl;
}
}
