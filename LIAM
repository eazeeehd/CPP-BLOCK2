#include "stdafx.h"
#include <iostream>
using namespace std;

void array_values(double array_in[], int elements_in);
void sort(double array_in[], int elements_in);

// Main method
void array_values(double array_in[], int elements_in)
{
	double calcTimes[] = {21.23, 23.45, 23.71, 22.22, 24.12, 21.23, 21.23, 21.45};
	int no_of_elements = 0;
	//setting the values of the array and elements of the array
	int size_array = sizeof(calcTimes);
	int size_value = sizeof(calcTimes[0]);
	//finds and displays the number of values within the array
	no_of_elements = size_array / size_value;
	cout << "There is " << no_of_elements << " Times!" << endl;

	sort(calcTimes, no_of_elements);
}

void sort(double array_in[], int elements_in)
{
	// Loop through the array
	cout << "Unsorted List" << endl;
	for (int count = 0; count < elements_in; count++)
	{
		cout << array_in[count] << endl;
	}

	cout << "\n" << endl;

	//algorithm
	//Loop for all elements in array
	// Loop for second element to array_size – counter in first loop
	// compare and swap if necessary (if)
	// temp = element 1
	// Element1 = this element+1
	// This element+1 = temp
	// End if
	// End loop
	//End loop

	double time = 0.0;
	for (int i = 0; i < elements_in; i++)
	{
		for (int j = 0; j < elements_in; j++)
		{
			if (array_in[j - 1] > array_in[j])
			{
				time = array_in[j - 1];
				array_in[j - 1] = array_in[j];
				array_in[j] = time;
			}
		}
	}

	cout << "Sorted!" << endl;
	
	for (int count2 = 0; count2 < elements_in; count2++)
	{
		cout << array_in[count2] << endl;
	}
	
	array_values(array_in, elements_in);
}
