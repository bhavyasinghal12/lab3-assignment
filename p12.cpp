#include <iostream>
using namespace std;

int main()
{
  int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int n=0;
  cout<<"Enter the month number(1-12)";
  cin>>n;
  if(n>=1 && n<=12)
  {
    cout<<endl<<"The number of days in month number "<<n<<" is "<<mon[n-1];
  }
  else
    cout<<endl<<"enter a valid month number!";
  if(n==2)
    cout<<endl<<"This month has 29 days in leap years";
  return 0;
}
