//Peter Kemley
#include "stdafx.h"
#include <iostream>
using namespace std;
// global array of numbers
int storSpace[]={232,241,324,216,221,298,334,212,235,324,264,141};
int no_of_elements = 0;
// declaring the methods
void array_values();
void display_array();
// Main method
int _tmain(int argc, _TCHAR* argv[])
{
// this is a basic command to clear the gibberish from the screen before the
programs output
system("cls");
//Calling each of the methods that will be used within the program
array_values();
display_array();
return 0;
}
void array_values()
{
//setting the values of the array and elements of the array
int size_array = sizeof(storSpace);
int size_value = sizeof(storSpace[0]);
//initialising the variables
int total_memory = 0;
int average = 0;
//Displays both the array value and the element value
cout << "The size of the array is: " << size_array << endl;
cout << "The size of a value in the array is: " << size_value << endl;
//finds and displays the number of values within the array
no_of_elements = size_array / size_value;
cout << "The number of elements is " << no_of_elements << endl;
// Loop through the array
for(int count = 0; count < no_of_elements; count++)
{
total_memory = total_memory + storSpace[count];
}
// calculates the average
average = total_memory / no_of_elements;
//Displaying the total size of the array
cout << "The size of the Array is " << total_memory << " Bytes" << endl;
//Average file size of all the files
cout << "The average size of the files is " << average << " Bytes" << endl;
}
void display_array()
{
// this section loops back round the array displaying each of the values
for(int count = 0; count < no_of_elements; count++)
{
cout << storSpace[count] << endl;
}
}
