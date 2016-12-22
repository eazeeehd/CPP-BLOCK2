#include "stdafx.h"
#include <iostream>

using namespace std;

// global array of numbers - no size to be calculated

int numbers[]={245,764,333,678,986,346,256,756,337};
int no_elements = 0;

void biggest();

void biggest()
{
	// code here
	//set max to first element

	int max = numbers[0];

	//loop for all elements 

	for(int count = 1; count < no_elements; count++)
	{
	//if element is greater than max 

		if(numbers[count] > max) 
		{
			//set max to this element value 
			max = numbers[count];
		}//end if 
	}// end loop

	// print the biggest outside loop 

	cout << "The largest number is " << max << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	

	// find out the total size of the array (a)
	int a = sizeof(numbers);

	cout << a << endl;

	// find out the size of a single element (b)
	int b = sizeof(numbers[0]);

	cout << b << endl;

	// calculate the number of elements (a/b)
	 no_elements = a/b;

	 cout <<  no_elements << endl;

	 for(int count = 0; count < no_elements; count++) 
	 {
		 cout << numbers[count] << endl; 
	 }

	 biggest();
	return 0;
}
