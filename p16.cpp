#include <iostream>
using namespace std;

int main()
{
  float s1,s2,s3;
  cout<<"Enter the three angles of the triangle: ";
  cin>>s1>>s2>>s3;
  if(((s1+s2)>s3)&&((s2+s3)>s1)&&((s3+s1)>s2))
  { 
    if(s1==s2 && s2==s3)
     cout<<" THE TRIANGLE IS AN EQUILATERAL TRIANGLE";
    else if(s1==s2 || s1==s3 || s2==s3)
     cout<<" THE TRIANGLE IS AN ISOSCELES TRIANGLE";
    else
     cout<<" THE TRIANGLE IS A SCALENE TRIANGLE";
  }
  else
  {
    cout<<" the sides given do not form a triangle";
  }
  return 0;
}
