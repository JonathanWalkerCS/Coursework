#include <iostream>
using namespace std;
int main() 
{
/*
Date: 1/20/2023
Goal: Computes the area of a circle and the circumference of a circle.  
The solution first assigns a value for the radius of a circle then,
uses that value to compute the area and circumference based on that radius.
The area of a circle is pi times the radius squared. pi is 3.14.
The circumference of a circle is 2 times pi times the radius.
Course: Fundamentals of programming
*/

  int radius = 5;
  float pi = 3.14;
  float circ;
  float area;
 
  circ = 2 * (pi * radius);
  cout << "The circumference is " << circ << endl;

  area = pi * (radius * radius);
  cout << "The area is " << area << endl;
return 0;
}