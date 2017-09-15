#include <iostream>
using namespace std;
 int main()
 {int n,m,product=1;
 cout<<"Enter a number: ";
 cin>>n;
 while(n>0)
 {m=n%10;
 product=product*m;
 n=n/10;
 }
 cout<<"\nproduct of digits is "<<product;
 return 0;
 }
