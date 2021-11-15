//7. Create an array and then update its elements' value as the sum of current and pervious elements.

#include<iostream>
using namespace std;

int main()
{
	int n,m,a[100],arr2[100],i,j;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter array: ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Array:";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Updated Array:";
	for(i=0;i<n;i++){
		m=m+a[i];
		cout<<m<<" ";
	}
}
