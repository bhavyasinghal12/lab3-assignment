#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int num=0;
int dig=0, rev=0,a=0;
cout<<"\nEnter the number(INTEGER): ";
cin>>num;
int num1=abs(num);
while(num1>0)
{
num1=num1/10;
dig++;
}
num1=abs(num);
for(int i=dig;i>0;i--)
{
a=num1%10;
rev=rev*10+a;
num1=num1/10;
}
if(num==rev)
{
cout<<"\n \nTHIS IS A PALINDROME NUMBER";
}
else
cout<<"\n \nTHIS IS NOT A PALINDROME NUMBER";
return 0;
} 
