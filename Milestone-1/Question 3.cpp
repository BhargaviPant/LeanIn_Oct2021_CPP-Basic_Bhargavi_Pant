#include<iostream>
using namespace std;
int main()
{
	int x,y,z,a,b;
	cout<<"Enter a value:";
	cin>>x;
	y=x;
	z=x;
	cout<<"x="<<x<<"\n";
	
	y=++x; //pre increment
	cout<<"y="<<y<<"\t";
	cout<<"x="<<x<<"\n";
	
	z=x++; //post increment
	cout<<"z="<<z<<"\t";
	cout<<"x="<<x<<"\n";
	
	a=--x; //pre decrement
	cout<<"a="<<a<<"\t";
	cout<<"x="<<x<<"\n";
	
	b=x--; //post decrement
	cout<<"b="<<b<<"\t";
	cout<<"x="<<x<<"\n";
}
