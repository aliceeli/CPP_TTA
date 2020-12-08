#include <iostream>

using namespace std;

int main()
{
  double pi = 3.1415;
  cout << "π = ";
  cout << pi << endl;
  cout << "Please enter the diameter of your circle in cm: " << endl;
  double i;
  cin >> i;
  double answer = 2*pi*(i/2);
  cout << "The circumference (2πr) is " << answer << "cm";
  
  return 0;
}