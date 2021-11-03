/*
d.(n=5)
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main()
{
	int n,a=1;
	cout<<"n=";
	cin>>n;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=i;j++){
		cout<<a<<" ";
		a++;
	}cout<<endl;
	}cout<<endl;
}
