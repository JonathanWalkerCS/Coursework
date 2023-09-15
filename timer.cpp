#include <iostream>
using namespace std;
int main() 
{

/*
Date: 9/14/2023 
Goal: Prompt the user to input the elapsed time for an event in seconds, then output said time in hour:minutes:seconds format (00:00:00)
Course: Object-oriented programming
*/

int time, hours, minutes, seconds;
cout << "Please enter the elapsed time for the event in seconds:" << endl;
cin >> time;
hours = time / 3600;
minutes = (time%3600) /60;
seconds = time%60;
cout <<  time << endl;
cout << "The elapsed time for the event is: " << hours << ":" 
<< minutes << ":" << seconds << endl;
return 0;
}