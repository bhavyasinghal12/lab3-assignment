#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n=0;
  int dig=0;
  cout<<"Enter a number(INTEGER):";
  cin>>n;
  int n1=abs(n);
  while(n1>0)
  {
    n1=n1/10;
    dig++;
  }
  if(n!=0)
  {
    cout<<"\nThe number of digits in "<<n<<" is "<<dig;
 }
else
 {
 cout<<"\nThe number of digits in "<<n<<" is 1";
 }
  return 0;
 }
