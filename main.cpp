//Author: Andrea Ortiz
#include <iostream>
#include <fstream>
#include "libraries/bitmap.h"
using namespace std;


int main()
{
  //First Deliverable: Ask the user for a file name, open that file then find and display on the console each color value in the file
  string filename;
  fstream reader;
  string color = "";
   

  cout << "Enter the name of the file to analyze the color pallate.\n";
  cin >> filename;

  reader.open(filename, ios::in);
  if (reader.is_open()) 
  {
  cout << "File has been opened.\n";

    do
    {
      getline(reader,color);
      //insert code to retrieve the hexa dec code, of the colors (#000) from the file (i am unware how to retrieve the #s from the file but i believe this is where that code would go)
      cout << "We have found the following colors in the file: " << color << endl;
    }
    while (!reader.eof());
    
  reader.close();
  }
  else 
  {
    cout << "File cannot be opened.\n";
  }

  return 0;
}



