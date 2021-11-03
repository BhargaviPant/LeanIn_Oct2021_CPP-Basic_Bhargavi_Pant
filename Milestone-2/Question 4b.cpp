/*
b.(n=5)
A
A B
A B C
A B C D
A B C D E
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	char c='A';
	cout<<"n=";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		c='A';
		for(int j=1;j<=i;j++)
		{
		cout<<c<<" ";
		c++;
		}cout<<endl;
	}
}
