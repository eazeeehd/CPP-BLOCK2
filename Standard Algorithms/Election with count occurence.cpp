// program to store grades and find average
//

#include "stdafx.h"
#include <iostream>
#include <iomanip> // used to display average to 2 decimal points
#include <string>

using namespace std;

const int MAX = 5; // set constant for size of array

int votes[MAX]; // sets up an interger array called votes[]. Size of array set to value of MAX constant
string candidates[MAX] = {"Sarah", "David", "Imran", "Uzma", "Chris"};
int candidates_elements = 0;

void get_votes();
void mostvotes();
void above60();

void get_votes()
{
	/*
	TEST DATA
	Sarah	- 75 votes
	David	- 18 votes
	Imran	- 92 votes
	Uzma	- 68 votes
	Chris	- 42 votes
	*/
	candidates_elements = sizeof(candidates) / sizeof(candidates[0]);
	cout << "Number of Electorial Candidates = " << candidates_elements << endl;
	
	int total = 0;

	for (int count = 0; count < MAX; count++)
	{
		cout << "Enter amount of votes for " << candidates[count] + " : ";
		cin >> votes[count];
		total = total + votes[count];
	}// end for loop

}// end method

void main()
{
	get_votes();
	mostvotes();
	above60();
}

void mostvotes()
{
	int top = 1;
	int maximum = votes[0];
	for(int count = 1; count < MAX; count++)
	{
		if(votes[count] > maximum)
		{
			maximum = votes[count];
			top = count;
		}
	}

	cout << "The Winner of the Election with " << maximum << " Votes Was : " << candidates[top] << endl;
}

void above60()
{
	/*
1.	 get required value
2.	 set occurrences Count to 0
3.	 loop for every element in the array
4.	 if this element matches required value then
5.		 add 1 to occurrences[count] 
	 endif
loopend
6.	 print occurrences[count]

	*/

	int occurences = 0;

	for(int count = 0; count < MAX; count++)
	{
		if(votes[count] >= 60)
		{
			occurences++;
		}
	}
	cout << "There was " << occurences << " Candidates that had over 60 votes" << endl;
}
