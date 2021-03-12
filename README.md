# Problematic Palattes.

## Description

This program will take a palette given in a SVG file and determine if (and how drastically) the color combinations are difficult for those with color blindness.

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Andrea Ortiz

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Computer: Enter the name of the file to analyze the color palette.

User: n

Computer: File cannot be opened.
```

## C++ Guide

### Variables and Data Types

The data types used have been string and fstream, both have different variables set up amongst the respective data types.


### Console Input and Output

To start the program the computer prompts the user what file they would like opened. After which the user is able to input any name of a file.

### Decisions

Depending on the users input, the program will output a message stating that the file was successfully opened. Or a statement that the file was unable to be opened.

### Iteration

Using a do-while loop the program is able to cycle through the lines of code to search for the colors being used in an SVG file.

### File Input and Output

The computer finds the file requested by the user and then opens it to search for the colors listed in the SVG file, it will then close the file after the colors have been output.

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
