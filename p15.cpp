#include <iostream>
using namespace std;

int main()
{
  float s1,s2,s3;
  cout<<"Enter the three angles of the triangle: ";
  cin>>s1>>s2>>s3;
  if(((s1+s2)>s3)&&((s2+s3)>s1)&&((s3+s1)>s2))
  {
    cout<<" We can form a triangle with the given sides";
  }
  else
  {
    cout<<" we cannot form a triangle with given set of sides";
  }
  return 0;
}
