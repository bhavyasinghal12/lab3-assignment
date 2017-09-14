#include <iostream>
using namespace std;

int main() {
	int i=1,n;
	cout<<"enter a number";
	cin>>n;
	cout<<"\nMultiplication table of "<<n<<" is as following"<<endl;
	
	while(i<=10)
	{
	cout<<n<<"X"<<i<<"="<<n*i<<endl;
	i++;
	}
	return 0;
}
