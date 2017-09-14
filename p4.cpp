
#include <iostream>
using namespace std;

int main() {
int a=0,b,c;
cout<<" enter a number"<<endl;
cin>>a;
b=a%5;
c=a%11;
if(b==0 && c==0)
cout<<endl<<" number is divisible by 5 and 11";
else
cout<<endl<<" number is not divisible by 5 and 11";
  return 0;
}
