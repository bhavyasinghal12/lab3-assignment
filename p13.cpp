#include <iostream>
using namespace std;

int main()
{
  int a=0;
  int M2000,M500,M200,M100,M50,M20,M10,M5,M2,M1;
  cout<<"TAKING THE AVAILABLE DENOMINATIONS AS 5,10,20,50,100,200,500,2000";
  cout<<endl<<"Enter the amount";
  cin>>a;
  M2000=a/2000;
  a%=2000;
  M500=a/500;
  a%=500;
  M200=a/200;
  a%=200;
  M100=a/100;
  a%=100;
  M50=a/50;
  a%=50;
  M20=a/20;
  a%=20;
  M10=a/10;
  a%=10;
  M5=a/5;
  a%=5;
  M2=a/2;
  a%=2;
  M1=a/1;
  cout<<endl<<"The denominations are: ";
  cout<<endl<<"Rs 1 = "<<M1;
  cout<<endl<<"Rs 2 = "<<M2;
  cout<<endl<<"Rs 5 = "<<M5;
  cout<<endl<<"Rs 10= "<<M10;
  cout<<endl<<"Rs 20= "<<M20;
  cout<<endl<<"Rs 50 = "<<M50;
  cout<<endl<<"Rs 100 = "<<M100;
  cout<<endl<<"Rs 200 = "<<M200;
  cout<<endl<<"Rs 500 = "<<M500;
  cout<<endl<<"Rs 2000 = "<<M2000;
  
  return 0;
}
