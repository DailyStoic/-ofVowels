//This program determines an input as a string and determines if it is a vowel or not.

#include <iostream>
using namespace std;

void int numOfVowels=0;

int main()
{
  char c;
  int isLowercaseVowel, isUppercaseVowel;

  cout<<" Enter Letter: ";
  cin>>c;
  isLowercaseVowel = (c== 'a' || c== 'e' || c== 'i' || c== 'o');
  isUppercaseVowel = (c== 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U');

  if (isLowercaseVowel || isUppercaseVowel)
  cout <<c<< " is a vowel";
  else cout <<c<< " is not a vowel";
  return 0;
}
void printNumOfVowels(string userString);
{
 int numOfVowels=0;
string userString="";
  cout<<"Enter a string: "<<endl;

  getline (cin,userString);
  
  for(int i =0;i<userString.length();i++){
    if ((userString[i]=='a' || userString[i]=='e' || userString[i]=='i' || userString[i]=='o' || userString[i]=='u' || userString[i]=='A' || userString[i]=='E'|| userString[i]=='I' || userString[i]=='O' || userString[i]=='U') && i!=0)
    numOfVowels=numOfVowels+1;
    }
    cout<<numOfVowels<<endl;
}
  

