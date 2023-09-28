#include <iostream>
using namespace std;
int main() {
  
int n;
int o = 1;
int l = 1;
cout << "Please enter the value of n: ";
cin >> n;

if (n >= 1)
{

      while (o < n)
      {
      o++;
      l = l * o;
      }
cout << "The factorial of " << n << "! equals: " << l << endl;
}

else if (n == 0)
{
cout << "The factorial of " << n << "! equals: " << l << endl;
}

else
{
cout << "An invalid value was entered, only nonnegative integers are allowed" << endl;
}

return 0;
}
