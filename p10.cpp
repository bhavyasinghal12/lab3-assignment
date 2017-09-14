#include <iostream>
using namespace std;

int main()
{
  char ch='0';
  cout<<"Enter the character ";
  cin>>ch;
  if((ch>=65)&&(ch<=90))
    cout<<endl<<"The character is an UPPERCASE alphabet";
  else if((ch>=97)&&(ch<=122))
    cout<<endl<<"The character is a LOWERCASE alphabet";
  else
    cout<<endl<<"IT IS NOT AN ALPHABET!";
  return 0;
}
