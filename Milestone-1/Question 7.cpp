#include<iostream>
using namespace std;
int main()
{
	int a,b,t;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	cout<<"a=\t"<<a<<"\nb=\t"<<b;
	t=a;
	a=b;
	b=t;
	cout<<"\nSwapped numbers:\n";
	cout<<"a=\t"<<a<<"\nb=\t"<<b;
}
