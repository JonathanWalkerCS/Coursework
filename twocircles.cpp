#include <iostream>
using namespace std;
int main() 
{
/*
Date: 1/27/2023
Goal: Take the radius entered by a user and use it to compute a circles area. 
Course: Fundamentals of programming
*/

float pi = 3.14;
float radius;
float area;
 
cout << "Please enter the circle's radius" << endl;
cin >> radius;

area = pi * (radius * radius);

cout << "The area of the circle is " << area << endl;
return 0;
}