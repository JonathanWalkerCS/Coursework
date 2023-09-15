#include <iostream>
#include <string>
using namespace std;
int main()
{
/*
Date: 9/14/2023 
Goal: Write a C++ statement that outputs the values of name and studyHours with the appropriate text. 
Course: Object-oriented programming
*/

string name;
double studyHours; 

cout << "Please enter a name: " << endl;
cin >> name;


cout << "Please enter the amount of hours you need to study: " << endl;
cin >> studyHours;

cout << "Hello, " << name << 
"! On Saturday, you need to study " << 
studyHours << " hours for the exam." << endl;

return 0;
}
