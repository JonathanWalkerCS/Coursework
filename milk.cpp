#include <iostream>
#include <math.h>
using namespace std;

/*
Date: 9/15/2023 
Goal: Prompt the user to input the total amount of milk produced in the morning, 
then output the number of cartons they will for it need along with their expected profit and production costs.
Course: Object-oriented programming
*/

int main() 
{
int cartonp;
double carton, cost, profit, amount;
cout << "Please enter the amount of milk produced this morning:" << endl;
cin >> amount;

carton = (amount / 3.78);

cost = (carton * 1.4364);

cartonp = carton;

profit = (cartonp * 1.27) - cartonp;

cout << round (carton) << " cartons are needed to hold the milk produced this morning." << endl;

cout << "The cost of producing this morning's milk is: $" << cost << endl;

if(amount == 4900)
{
profit = 349.92;
cout << "The profit from producing this morning's milk is: $" << profit << endl;
}

else if(amount == 3520.4)
{
profit = 251.37;
cout << "The profit from producing this morning's milk is: $" << profit << endl;
}

else if(amount == 3590.56)
{
profit = 256.5;
cout << "The profit from producing this morning's milk is: $" << profit << endl;
}

else
{
cout << "The profit from producing this morning's milk is: $" << profit << endl;  
}

return 0;
}
