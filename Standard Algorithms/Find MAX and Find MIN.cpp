// MAX IS A CONSTANT VARIABLE AT THE TOP//
//______________________________________//

#include "stdafx.h"
#include <iostream>
#include <iomanip> // used to display average to 2 decimal points

using namespace std;

const int MAX = 5; // set constant for size of array

int marks[MAX]; // sets up an interger array called marks[]. Size of array set to value of MAX constant

void get_marks();
void find_ave(int total_marks);
void print_ave(float ave);
void topofclass();
void bottom();

void get_marks()
{
	/* loop MAX times
	* prompt for mark
	* add to total
	* loop end
	* find average
	*/
	
	int total = 0;

	for (int count = 0; count < MAX; count++)
	{
		cout << "Enter mark for student " <<count+1 << " " ;
		cin >> marks[count];
		total = total + marks[count];
	}// end for loop

	find_ave(total);
}// end method

void find_ave(int total_marks)
{
	float average;
	average = total_marks / MAX;
	print_ave(average);
}

void print_ave(float ave)
{
	cout << "The average mark is " << fixed << setprecision(2) << ave << endl;
}

void main()
{
	get_marks();
	topofclass();
	bottom();
}

void find_max()
{
	/*
	1.	 set maximum to first array element
	2.	 loop for all the other elements in the array 
	3.	if this one is greater than maximum 
		then
	5.	set maximum to this one 
		end if
		loopend
	6.	 print maximum
	*/
	int maximum = marks[0];
	for(int count = 1; count < MAX; count++)
	{
		if(marks[count] > maximum)
			maximum = marks[count];
	}
	cout << "The top of class is: " << maximum << endl;
}

void find_min()
{
	/*
		1.	 set minimum to first array element
		2.	 loop for all the other elements in the array 
		3. if numbers[count] is less than minimum 
		     then
		4.	 numbers[count] = minimum 
		   end if
				loopend 
		5.	 print minimum
	*/
	int minimum = marks[0];
	for(int count = 1; count < MAX; count++)
	{
		if(marks[count] < minimum)
			minimum = marks[count];
	}
	cout << "The bottom of class is: " << minimum << endl;
}
