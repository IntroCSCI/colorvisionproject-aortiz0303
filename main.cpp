//Author: Andrea Ortiz
#include <iostream>
#include <fstream>
#include "libraries/bitmap.h"
using namespace std;

// use of more than one data type. appropriate use of both standard input and output.more than one use of decisions, including use of more than one of the following: if, else if, else, switch. appropriate use of at least one loop. appropriate use of file input and/or output

int main()
{
  //Ask the user for a file name, open that file then find and display on the console each color value in the file
  string filename;
  fstream reader;

  cout << "Enter the name of the file to analyze the color pallate.\n";
  cin >> filename;

  reader.open(filename, ios::in);
  if (reader 
  

  return 0;
}
