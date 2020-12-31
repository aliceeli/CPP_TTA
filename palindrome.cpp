#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str=" "; 
    int i;
    cout<<"Enter a word and I will tell you if it is a palindrome: ";
    cin >> str;
    for(i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == str) {
          cout << "That is a palindrome.";
        }
    }
    return 0;
}

// this doesn't work but am not able to work out how to make it work!! 