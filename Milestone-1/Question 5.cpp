#include<iostream>
using namespace std;
int main()
{
	int a,b,remainder,quotient;
	cout<<"Enter 2 numbers\t";
	cin>>a>>b;
	
	remainder=a%b;
	quotient=a/b;
	
	cout<<"Remainder is="<<remainder<<"\n";
	cout<<"Quotient is="<<quotient;
}
