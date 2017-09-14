#include <iostream>
using namespace std;

int main()
{
  char ch='0';
  cout<<"Enter the character ";
  cin>>ch;
  if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
    cout<<endl<<"the character is an alphabet";
  else if((ch>=48)&&(ch<=57))
    cout<<endl<<"The character is a digit";
  else
    cout<<endl<<"The character is a special character";
  return 0;
}
