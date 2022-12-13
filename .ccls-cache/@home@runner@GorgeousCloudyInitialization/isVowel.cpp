//This program determines an input as a string and determines if it is a vowel or not.

#include <iostream>
using namespace std;

int main()
{
  char c;
  int isLowercaseVowel, isUppercaseVowel;

  cout<<" Enter Letter: ";
  cin>>c;
  isLowercaseVowel = (c== 'a' || c== 'e' || c== 'i' || c== 'o'|| c== 'u');
  isUppercaseVowel = (c== 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U');

  if (isLowercaseVowel || isUppercaseVowel)
  cout <<c<< " is a vowel";
  else cout <<c<< " is not a vowel";
  return 0;
  }