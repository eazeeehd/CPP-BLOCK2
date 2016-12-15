/*	Demonstration of an array of type string
*	Also demonstrates initialisation or hard coding of array of initial values
*	And demonstrates use of a simple search value
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string fruit[4];

void initialise();

void initialise()
{ // hard coding of the fruit array
	fruit[0] = "apples";
	fruit[1] = "pears";
	fruit[2] = "grapes";
	fruit[3] = "bananas";
}

void main()
{
	int search; // local variable to void main()

	initialise();		// calling the initialise method for filling the array

	cout<< "enter a search position between 0 and 4";
	cin>> search;		// user input for search position

	cout<< "The fruit you are looking for is " << fruit[search] << endl;
}
