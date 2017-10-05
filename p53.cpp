#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "\n \nEnter a number: ";
  cin >> num;
  int i=1,sum=0;
  while(i<num)
  {
    if(num%i==0)
      sum=sum+i;
    i++;
  }
  if(sum==num)
         cout << num  <<  " is a perfect number";
  else
         cout << num << " is not a perfect number";
  return 0;
}
