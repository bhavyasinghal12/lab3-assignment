#include <iostream>
using namespace std;

int main() {
	float a=0,b=0,c=0;
cout << "enter three distinct numbers"<<endl;
cin>>a >>b >>c;
if(a>b)
{if(a>c)
cout<<endl<<a<<" is largest of three numbers"<<endl;
else
cout<<endl<<c<<" is largest of three numbers"<<endl;
}
else if(b>a)
{if(b>c)
cout<<endl<<b<<" is largest of three numbers"<<endl;
else
cout<<endl<<c<<" is largest of three numbers"<<endl;
}

  return 0;
}
