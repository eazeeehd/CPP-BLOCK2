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

};//end of class definition
