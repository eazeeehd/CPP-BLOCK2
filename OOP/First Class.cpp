#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

//define class for files
class File 
{
  //creation of file class has private data members of name and size
  private:
  string fname;
  int fsize;
  
  // default constructor - used when object created
  //set and get methods for each of the data items
  // all are public
  public:
  // constructor same name as class
  File()
  {// set data items to default value
     fsize = 0;
     fname.assign("");
  }//end of constructor

  //set methods to set the value within the program
  
  void set_fname()
  {
    cout << "Enter file name" << endl;
    cin >> fname;
  }
  
  void set_fsize()
  {
    cout << "Enter file size ";
    cin >> fsize;
  }

  //get methods - return the read only value thats stored in the data

  string get_fname()
  {
	return fname;
  }

  int get_fsize()
  {
	return fsize;
  }

  
};//end of class definition

// in actual program
// create file objects

File file1;
File file2;
File f3;

void file_details(); //accesses the set methods
void print(); // accesses the get methods

void file_details()
{
	file1.set_fname();
	file2.set_fname();
	f3.set_fname();

	file1.set_fsize();
	file2.set_fsize();
	f3.set_fsize();
}

void print()
{
	cout << "File objects " << endl;
	cout << "1. " << file1.get_fname() << "\t" << file1.get_fsize() << endl;
	cout << "2. " << file2.get_fname() << "\t" << file2.get_fsize() << endl;
	cout << "1. " << f3.get_fname() << "\t" << f3.get_fsize() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	file_details();
	print();
	return 0;
}
