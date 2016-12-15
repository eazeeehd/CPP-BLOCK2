// program to store grades and find average

#include "stdafx.h"
#include <iostream>
#include <iomanip> // used to display average to 2 decimal points

using namespace std;

const int MAX = 5; // set constant for size of array

int marks[MAX]; // sets up an interger array called marks[]. Size of array set to value of MAX constant

void get_marks();
void find_ave(int total_marks);
void print_ave(float ave);

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
	
}


