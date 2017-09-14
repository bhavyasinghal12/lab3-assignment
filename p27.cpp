#include <iostream>
using namespace std;

int main() {
	int i=1,n,sum=0;
	cout<<"enter a number";
	cin>>n;
	cout<<"\n Sum of all natural numbers upto "<<n<<" is ";
	
	while(i<=n)
	{
             sum+=i;
	i++;
	}
	cout<<sum;
	return 0;
}
