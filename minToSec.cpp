#include <iostream>
using namespace std;

int main() {
cout << "I will convert minutes into seconds for you." << endl;
int minutes;
cout << "Minutes: ";
cin >> minutes;
int seconds = minutes*60;
cout << minutes << " minutes is " << seconds << " seconds." << endl;
return 0;
}