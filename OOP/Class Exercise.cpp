#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

//define class for files
class File 
{
  //creation of file class has private data members of name and size
  private:
  string name, extension;
  int size;
  
  // default constructor - used when object created
  //set and get methods for each of the data items
  // all are public
  public:
  // constructor same name as class
  File()
  {// set data items to default value
     size = 0;
     name.assign("");
	 extension.assign("");
  }//end of constructor

  //set methods to set the value within the program
  
  void set_name()
  {
    cout << "Enter file name" << endl;
    cin >> name;
  }
  
  void set_extension()
  {
	cout << "Enter file extension "<< endl;
    cin >> extension;
  }

  void set_size()
  {
    cout << "Enter file size ";
    cin >> size;
  }

  //get methods - return the read only value thats stored in the data

  string get_name()
  {
	return name;
  }

  string get_extension()
  {
	return extension;
  }

  int get_size()
  {
	return size;
  }

  
};//end of class definition

// in actual program
// create file objects

File f1;
File f2;
File f3;
File f4;
File f5;

void file_details(); //accesses the set methods
void print(); // accesses the get methods

void file_details()
{
	f1.set_name();
	f2.set_name();
	f3.set_name();
	f4.set_name();
	f5.set_name();
	f1.set_extension();
	f2.set_extension();
	f3.set_extension();
	f4.set_extension();
	f5.set_extension();
	f1.set_size();
	f2.set_size();
	f3.set_size();
	f4.set_size();
	f5.set_size();
}

void print()
{
	cout << "File objects " << endl;
	cout << "1. " << f1.get_name() << "\t" << f1.get_extension() << "\t" << f1.get_size() << endl;
	cout << "2. " << f2.get_name() << "\t" << f2.get_extension() << "\t" << f2.get_size() << endl;
	cout << "3. " << f3.get_name() << "\t" << f3.get_extension() << "\t" << f3.get_size() << endl;
	cout << "4. " << f4.get_name() << "\t" << f4.get_extension() << "\t" << f1.get_size() << endl;
	cout << "5. " << f5.get_name() << "\t" << f5.get_extension() << "\t" << f2.get_size() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	file_details();
	print();
	return 0;
}
