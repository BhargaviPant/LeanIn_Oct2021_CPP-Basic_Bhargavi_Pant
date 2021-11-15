//1. Create a character array of size n and display its content.

#include<iostream>
using namespace std;

int main()
{
	int i, n;
	char a[n];
	cout<<"n=";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
