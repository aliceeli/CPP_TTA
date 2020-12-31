#include <iostream>
using namespace std;

int main() 
{
int year;
cout << "Enter a year and I will tell you if it is a leap year: " << endl;
cin >> year;

if (year > 1751) {
if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";
}

if (year < 1751) {
  cout << "There were no leap years before 1752.";
}


return 0;
}