#include <iostream>
using namespace std;

void love_me()
{
  char c;
  cout << endl << "Do you love me, answer y or n?: ";
  c = ' ';
  while(c!='n' && c!='y') {
    cin >> c;
    if(c!='n' && c!='y')
      cout << endl << "Invalid reply, try again: ";
  }
if(c=='n') {
    cout << endl << "I hate you ";
    love_me();
}
cout << endl << "I love you too!";
}

int main() //here i changed void main to int main
{
  love_me();
  return 0;
}
