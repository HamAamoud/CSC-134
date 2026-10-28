// M5LAB2
// Hamza Aamoud
//CSC 134
//Debugging and completing someones program

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea(double width, double length);
void displayData(double area, double width, double length);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(width, length);
   
   // Display the rectangle's data.
   displayData(area, width, length);
          
   return 0;
}

double getWidth () {
   cout << "Enter desired width (any int or double) : ";
   double width;
   cin >> width;
   return width;
}

double getLength () {
   cout << "Enter desired length (any int or double) : ";
   double length;
   cin >> length;
   return length;
}

double getArea (double width, double length) {
   double area = width * length;
   return area;
}

void displayData (double area, double width, double length) {
   cout << "Width    : " << width << endl;
   cout << "Length   : " << length << endl;
   cout << "Area     : " << area << endl;
}