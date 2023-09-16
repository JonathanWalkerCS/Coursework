#include <iostream>
using namespace std;
int main()
{
/*
Date: 1/27/2023
Goal: Read 4 last names, gpa's, and bank balance from a user and then 
print the names, gpa's, the average of the gpa's, and a sum of the balances.
Course: Fundamentals of programming
*/

string l1,
l2,
l3,
l4; 
double g1,
g2,
g3,
g4,
g5,
b1,
b2,
b3,
b4,
b5;

cout << "Please enter a last name, gpa, and bank balance" << endl;

cin >> l1 >> g1 >> b1;

cout << "Please enter a last name, gpa, and bank balance" << endl;

cin >> l2 >> g2 >> b2;

cout << "Please enter a last name, gpa, and bank balance" << endl;

cin >> l3 >> g3 >> b3;

cout << "Please enter a last name, gpa, and bank balance" << endl;

cin >> l4 >> g4 >> b4;

g5 = (g1 + g2 + g3 + g4) / 4;

b5 = b1 + b2 + b3 + b4;

cout << l1 << " has a " << g1 << " GPA and a Bank balance of $" << b1 << endl;
cout << l2 << " has a " << g2 << " GPA and a Bank balance of $" << b2 << endl;
cout << l3 << " has a " << g3 << " GPA and a Bank balance of $" << b3 << endl;
cout << l4 << " has a " << g4 << " GPA and a Bank balance of $" << b4 << endl;
cout << "The average GPA is " << g5 << endl;
cout << "The sum of the bank balances is $" << b5 << endl;
}