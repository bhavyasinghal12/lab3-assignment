#include <iostream>
using namespace std;

int main()
{
  char ch='0';
  cout<<"Enter the character ";
  cin>>ch;
  if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
    cout<<endl<<"The character is an alphabet";
  else 
    cout<<endl<<"The character is not an alphabet";
  return 0;
}
