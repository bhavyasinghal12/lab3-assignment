#include <iosteam>
using namespace std;
int main()
{
 float a=0,b=0;
cout<<"enter two numbers"<<endl;
cin>>a >>b;
if(a<b)
{cout<<b<<" is greater than "<<a;}
else if(b<a)
{cout<<a<<" is greater than "<<b;}
else if(b=a)
{cout<<"please enter distinct numbers";}
	return 0;

}
