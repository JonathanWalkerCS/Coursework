#include <iostream>
using namespace std;
int main()
{

/*
Date: 1/20/2023
Goal: Calculates the total hours worked during the week.  
Assigns a value for the hours worked for each day  in a week (M - F). 
Calculates the total hours worked for the week by summing all of the values for each day. 
Outputs the total hours worked.
Course: Fundamentals of programming
*/

  int mon = 3;
  int tue = 4;
  int wed = 5;
  int thur = 6;
  int fri = 7;

  int total;

  total = mon + tue + wed + thur + fri;  
  cout << "The total hours worked for the week is " << total << endl;
return 0;
}