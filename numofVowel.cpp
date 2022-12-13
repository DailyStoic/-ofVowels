//This program determines an input as a string and outputs the number of vowels
#include <iostream>
#include <string>

using namespace std;

int main()
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
    return 0;
}