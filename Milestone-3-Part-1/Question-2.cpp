//2. Display sum of elements in an array.

#include<iostream>
using namespace std;

int main()
{
	int i,n,a=0;
	int arr[n];
	
	cout<<"enter n:";
	cin>>n;
	cout<<"enter elements:";
	for(i=0;i<n;i++){
		cin>>arr[i];
		a=a+arr[i];
	}
	cout<<"sum:";
		cout<<a;
}
