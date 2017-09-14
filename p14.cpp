#include <iostream>
using namespace std;

int main()
{
  float a,b,c,sum;
  
  cout<<"Enter three angles for a triangle: ";
  cin>>a>>b>>c;
  sum=a+b+c;
  if(sum==180)
  {
    cout<<" the given set of angles can form a triangle";
  }
  else
  {
  cout<<" the given set of angles cannot form a triangle";
  }
  return 0;
}
