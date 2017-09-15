#include <math.h>
using namespace std;
 
int main() {
 
  int i,n,l,f;

  cout<<"Enter a number(INTEGER):";
  cin>>n;
  int n1=abs(n);
  l=n1%10;
while(n1>0)
{
f=n1;
n1=n1/10;
}
cout<<"\nthe first digit of the number "<<n<<" is "<<f<<" and last digit is "<<l;
	return 0;
}
