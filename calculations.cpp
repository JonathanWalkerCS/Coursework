#include <iostream>
using namespace std;
int main()
{
/*
Date: 2/3/2023
Goal: Prompt the user to enter a mathematical expression and generate the answer for the expression, 
writing the output to the screen. Read the expression the user types, 
calculate the result of applying the operation to the two integer numbers, 
and then display the formatted result on the screen. 
Course: Fundamentals of programming
*/

int num1, num2, num3;
char operand;

cout << "Please enter an expression:" << endl;
cin >> num1 >> operand >> num2;


if (operand == '+'){
num3 = num1 + num2;
cout << num1 << " + " << num2
<< " = " << num3 << endl;
}


if (operand == '-'){
num3 = num1 - num2;
cout << num1 << " - " << num2
<< " = " << num3 << endl;
}

if (operand == '*'){
num3 = num1 * num2;
cout << num1 << " * " << num2
<< " = " << num3 << endl;
}

if (operand == '/'){
num3 = num1 / num2;
cout << num1 << " / " << num2
<< " = " << num3 << endl;
}

return 0;
}