#include <iostream>

using namespace std;

int main()
{
  string phrase = "Alice Academy";
  cout << phrase << endl;
  cout << phrase.length() << endl;
  cout << phrase[0] << endl;

  phrase[0] = 'S';
  cout << phrase << endl;

  cout << phrase.find("Academy", 0); //passing argument/parameter. index position

  cout << phrase.substr(); //substring

  return 0;
}