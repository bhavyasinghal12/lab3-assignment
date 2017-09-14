#include <iostream>
using namespace std;

int main()
{int year=0;
  cout<<"Enter the year ";
  cin>>year;
  if(year%100==0)
  {if(year%400==0)
    cout<<endl<<"This is a leap year ";
  else
    cout<<endl<<"This is not a leap year";
  }
  else if(year%100!=0)
  {if(year%4==0)
  cout<<endl<<"This is a leap year ";
  else
    cout<<endl<<"This is not a leap year";
  }
  return 0;
}
