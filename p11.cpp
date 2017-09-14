#include <iostream>
using namespace std;

int main()
{
  int n=0;
  cout<<"Enter the day number in the week(1-7)";
  cin>>n;
  if(n==1)
    cout<<endl<<"The day is MONDAY";
  else if(n==2)
    cout<<endl<<"The day is TUESDAY";
  else if(n==3)
    cout<<endl<<"The day is WEDNESDAY";
  else if(n==4)
    cout<<endl<<"The day is THURSDAY";
  else if(n==5)
    cout<<endl<<"The day is FRIDAY";
  else if(n==6)
    cout<<endl<<"The day is SATURDAY";
  else if(n==7)
    cout<<endl<<"The day is SUNDAY";
  else
    cout<<endl<<"please enter digut from 1 to 7!";
  return 0;
}
